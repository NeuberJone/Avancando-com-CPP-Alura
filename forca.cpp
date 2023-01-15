#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "letraExiste.hpp"
#include "imprimeCabecalho.hpp"
#include "leArquivo.hpp"
#include "sorteiaPalavra.hpp"
#include "naoEnforcou.hpp"
#include "mostraErros.hpp"
#include "mostraPalavra.hpp"
#include "chuta.hpp"
#include "adicionaPalavra.hpp"
#include "naoAcertou.hpp"
#include "salvaArquivo.hpp"

using namespace std;

string palavraSecreta;
map <char, bool> chutou;
vector <char> chutesErrados;

int main (){

    imprimeCabecalho();
    leArquivo();
    sorteiaPalavra();
    
    cout << "A palavra secreta e: " << palavraSecreta << endl;

    while(naoAcertou() && naoEnforcou()){

        mostraErros();
        mostraPalavra();
        chuta();
    }

    if(naoAcertou()){
        cout << "QUE PENA! Voce perdeu! A palavra secreta era: " << palavraSecreta << endl; 
    }
    else {
        char resposta;
        cout << "PARABENS! Voce acertou! A palavra secreta era: " << palavraSecreta << endl; 
        cout << "Gostaria de adicionar uma palavra ao banco? (S/N):  ";
        cin >> resposta;
        if(resposta == 'S'){
            adicionaPalavra();
        }
    }
}