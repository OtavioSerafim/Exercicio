#include "../personagens-hpp/Vergil.hpp"

Vergil::Vergil(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Vergil::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Vergil::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Vergil::pegarDescricao() 
{
    return "Me mostre sua motivação!";
}