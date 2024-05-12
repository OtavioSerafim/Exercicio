#ifndef BEOWULF
#define BEOWULF

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Beowulf : public ArmaDefesa
{
    public:
        Beowulf(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif