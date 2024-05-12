#ifndef LADY
#define LADY
#include "../core-simulador-hpp/Personagem.hpp"
class Lady : public Personagem
{
    public:
        Lady(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif