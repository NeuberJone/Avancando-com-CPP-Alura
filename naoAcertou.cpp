#include <iostream>
#include "naoAcertou.hpp"

extern std::string palavraSecreta;
extern std::map <char, bool> chutou;

bool naoAcertou(){
    for(char letra : palavraSecreta){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}