//
// Created by sg556808 on 20/01/2020.
//

#include "Exercice1.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Exercice1::Exercice1(){}

void Exercice1::ajouter(string nom , float note){
    int index = 0;
    bool find = false;
    for(int i = 0 ; i < Personnes.size() ; i++){
        if(Personnes[i] == nom){
            index = i;
            find = true;
        }
    }
    if(find){
        Notes[index].push_back(note);
    }else{
        Personnes.push_back(nom);
        std::vector<float> oui = {note};
        Notes.push_back(oui);
    }
}

void Exercice1::ajouter(string nom , vector<float> note){
    int index = 0;
    bool find = false;
    for(int i = 0 ; i < Personnes.size() ; i++){
        if(Personnes[i] == nom){
            index = i;
            find = true;
        }
    }
    if(find){
        for(int i = 0 ; i < note.size();i++){
            Notes[index].push_back(note[i]);
        }
    }else{
    Personnes.push_back(nom);
    for(int i =0 ; i < note.size();i++){
        Notes[Personnes.size()-1].push_back(note[i]);
        }
    }
}

std::vector<float> Exercice1::getNotesByNom(string nom){
    int index = 0;
    for(int i = 0 ; i < Personnes.size() ; i++){
        if( Personnes[i] == nom){
            index = i;
        }
    }
    std::vector<float> notes;
    for(int i = 0 ; i < Notes[index].size();i++){
        notes[i] = Notes[index][i];
    }
    return notes;
}

float Exercice1::moyenne(string nom) {
    int index = 0;
    for(int i = 0 ; i < Personnes.size() ; i++){
        if( Personnes[i] == nom){
            index = i;
        }
    }
    float moyenne = 0;
    for(int i = 0 ; i < Notes[index].size();i++){
        moyenne = moyenne + Notes[index][i];
    }
    moyenne = moyenne / Notes[index].size();
    return moyenne;
}

std::vector<string> Exercice1::getNomByNoteSupEgal(float note) {
    std::vector<string> noms;
    for(int i = 0 ; i < Notes.size() ; i++){
        for(int j = 0 ; j < Notes[i].size() ; j++){
            if(Notes[i][j] >= note ){
                noms.push_back(Personnes[i]);
            }
        }
    }
    return noms;
}

std::vector<string> Exercice1::getNomByNoteEgal(float note){
    std::vector<string> noms;
    for(int i = 0 ; i < Notes.size() ; i++){
        for(int j = 0 ; j < Notes[i].size() ; j++){
            if(Notes[i][j] == note ){
                noms.push_back(Personnes[i]);
            }
        }
    }
    return noms;
}

int Exercice1::getPlusNotes(){
    int nombre = 0;
    for(int i = 0 ; i < Notes.size() ; i++){
        if(Notes[i].size() > 1){
            nombre ++;
        }
    }
    return nombre;
}