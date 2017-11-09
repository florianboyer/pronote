#ifndef NOTE
	 #define NOTE
/**
 * fichier note
 * auteur Florian Boyer
 * version 0.1
  */
#include <iostream>
#include <vector>
#include "etudiant.h"

using namespace std;
//short declaration of Etudiant class
class Etudiant;
//creation de la classe note
class Note
{
private:
	float valeur;
	Etudiant* pEtudiant;
public:
	//constructeur de note
	Note(Etudiant* personne,float val);

	
	
};
#endif
