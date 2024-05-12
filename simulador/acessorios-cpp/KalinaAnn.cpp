#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/KalinaAnn.hpp"

KalinaAnn::KalinaAnn(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int KalinaAnn::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string KalinaAnn::gerarRuidoAtaque()
{
    return "Pow Pow";
}
