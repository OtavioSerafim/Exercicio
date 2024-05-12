#ifndef REBELLION
#define REBELLION

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Rebellion : public ArmaAtaque
{
    public:
        Rebellion(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif