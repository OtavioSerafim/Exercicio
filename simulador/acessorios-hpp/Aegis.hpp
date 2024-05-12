#ifndef AEGIS
#define AEGIS

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Aegis : public ArmaDefesa
{
    public:
        Aegis(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif