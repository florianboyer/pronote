#ifndef APPLICATION
	 #define APPLICATION
/**
 * fichier application
 * auteur Florian Boyer
 * version 0.1
  */

#include <iostream>
#include <vector>
#include "section.h"
#include "matiere.h"

using namespace std;

/**
 * @classe application
 * @brief l'application est le premier menu que l'utilisateur va voir
 * @brief permet de pouvoir rentrer les infos de bases dans notre programme grace a ses differents menu
 */
class Section;

class Application
{
private:
	//choixMenuApplication
    /**
     * @brief affichage menu
     * @return affiche le premier menu de l'application
    */
    void affichageDuChoixDuMenuPrincipal();
    /**
     * @brief controle choix utilisateur
     * @return permet de controler ceux que l'utilisateur va saisir
     * on verifie ainsi si les informations sont correct ou non evite les erreurs de frappe
     * */
    char saisieControleeDuChoixUtilisateurPrincipal();
    /**
     * @brief choix utilisateur
     * @return permet d'executer le choix que l'utilisateur a choisi
     */
    void choixMenuApplicationPrincipal(char choixUtilateur);

    //section
    /**
     * @brief creation section
     * @return permet de creer une nouvelle section
     * une section et la classe auquelle vont correspondre plusieurs etudiant
    */
    void ajouterSection();
    /**
      * @brief ajout section
     * @return permet d'afficher toutes les sections que l'on à déjà créé
     * */
    void afficherSection();
    /**
      * @brief affichage section
     * @return permet de selectionner une section pour y rentrer dedans
     * */
    Section selectionnerSection();

	//matiere
    /**
     * @brief creation matiere
     * @return permet de creer une nouvelle matiere
     * */
    void ajouterMatiere();
    /**
     * @brief affichage matiere
     * @return permet d'afficher toutes les matieres du proffesseurs
     * */
    void afficherMatiere();

	//quitter
    /**
     * @brief quitter
     * @return permet de quitter et fermer l'application tout le travail effectué sera perdue
     * */
    void quitterApplication();

	//vecteur de pointeur
    /**
     * @brief vecteur de matiere
     * il permet de recuperer les matieres
     * */
    vector<Matiere> vectMatiere;
    /**
     * @brief vecteur de section
     * @return Il permet de recuperer les sections
     * */
	vector<Section> vectSection;

public:
    /**
     * @brief execution
     * @return execute ce qui va tourner dans l'application
    */
    void run();
    /**
     * @brief  recuperer les matieres
     * @return permet de recupere les matieres grace a son vecteur
     */
	vector<Matiere*> getLesMatieres();

};

#endif
