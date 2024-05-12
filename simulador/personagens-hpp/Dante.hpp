#ifndef DANTE
#define DANTE
#include "../core-simulador-hpp/Personagem.hpp"
class Dante : public Personagem
{
    public:
        Dante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif