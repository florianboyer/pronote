#include "application.h"
#include <cstdlib>

void Application::run()
{
	cout << "void Application::run()" << endl;
	char choixUtilisateur;
	
	do
	{
		affichageDuChoixDuMenuPrincipal();
		choixUtilisateur= saisieControleeDuChoixUtilisateurPrincipal();
		choixMenuApplicationPrincipal(choixUtilisateur);
	}
	while (!(choixUtilisateur=='q'));
}



void Application::affichageDuChoixDuMenuPrincipal()
{
	cout << "void Application::affichageDuChoixDuMenuPrincipal()" << endl;

	//permet d'effacer l'ecran 
	//system("clear");
	//affichage du menu principal
	cout << endl << "========================Vous etes dans le menu de l'application: ========================"	<< endl << endl;
	cout << endl << "      ------------------Tous vos choix désormé von etre decessif ------------------" 		<< endl << endl;
	cout << " Taper: "								<< endl;
	cout << "\t 1 pour ajouter une section"			<< endl;
    cout << "\t 2 pour afficher les sections"		<< endl;
	cout << "\t 3 pour selectionner une section"	<< endl;
	cout << "\t 4 pour ajouter une matiere"			<< endl;
	cout << "\t 5 pour afficher une matiere"		<< endl;
	cout << "\t q pour quitter l'application"		<< endl;
}

char  Application::saisieControleeDuChoixUtilisateurPrincipal()
{
	cout<< "char  Application::saisieControleeDuChoixUtilisateurPrincipal()" <<endl;
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
	
	if (!(sonChoix=='1'||sonChoix=='2'||sonChoix=='3'||sonChoix=='4'||sonChoix=='5'||sonChoix=='q'))
	{
		cout << "Vous avez du etre etourdit par quelque chose votre choix est incorect" << endl;
		cout << "Je vous laissons une chance de vous rattraper" 						<< endl << endl; 
	}
}
	while (!(sonChoix=='1'||sonChoix=='2'||sonChoix=='3'||sonChoix=='4'||sonChoix=='5'||sonChoix=='q'));

	return sonChoix;
}

void Application::choixMenuApplicationPrincipal(char choixMenuApplication)
{ 
	cout << " void Application::choixMenuApplicationPrincipal(char choixMenuApplication)" << endl;
	//creation du menu de l'application 
	//on a recuperer la valeur saisie par l'utilisateur grace à la variable choixMenuApplication 
	switch(choixMenuApplication)
	{
		case '1':cout << "\t Vous avez choisis Ajouter section nous executons votre choix " 			<< endl << endl;
			ajouterSection();
			//system("clear");
			break;
		case '2':cout << "\t Vous avez choisis Afficher section nous executons votre choix " 			<< endl << endl;
			afficherSection();
			break;
		case '3':cout << "\t Vous avez choisis Selectionner section nous executons votre choix " 		<< endl << endl;
			selectionnerSection().run();
			//system("clear");
			break;
		case '4':cout << "\t Vous avez choisis Ajouter matière nous executons votre choix " 			<< endl << endl;
			ajouterMatiere();
			//system("clear");
			break;
		case '5':cout << "\t Vous avez choisis Afficher matière nous executons votre choix " 			<< endl << endl;
			afficherMatiere();
			break;
		case 'q':cout << "\t Vous avez choisis Quitter l'application nous comprenons votre decisions " 	<< endl << endl;
           			break;
	}
}

void Application::ajouterSection()
{ 
	cout << "void Application::ajouterSection() " << endl;
	//affichage pour l'utilisateur des instructions à respecter
	cout << "      ... ... ...     ... ... ...     ... ... ...     ... ... ..."		<< endl << endl;
	cout << "Vous allez pouvoir ajouter une nouvelle section"						<< endl;
	cout << "Veillez à ce que la section que vous rentriez ne sois pas déjà rentré"	<< endl;
	cout << "Pour savoir si une section existe deja vous pouvoir afficher les sections qui existe deja" << endl << endl;
	cout << "----------" << endl;
	//creer une section
	string sonNom;
	cout<< "Nom de la nouvelle section: "; 
	//demander la saisie de cette section
	getline(cin,sonNom)	;

	//verifier si la section saisie ne correspond pas à une section deja saisie.
	//pour cela on va regarder dans notre vecteur si cette section existe deja
	
	//faire une boucle pour faire defiller chaque section que lon a dans le vecteur
	unsigned int nombreSection = vectSection.size();
	int doublon=0;
	//debut de la boucle
	cout << "boucle for"<<endl;
	for (unsigned int numeroSection= 0; numeroSection<nombreSection ; numeroSection++)
	{
		if (sonNom == vectSection[numeroSection].getSectionNom())
		{
			doublon++;
		}
	}
	cout << "fin du for" << endl;
	//comparer chacune de ces valeurs à notre valeur que l'on vient de rentrer

	//fin de la boucle
	if(doublon==0)
	{
		cout << "if" << endl;
		//si on a n'a pas de trouvais de section correspondante alors on rentre ma tiere dans notre vecteur
		Section nouvelleSection(sonNom, this);
		cout << "push_back" << endl;
		//ajouter la section a notre vecteur;
		vectSection.push_back(nouvelleSection);
		cout << "fin du iff" << endl;
	}
	else
	{
		cout << "else" << endl;
		//si on a trouvé deux fois la meme section alors on affiche un message d'erreur
		cout << "Cette matiere existe deja, je vous avez pourtant dit de verifer" << endl;
	}
	cout << "fin de void Application::ajouterSection()" << endl;
}

void Application::afficherSection()
{ 
	cout << "void Application::afficherSection() " << endl;
	//on crée une variable de la taille que faits le vecteur section
	unsigned int nombreSection = vectSection.size();
	//si il existe au moins une section alors on les affiches
	if (nombreSection !=0)
	{
		for (unsigned int numeroSection = 0; numeroSection<nombreSection; numeroSection++){
			cout << numeroSection+1<< ")";
			vectSection[numeroSection].afficherSection();
			
		}
	}
	//si il n'existe pas de section on affiche un message d'erreur
	else 
	{
		cout << "Désolé mais il n'existe pas de section, nous sommes donc dans l'incapacité de vous en afficher" << endl << endl;
	}
}


Section Application::selectionnerSection()
{ 
	cout << "Section Application::selectionnerSection() " << endl;
	Section sectionSelectionnee("vide",this);
	//afficher toutes les sections avec un numero devant

	//on crée une variable de la taille que faits le vecteur section
	unsigned int nombreSection = vectSection.size();
    unsigned int choixUtilisateur;
    string nomDelaSectionChoisie;
	//si il existe au moins une section alors on les affiches
	if (nombreSection != 0)
	{
		for (unsigned int numeroSection = 0;numeroSection < nombreSection; numeroSection++){
			cout << numeroSection +1 << ")";
			vectSection[numeroSection].afficherSection();
			
		}
			//l'utilisateur dois taper le numero qui correspond a la section qu'il souhaite
		cout << "Veuillez taper le numero correspondant à la section que vous desirez" << endl;

		cin >> choixUtilisateur;
        choixUtilisateur--;
        if(choixUtilisateur<vectSection.size())
        {
            nomDelaSectionChoisie = vectSection[choixUtilisateur].getSectionNom();
            cout << nomDelaSectionChoisie<<endl;
            sectionSelectionnee = vectSection[choixUtilisateur];
        }
	}
	
	//si il n'existe pas de section on affiche un message d'erreur
	else 
	{
		cout << "Désolé mais il n'existe pas de section, nous sommes donc dans l'incapacité de vous en afficher" << endl << endl;
	}
	return(sectionSelectionnee);
}


void Application::ajouterMatiere()
{ 
	cout<< " void Application::ajouterMatiere()" << endl;
	//affichage pour l'utilisateur des instructions à respecter
	cout<< "      ... ... ...     ... ... ...     ... ... ...     ... ... ..."		<< endl << endl;
	cout<< "Vous allez pouvoir ajouter une nouvelle Matiere"						<< endl;
	cout<< "Veillez à ce que la Matiere que vous rentriez ne sois pas déjà rentré"	<< endl;
	cout<<  "Pour savoir si une matiere existe deja vous pouvoir afficher les Matieres qui existe deja"<< endl << endl;
	cout<<"----------" << endl;
	//creer une Matiere
	string sonNom;
	cout<< "Nom de la nouvelle Matiere: "; 
	//demander la saisie de cette Matiere
	getline(cin,sonNom)	;
	cout << endl;

	//verifier si la section saisie ne correspond pas à une section deja saisie.
	//pour cela on va regarder dans notre vecteur si cette section existe deja
	
	//faire une boucle pour faire defiller chaque section que lon a dans le vecteur
	unsigned int nombreMatiere = vectMatiere.size();
	int doublon=0;
	//debut de la boucle
	for (unsigned int numeroMatiere= 0; numeroMatiere<nombreMatiere ; ++numeroMatiere)
	{
		if (sonNom == vectMatiere[numeroMatiere].getMatiereNom())
		{
			doublon++;
		}
	}
	//comparer chacune de ces valeurs à notre valeur que l'on vient de rentrer

	//fin de la boucle
	if(doublon==0)
	{
		Matiere nouvelleMatiere(sonNom);
		//ajouter la Matiere a notre vecteur;
		vectMatiere.push_back(nouvelleMatiere);	
	}
	else
	{
		//si on a trouvé deux fois la meme section alors on affiche un message d'erreur
		cout << "Cette matiere existe deja, je vous avez pourtant dit de verifer" << endl;
	}
}

void Application::afficherMatiere()
{ 
	cout << "void Application::afficherMatiere() " << endl;
	//on crée une variable de la taille que faits le vecteur Matiere
	unsigned int nombreMatiere = vectMatiere.size();
	//si il existe au moins une matiere alors on les affiches
	if (nombreMatiere !=0)
	{
		for (unsigned int numeroMatiere =0; numeroMatiere < nombreMatiere; numeroMatiere++){
			cout << numeroMatiere+1 << ")";
			vectMatiere[numeroMatiere].afficherMatiere();
			
		}
	}
	//si il n'existe pas de matiere on affiche un message d'erreur
	else 
	{
		cout << "Désolé mais il n'existe pas de Matiere, nous sommes donc dans l'incapacité de vous en afficher" << endl << endl;
	}
}
vector<Matiere*> Application::getLesMatieres()
{ 
	cout<< "vector<Matiere*> Application::getLesMatieres() "<<endl;
	vector<Matiere*> resultat;
	//pour chaque matiere de mon vect de matiere
	for(unsigned int noMat=0; noMat<vectMatiere.size();noMat++)
	{
	   //j'ajoute son adresse dans le resultat
		vectMatiere[noMat].afficherMatiere();
		resultat.push_back(&(vectMatiere[noMat]));
	}
	return resultat;
}
