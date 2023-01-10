#include <iostream>
#include "letraExiste.hpp"

extern std::string palavraSecreta;

bool letraExiste (char chute){
    for(char letra : palavraSecreta){
        if(chute == letra){
                return true;
        }
    }
    return false;
}