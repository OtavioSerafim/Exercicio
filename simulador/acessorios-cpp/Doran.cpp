#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Doran.hpp"

Doran::Doran(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Doran::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Doran::getResistencia() 
{
    return this->resistencia;
}