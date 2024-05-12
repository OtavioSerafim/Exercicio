#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Beowulf.hpp"

Beowulf::Beowulf(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Beowulf::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Beowulf::getResistencia() 
{
    return this->resistencia;
}