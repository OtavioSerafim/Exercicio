#ifndef YAMATO
#define YAMATO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Yamato : public ArmaAtaque
{
    public:
        Yamato(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif