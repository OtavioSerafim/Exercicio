#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Yamato.hpp"

Yamato::Yamato(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Yamato::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Yamato::gerarRuidoAtaque()
{
    return "Slash Slash";
}
