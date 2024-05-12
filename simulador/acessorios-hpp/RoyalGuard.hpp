#ifndef ROYALGUARD
#define ROYALGUARD

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class RoyalGuard : public ArmaDefesa
{
    public:
        RoyalGuard(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif