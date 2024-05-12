#include "../personagens-hpp/Nero.hpp"

Nero::Nero(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Nero::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Nero::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Nero::pegarDescricao() 
{
    return "Eu preciso de mais poder!";
}