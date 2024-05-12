#ifndef REDQUEEN
#define REDQUEEN

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class RedQueen : public ArmaAtaque
{
    public:
        RedQueen(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif