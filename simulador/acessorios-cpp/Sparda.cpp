#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Sparda.hpp"

Sparda::Sparda(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Sparda::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Sparda::gerarRuidoAtaque()
{
    return "Slash Slash";
}
