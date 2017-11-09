#include "section.h"

//constructeur
Section::Section(string leNom, Application * lApplic)
{
				cout << "Section::Section(string leNom, Application * lApplic) " << endl;
				sectionNom = leNom;
				monApplic = lApplic;
}
//accesseur
string Section::getSectionNom()
{
				return sectionNom;
}

//affichage des sections
void Section::afficherSection()
{
				cout<<	" Section:  " << sectionNom << endl;
}	


void Section::run()
{ 
				cout << "void Section::run() " <<endl;
				char choixUtilisateur;

				do
				{
								affichageDuChoixDuMenu();
								choixUtilisateur = saisieControleeDuChoixUtilisateur();
								choixMenuApplication(choixUtilisateur);
				}

				while (!(choixUtilisateur=='q'));
}



void Section::affichageDuChoixDuMenu()
{ 
				cout << "void Section::affichageDuChoixDuMenuSecondaire() " <<endl;
				//permet d'effacer l'ecran 
				//system("clear");
				//affichage du menu principal
				cout << endl << "========================Vous etes dans le menu de section: ========================"	<< endl << endl;
				cout << endl << "      ------------------Tous vos choix désormé vont etre decessif ------------------" 	<< endl << endl;
				cout << " Taper: "										<< endl;
				cout << "\t 1 pour ajouter un eleve"					<< endl;
				cout << "\t 2 pour afficher les eleves"					<< endl;
				cout << "\t 3 pour ajouter un controle"					<< endl;
				cout << "\t 4 pour afficher les controles"				<< endl;
				cout << "\t 5 pour affecter une matiere"				<< endl;
				cout << "\t 6 pour faire la creation des bulletins"		<< endl;
				cout << "\t q pour retourner dans le menu application" 	<< endl;
}

char Section::saisieControleeDuChoixUtilisateur()
{ 
				cout << "char Section::saisieControleeDuChoixUtilisateurSecondaire() " <<endl;
				char sonChoix;
				do
				{
								cout << "Taper le caracteres correspondant à votre choix: ";
								//on fais saisir à l'utilisateur ce qu'il a choisis 
								//on stocke cette valeur dans une variable pour s'en reservir par la suite
								cin >> sonChoix;
								//on va supprimer de notre buffer la touche entrer pour eviter tous probleme par la suite
								cin.ignore(1);
								cout << endl;

								if (!(sonChoix=='1'||sonChoix=='2'||sonChoix=='3'||sonChoix=='4'||sonChoix=='5'||sonChoix=='6'||sonChoix=='7'||sonChoix=='q'))
								{
												cout << "vous avez du être etourdi par quelque chose votre choix est incorrect"<<endl;
												cout <<"je vous laissons une chance de vous rattraper"<<endl<<endl; 
								}
				}
				while (!(sonChoix=='1'||sonChoix=='2'||sonChoix=='3'||sonChoix=='4'||sonChoix=='5'||sonChoix=='6'||sonChoix=='7'||sonChoix=='q'));

				return sonChoix;
}

void section::choixMenuApplication(char choixUtilisateur)
{ 
				cout << "void section::choixmenuapplicationsecondaire(char choixutilisateur) " <<endl;
				//creation du menu de l'application 
				//on a recuperer la valeur saisie par l'utilisateur grace à la variable choixmenuapplication 
				switch(choixUtilisateur)
				{
								case '1':cout << "\t vous avez choisis ajouter un etudiant nous executons votre choix " 				<< endl << endl;
												 ajouterEtudiant();
												 //system("clear");
												 break;
								case '2':cout << "\t vous avez choisis afficher les etudiants nous executons votre choix " 				<< endl << endl;
												 afficherEtudiant();
												 break;

								case '3':cout << "\t vous avez choisis ajouter un controle nous executons votre choix " 				<< endl << endl;
												 ajouterUneEvaluation();
												 //system("clear");
												 break;
								case '4':cout << "\t vous avez choisis afficher les controles nous executons votre choix " 				<< endl << endl;
												 afficherUneEvaluation();
												 break;
								case '5':cout << "\t vous avez choisis affecter une matiere nous executons votre choix " 				<< endl << endl;
												 affecterUneMatiere();
												 break;
								case '6':cout << "\t vous avez choisis de faire la creation des bulletins nous executons votre choix " 	<< endl << endl;
												 //creationbulletin();
												 break;
								case 'q':cout << "\t vous avez choisis de retourner au menu principal nous executons votre choix " 		<< endl << endl;
												 break;	

				}
}

void section::ajouterEtudiant()
{ 
				cout << " void section::ajouteretudiant()" <<endl;
				//nom
				string nom;
				cout << "nom de l'etudiant: ";
				//demander la saisie de cette nom
				getline(cin,nom);
				cout << endl;

				//prenom
				string prenom;
				cout<< "prénom de l'etudiant: ";
				//demande de la saisie du prenon
				getline(cin,prenom);
				cout<< endl;

				//datedenaissance
				string dateDeNaissance;
				cout<< "date de naissance: ";
				//demande de la saisie de la date de naissance
				getline(cin,dateDeNaissance);
				cout<<endl;

				//ajouter les infos etudiant a notre vecteur;
				etudiant nouvelleEtudiant(nom,prenom,dateDeNaissance);
				vectetudiant.push_back(nouvelleEtudiant);

}


void section::afficherEtudiant()
{ 
				cout << "void section::afficheretudiant() " <<endl;
				//on crée une variable de la taille que faits le vecteur etudiant
				int nombreetudiant = vectetudiant.size();
				//si il existe au moins une etudiant alors on les affiches
				if (nombreetudiant !=0)
				{
								for (int numeroetudiant =0;numeroetudiant<nombreetudiant; numeroetudiant++){
												cout << numeroetudiant+1<< ")";
												vectEtudiant[numeroetudiant].afficherEtudiant();

								}
				}
				//si il n'existe pas de etudiant on affiche un message d'erreur
				else 
				{
								cout<<"désolé mais il n'existe pas de etudiant, nous sommes donc dans l'incapacité de vous en afficher" << endl << endl;
				}

}


void section::affecterUneMatiere()
{ 
				unsigned int choix; m
				cout << "void section::affecterunematiere() " <<endl;
				vector<matiere*> matieredemasection = monapplic->getlesmatieres();
				//on doit dabord afficher les matieres disponible 
				for(unsigned int numeromatiere=0; numeromatiere<matieredemasection.size(); numeromatiere++)
				{
								cout << numeromatiere+1 << ") " << matieredemasection[numeromatiere]->getmatierenom() << endl;
				}

				cout << "taper le numero de la matiere que vous voulez: " << endl;
				cin >> choix;
				cin.ignore(1);
				//pour inscrire dans notre vecteur de matiere de notre section la matiere que l'on a selectionné
				choix--;  

				cout<<"choix:"<<choix<<endl;
				cout<< vectlesmatieresdelasection.size()<<endl;
				vectlesmatieresdelasection.push_back(matieredemasection[choix]);
				cout<<" vectlesmatieres.push_back(vectlesmatieres[choix]);"<<endl;

				//enlever la matiere des propositions disponible
}


void section::ajouterUneEvaluation()
{
				Evaluation nouvelleEvaluation;

				//choisir la matiere que l'on veut pour le controle
				for(unsigned int numeroMatiere=0; numeroMatiere< vectLesMatieresDeLaSection.size(); numeroMatiere++)
				{
								cout<< numeroMatiere+1 << ") ";
								vectLesMatieresDeLaSection[numeroMatiere]->afficherMatiere();
				}
				//taper le numero correspondant à la matiere choisis
				int noMatiere;
				cout<< "taper le numero correspond à la matiere ou vous avez effectuer le controle";
				cin>> noMatiere;
				noMatiere--;
				//affectation de la matière choisie à la nouvelle évaluation
				nouvelleEvaluation.setLaMatiere(&vectLesMatieresDeLaSection[noMatiere]);

				//formulaire de saisie
				string nomControle;

				cout << "Nom du controle: ";
				
				//demander la saisie du nom du controle
				getline(cin,nomControle);
				cout << endl;
				nouvelleEvaluation.setNomEvaluation(nomControle);
			
				string dateNouvelleEvaluation;
				cout << "Date de l'evaluation: ";
				getline(cin,dateNouvelleEvaluation);
				nouvelleEvaluation.setDateEvaluation(dateNouvelleEvaluation);
			  cout<<endl;
				
				int semestre;
				cout <<"semestre: "<<endl;
				cin >> semestre;
				nouvelleEvaluation.setSemestre(semestre);
				cout << endl;

				//Boucle pour chaque eleve on demande la note 
				float note;
				for(unsigned int numeroEtudiant=0; numeroEtudiant< vectEtudiant.size();numeroEtudiant++)
				{
								vectEtudiant[numeroEtudiant].afficherEtudiant();
								//je demande à l'utilisateur la note qu'il a obtenue
								cout<< "note(-1 si absent): "<<endl;
								cin >>note;
								cin.ignore(1);
								//on a creer la note 
								Note nouvelleNote (&vectEtudiant[numeroEtudiant],note);
								//ajout dans le vecteur de note de l'evaluation
								nouvelleEvaluation.addNote(nouvelleNote);
				}
        //ajout de l'évaluation au vecteur des évaluations de la section
        vectEvaluation.push_back(nouvelleEvaluation); 
}


void afficherNomMatiere()
{
				cout<< "Le nom des matieres disponible est: " << endl;
}
void affichercontrole()
{
	cout << "Nom evaluation: "<< evaluationNom<<endl;
	cout << "Date d'evaluation"<<evaluationDate<<endl;
	cout << "Semestre de l'evaluation:"<<semestre<<endl;
//boucle affichage de chaque note des etudiants
for(unsigned int numeroEtudiant=0; numeroEtudiant < vectEtudiant.size();numeroEtudiant++)
{
// affichage de chaque note par étudiant
 
}
}
