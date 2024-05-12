#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/RedQueen.hpp"

RedQueen::RedQueen(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int RedQueen::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string RedQueen::gerarRuidoAtaque()
{
    return "Slash Slash";
}
