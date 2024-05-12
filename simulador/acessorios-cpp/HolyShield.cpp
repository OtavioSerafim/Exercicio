#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/HolyShield.hpp"

HolyShield::HolyShield(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string HolyShield::getDescricaoArma() 
{
    return this->descricaoArma;
}

int HolyShield::getResistencia() 
{
    return this->resistencia;
}