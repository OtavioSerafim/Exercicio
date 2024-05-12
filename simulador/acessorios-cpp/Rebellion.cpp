#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Rebellion.hpp"

Rebellion::Rebellion(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Rebellion::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Rebellion::gerarRuidoAtaque()
{
    return "Slash Slash";
}
