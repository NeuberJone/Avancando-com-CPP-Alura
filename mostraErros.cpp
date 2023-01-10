#include <iostream>
#include "mostraErros.hpp"

extern std::vector <char> chutesErrados;

void mostraErros(){
    std::cout << "Seus chutes errados: ";
    for(char letra : chutesErrados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}