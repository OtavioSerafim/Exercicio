#ifndef VERGIL
#define VERGIL
#include "../core-simulador-hpp/Personagem.hpp"
class Vergil : public Personagem
{
    public:
        Vergil(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif