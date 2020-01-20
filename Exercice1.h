//
// Created by sg556808 on 20/01/2020.
//

#ifndef TD1_EXERCICE1_H
#define TD1_EXERCICE1_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;



class Exercice1 {
public :
    Exercice1::Exercice1();
    void Exercice1::ajouter(string nom, float note);
    void Exercice1::ajouter(string nom, vector<float> note);
    std::vector<float> Exercice1::getNotesByNom(string nom);
    float Exercice1::moyenne(string nom);
    std::vector<string> Exercice1::getNomByNoteSupEgal(float note);
    std::vector<string> Exercice1::getNomByNoteEgal(float note);
    int Exercice1::getPlusNotes();

private :
    std::vector<vector<float>> Notes;
    std::vector<string> Personnes;

};


#endif //TD1_EXERCICE1_H
