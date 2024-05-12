#ifndef SPARDA
#define SPARDA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Sparda : public ArmaAtaque
{
    public:
        Sparda(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif