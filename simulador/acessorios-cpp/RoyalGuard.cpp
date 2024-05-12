#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/RoyalGuard.hpp"

RoyalGuard::RoyalGuard(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string RoyalGuard::getDescricaoArma() 
{
    return this->descricaoArma;
}

int RoyalGuard::getResistencia() 
{
    return this->resistencia;
}