#ifndef ETUDIANT
	 #define ETUDIANT
/**
 * fichier etudiant
 * auteur Florian Boyer
 * version 0.1
  */
#include <iostream>
#include <vector>

using namespace std;

/*
*@classe etudiant
* @brief contient le nombre 
*/
class Etudiant
{
private:
	/**
	* @brief  nom de l'etudiant
	* varaible qui permet d'affeceter le nom a un etudiant
	*/
	string etudiantNom;
	/**
	* @brief prenom de l'etudiant 
	* variable qui permet d'affecter le prenom de l'etudiant
	*/
	string etudiantPrenom;
	/**
	* @brief date de naisance de l'etudiant
	* variable qui permet d'affecter une datte de naissance a un etudiant
	*/
	string etudiantDateDeNaissance;


public:
	//constructeur
	/**
	* @brief constructeur de l'etudiant
	* constructeur qui permet davoir les info sur un etudiant 
	*/
	Etudiant (string etudiantNom, string etudiantPrenom, string etudiantDateDeNaissance);
	/**
	* @brief affichage etudaint
	* @return permet afficher la listes des etudiants de la section
	*/
	void afficherEtudiant();
	/**
	* @brief acceseeur de etudiant
	* donne les infos sur l'etudiants
	*/		
    string getEtudiantInfo();
};
#endif
