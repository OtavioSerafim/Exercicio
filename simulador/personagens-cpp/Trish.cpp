#include "../personagens-hpp/Trish.hpp"

Trish::Trish(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Trish::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Trish::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Trish::pegarDescricao() 
{
    return "Eu sou a deusa da luz!";
}