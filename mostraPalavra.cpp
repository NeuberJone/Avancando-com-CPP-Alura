#include <iostream>
#include "mostraPalavra.hpp"

extern std::string palavraSecreta;
extern std::map <char, bool> chutou;

void mostraPalavra(){
    for(char letra : palavraSecreta){
        if (chutou [letra]){
            std::cout << letra << " ";
        }
        else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}