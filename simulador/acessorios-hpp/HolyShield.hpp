#ifndef HOLYSHIELD
#define HOLYSHIELD

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class HolyShield : public ArmaDefesa
{
    public:
        HolyShield(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif