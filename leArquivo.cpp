#include <iostream>
#include <fstream>
#include "leArquivo.hpp"

std::vector<std::string> leArquivo(){
    std::ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){

        int quantidadePalavras;
        arquivo >> quantidadePalavras;

        std::vector <std::string> palavrasDoArquivo;

        for (int i=0;i<quantidadePalavras;i++){
            std::string palavraLida;
            arquivo >> palavraLida;
            palavrasDoArquivo.push_back(palavraLida);
        }
        arquivo.close();
        return palavrasDoArquivo;
    } else {
        std::cout << "Nao foi possivel acessar o banco de palavras." << std::endl;
        exit (0);
    }
}