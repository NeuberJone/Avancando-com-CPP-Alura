#include <iostream>
#include <vector>
#include <string>
#include "leArquivo.hpp"
#include "salvaArquivo.hpp"

void adicionaPalavra(){
    std::cout << "Digite a nova palavra, utilizando letras maiusculas: ";
    std::string novaPalavra;
    std::cin >> novaPalavra;

    std::vector<std::string> listaPalavras = leArquivo();
    listaPalavras.push_back(novaPalavra);

    salvaArquivo(listaPalavras);

    std::cout << "A palavra " << novaPalavra << " foi adicionada ao banco de palavras com sucesso" << std::endl;
}