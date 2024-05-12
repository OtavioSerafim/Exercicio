#include "../personagens-hpp/Dante.hpp"

Dante::Dante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Dante::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Dante::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Dante::pegarDescricao() 
{
    return "Jackpot!";
}