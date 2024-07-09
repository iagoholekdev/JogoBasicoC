#pragma once

class Pontuacao {
public:
    static int erro;
    static int acerto;

    static void setaPontuacao(int dificuldade);

    static int getAcerto();

    static int getErro();
};
