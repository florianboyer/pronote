#include "etudiant.h"


//constructeur
Etudiant::Etudiant (string nom, string prenom, string dateDeNaissance)
{
	etudiantNom = nom;
	etudiantPrenom = prenom;
	etudiantDateDeNaissance = dateDeNaissance;
}
//fin du constructeur


//affichage des Etudiants
void Etudiant::afficherEtudiant()
{
	cout<<	" Etudiant:  " << etudiantNom <<", " << etudiantPrenom <<", " << etudiantDateDeNaissance << endl;
}	

string Etudiant::getEtudiantInfo()
{
	return etudiantNom + etudiantPrenom + etudiantDateDeNaissance;
}
