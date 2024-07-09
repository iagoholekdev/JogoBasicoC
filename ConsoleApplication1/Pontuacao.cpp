#include "Pontuacao.h"

int Pontuacao::erro = 0;
int Pontuacao::acerto = 0;

void Pontuacao::setaPontuacao(int dificuldade) {
    if (dificuldade == 1) {
        erro = 10;
        acerto = 15;
    }
    else if (dificuldade == 2) {
        erro = 15;
        acerto = 10;
    }
    else if (dificuldade == 3) {
        erro = 20;
        acerto = 5;
    }
}

int Pontuacao::getAcerto() {
    return acerto;
}

int Pontuacao::getErro() {
    return erro;
}
