#ifndef MATIERE
	 #define MATIERE
/**
 * fichier matiere
 * auteur Florian Boyer
 * version 0.1
  */
#include <iostream>

using namespace std;

//creation de la classe matiere
class Matiere
{
private:
	string matiereNom;

	void ajouterMatiere();
public:
	//Constructeur
	//creer un constructeur avec le nom de la section
	Matiere(string matiereNom);
	void afficher();
	//retour
	void retourApplication();
	//accesseur
	string getMatiereNom(); 

	void afficherMatiere();

	
};

#endif
