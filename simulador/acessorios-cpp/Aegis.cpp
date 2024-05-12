#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Aegis.hpp"

Aegis::Aegis(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Aegis::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Aegis::getResistencia() 
{
    return this->resistencia;
}