#ifndef TRISH
#define TRISH
#include "../core-simulador-hpp/Personagem.hpp"
class Trish : public Personagem
{
    public:
        Trish(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif