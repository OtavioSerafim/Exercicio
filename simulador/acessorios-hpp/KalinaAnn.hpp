#ifndef KALINAANN
#define KALINAANN

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class KalinaAnn : public ArmaAtaque
{
    public:
        KalinaAnn(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif