#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Aegis.hpp"
#include "../acessorios-hpp/Beowulf.hpp"
#include "../acessorios-hpp/HolyShield.hpp"
#include "../acessorios-hpp/Doran.hpp"
#include "../acessorios-hpp/RoyalGuard.hpp"
#include "../acessorios-hpp/Sparda.hpp"
#include "../acessorios-hpp/Yamato.hpp"
#include "../acessorios-hpp/Rebellion.hpp"
#include "../acessorios-hpp/RedQueen.hpp"
#include "../acessorios-hpp/KalinaAnn.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Dante.hpp"
#include "../personagens-hpp/Vergil.hpp"
#include "../personagens-hpp/Lady.hpp"
#include "../personagens-hpp/Nero.hpp"
#include "../personagens-hpp/Trish.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* armaRosa = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* armaColher = new Colher("Colher de Pata",0,50);
    ArmaAtaque* armaSparda = new Sparda("Sparda", 0, 100);
    ArmaAtaque* armaYamato = new Yamato("Yamato", 0, 100);
    ArmaAtaque* armaKalinaAnn = new KalinaAnn("Kalina Ann", 0, 100);
    ArmaAtaque* armaRedQueen = new RedQueen("Red Queen", 0, 100);
    ArmaAtaque* armaRebellion = new Rebellion("Rebellion", 0, 100);

    ArmaDefesa* escudoLatão = new Escudo("Latão", 1);
    ArmaDefesa* escudoAegis = new Aegis("Aegis", 10);
    ArmaDefesa* escudoBeowulf = new Beowulf("Beowulf", 30);
    ArmaDefesa* escudoHolyShield = new HolyShield("Holy Shield", 20);
    ArmaDefesa* escudoDoran = new Doran("Doran", 15);
    ArmaDefesa* escudoRoyalGuard = new RoyalGuard("Royal Guard", 50);

    Personagem* chaves = new Chaves(1, "Chaves", 100, armaRosa, escudoLatão);
    Personagem* dante = new Dante(2, "Dante", 100, armaRebellion, escudoRoyalGuard);
    Personagem* vergil = new Vergil(3, "Vergil", 100, armaYamato, escudoBeowulf);
    Personagem* lady = new Lady(4, "Lady", 100, armaKalinaAnn, escudoHolyShield);
    Personagem* nero = new Nero(5, "Nero", 100, armaRedQueen, escudoDoran);
    Personagem* trish = new Trish(6, "Trish", 100, armaSparda, escudoAegis);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(chaves, 1);
    simulador->adicionarPersonagem(dante, 1);
    simulador->adicionarPersonagem(vergil, 1);
    simulador->adicionarPersonagem(lady, 2);
    simulador->adicionarPersonagem(nero, 2);
    simulador->adicionarPersonagem(trish, 2);

    simulador->iniciarSimulacao();

    return 0;
}