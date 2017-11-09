#ifndef SECTION
	 #define SECTION
/**
 * fichier section
 * auteur Florian Boyer
 * version 0.1
  */

#include <iostream>
#include <vector>
#include "evaluation.h"
#include "etudiant.h"
#include "matiere.h"
#include "application.h"
#include "note.h"


using namespace std;
class Evaluation;	
class Application;
/**
* @classe section
* @brief information et remplisage de nos sections au prealable creer
* @brief permet de gerer nos sections en details avec ceux que cela comporte notes controle bulletin
*/
class Section
{
private:
	/**
    * @brief vecteur matiere qui sont inscrite dans la section
	* @return pour recuperer les matieres grace au pointeur
	*/
   	 vector<Matiere*> vectLesMatieresDeLaSection;
	/**
	* @brief coeff
	* @return permet d'affecter un coeeficient à une matiere et cela en focntion des sections
	*/
	vector<int>vectLesCoeff;
	/**
	* @brief nom de la section
	* @return permet d'avoir une variable contenant le nom de la section
	*/
	string sectionNom;
	/**
	* @brief pointeur de l'application
	* @return c'est un pointeur de la classe application 
	* qui porte le nom du nom de mon apllication
	*/
	Application* monApplic;
		//choixMenuApplication
    /**vectSection
	* @brief affichage du menu
    * @return affiche un menu de notre sectmatiereDisponibleion avec les differentes possibilité
	*/
    void affichageDuChoixDuMenu();
	/**
	* @brief controle saisie du choix
	* @return permet de verifier que notre utilisateur a taper un choix qui est valide evite les erreurs de frappe
	*/
    char saisieControleeDuChoixUtilisateur();
	/**
	* @brief choix utilisateur
	* @return permet d'executer le choix que l'utilisateur a choisi
	*/
    void choixMenuApplication(char choixUtil);

	//etudiant
	/**
	* @brief creation etudiant
	* @return permet de rajouter un nouvelle etudiant a la section 
	*/
	void ajouterEtudiant(); 
	/**
	* @brief afficher etudiant
	* @return permet d'afficher la liste complete des etudiants de notre section
	*/
	void afficherEtudiant(); 

	//matiere
	/**
	* @brief affectation d'une matiere
	* @return permet d'affecter les matieres que la section comporte
	*/
	void affecterUneMatiere(); 
	/**
	* @brief affichage matiere section 
	* @return va affichger les matieres que la section comporte ainsi que le coefficient que la matiere comporte
	*/
	void afficherMatiere(); 

	//evaluation
	/**
	* @brief creer une evaluation
	* @return permet de creer une evaluataion dans une matiere precise pour tous les eleves de la section
	*/
	void ajouterUneEvaluation(); 
	/**
	* @brief afficher les evaluations
	* @return affichage des differentes evaluations que la section a eu ainsi que la moyenne de classe sur cette evaluations
	*/
	void afficherUneEvaluation();

	//buletin
	/**
	* @brief creation bulletin
	* @return permet de creer l'integralité des bulletins pour la section
	* mettra les notes de l'etudiant en fonction des differents controle et du coeff de la matiere
	* la saisie d'un commentaire par eleve et matiere devra etre effectué
	*/
	void creerTousLesBulletins();

	//vecteur
	/**
	* @brief vecteur evaluation
	*  permet de recupere les differentes evaluations qui ont été faites 
	*/
	vector<Evaluation> vectEvaluation;
	/**
	* @brief vecteur etudiant
	*  permet de recuperer les etudiants qui sont dans la sections
	*/
	
	vector<Etudiant> vectEtudiant;
	vector<Note> vectNote;
public:
	//Constructeur
	
	/**
	* @brief constructeur de section
	creer un constructeur avec le nom de la section
	*/
	Section(string sectionNom,Application *);
	/**
	* @brief affichage section
	* @return permet d'afficher les differentes sections que l'on dispose
	*/
	void afficherSection();

	//retour
	/**
	* @brief retour
	* @return permet de retourner au pmenu de l'application
	*/
	void retourApplication();
	/**
	* @brief accesseur de section nom
	* 
	*/	
	string getSectionNom();
	/**
	* @brief execution
	* @return permet d'executer le code de la section et quil se repete
	*/
	void run();
	
};
#endif
