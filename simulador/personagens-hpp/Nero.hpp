#ifndef NERO
#define NERO
#include "../core-simulador-hpp/Personagem.hpp"
class Nero : public Personagem
{
    public:
        Nero(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif