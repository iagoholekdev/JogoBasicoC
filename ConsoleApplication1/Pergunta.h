#pragma once
#include <string>

class Pergunta {
public:
    std::string pergunta;  // Use std::string em vez de string
    std::string resposta;  // Use std::string em vez de string

    Pergunta(std::string pergunta, std::string resposta);
};