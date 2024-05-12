#include "../personagens-hpp/Lady.hpp"

Lady::Lady(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Lady::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Lady::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Lady::pegarDescricao() 
{
    return "Vou te mostrar o que uma garota pode fazer!";
}