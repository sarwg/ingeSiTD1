#include <iostream>
#include <iostream>
#include <vector>
#include <string>

#include "Exercice1.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Exercice1 ex;
    std::vector<string> Personnes = {"Margaux","Bertrand","Jul"};
    //std::vector<string> Personnes = {"Margaux"};
    std::vector<vector<float>> Notes = {{10,12,14},{0,12,19},{19,0}};
    //std::vector<string> Notes = {{10,12,14}};
    for(int i = 0 ; i < Personnes.size();i++){
        for(int j = 0; j < Notes[i].size();j++){
            ex.ajouter(Personnes[i],Notes[i][j]);
        }
    }

    cout<< "Moyenne de Margaux : " << ex.moyenne("Margaux");
    std::vector<string> ex3 = ex.getNomByNoteSupEgal(19);
    cout << "Personnes ayant 19 ou plus"<< endl;
    for(int i = 0;i<ex3.size();i++){
        cout << ex3[i] << endl;
    }

    return 0;
}
