#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctime>
#include "sorteiaPalavra.hpp"
#include "leArquivo.cpp"

extern std::string palavraSecreta;

void sorteiaPalavra() {
    std::vector<std::string> palavras = leArquivo();

    srand(time(NULL));
    int indiceSorteado = rand() % palavras.size();

    palavraSecreta = palavras[indiceSorteado];
}