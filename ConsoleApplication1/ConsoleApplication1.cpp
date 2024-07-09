#include <iostream>
#include <string>
#include "Pontuacao.h"
#include "Pergunta.h"
#include <locale>


using namespace std;


int main() {
    int dificuldade;
    int pontuacao = 100;
    string resposta;

    std::locale::global(std::locale("en_US.UTF-8"));

    cout << "--------------------------" << endl;
    cout << "Bem-vindo ao jogo do pai." << endl;
    cout << "--------------------------" << endl;
    cout << "Regras: Escolha uma dificuldade (entre 1 e 3, sendo 1 fácil, 2 normal e 3 difícil)." << endl;
    cout << "Serão feitas algumas perguntas, e você começa com 100 pontos. Quanto mais difícil, mais você perde e menos você ganha." << endl;

    cin >> dificuldade;

    Pontuacao::setaPontuacao(dificuldade);

    Pergunta perguntas[] = {
       Pergunta("O que é o princípio da incerteza?", "Princípio da mecânica quântica que afirma que é impossível determinar simultaneamente a posição e o momento de uma partícula."),
       Pergunta("Qual é a unidade básica de medida de energia na física quântica?", "Fóton"),
       Pergunta("O que é um estado quântico emaranhado?", "Estado em que as propriedades de duas ou mais partículas estão interligadas, independentemente da distância entre elas.")
    };

    for (const auto& pergunta : perguntas) {
        cout << "Pergunta: " << pergunta.pergunta << endl;
        cout << "Sua resposta: ";
        cin.ignore();
        getline(cin, resposta);

        if (resposta == pergunta.resposta) {
            cout << "Resposta correta! Ganhou pontos." << endl;
            pontuacao += Pontuacao::getAcerto();
        }
        else {
            cout << "Resposta incorreta! Perdeu pontos." << endl;
            pontuacao -= Pontuacao::getErro();
        }
    }

    return 0;
}
