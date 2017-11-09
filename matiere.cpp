#include "matiere.h"
	//constructeur
Matiere::Matiere(string leNom)
{
	matiereNom = leNom;
}
//accesseur
string Matiere::getMatiereNom()
{
	return matiereNom;
}
	
void Matiere::afficherMatiere()
{
	cout<<	" Matiere:  " << matiereNom << endl;
}
	
