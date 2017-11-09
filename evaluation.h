#ifndef EVALUATION
	 #define EVALUATION
/**
 * fichier evaluation
 * auteur Florian Boyer
 * version 0.1
  */
#include <iostream>
#include <vector>
#include "section.h"
#include "matiere.h"
#include "note.h"

using namespace std;

/**
* @classe evaluation
* @brief permet de creer des controles dans chaque matiere
* pour une section precise
*/
class Evaluation
{
private:
	/**
	* @brief nom evaluation
	* variable permmettant de donner un nom a une evaluation
	*/
	string evaluationNom;
	/**
	* @brief date de l'evaluation
	* variable permettant davoir une date pour notre evaluation
	*/
	string evaluationDate;
	/**
	* @brief semestre
	* variable permmetnt de choisir s_i lon est dans le premier ou dans le deuxieme semestre de l'année
	*/
	int semestre;// 1 pour le semestre 1 , 2 pour le semestre 2
	/**
	* @brief vecteur de pointeur de note
	* vecteur recuperant les notes que un etudiant a pour un controle
	*/
	vector<Note> vectNote;
	/**
	* @brief pointeur
	* pointeur de la matiere pour savoir dans quelle matiere est la note
	*/
	Matiere * pLaMatiere;
public:
	void setLaMatiere(Matiere* laMatiere);
	void addNote(Note gertrude);
	void afficher();
	void setNomEvaluation(string leNomEvaluation);
	void setDateEvaluation(string laDateDeEvaluation);
	void setSemestre (int leSemestre);
	string getNomEvaluation();
	string getDateEvaluation();
	int getSemestre();
	
};
#endif
