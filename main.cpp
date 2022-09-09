#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#include <windows.h>
#include "Listpatien.h"
#include "rdvs.h"

using namespace std;
void gererpatient1();
void gererpatient2();
void exitsysteme();
void ajouterdiagnostic();
void rendezvous();

int main(int argc, char** argv) {
	system("Color 74");
	int choix;
    
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*********************************************************************************************\n";
	cout<<"\t\t\t\t\t** _______________________________________________________________________________________ **\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                   BIENVENU AU         		                  |**\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                           SYSTEME DE GESTION DU CABINET                               |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                     MEDICAL                                           |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|_______________________________________________________________________________________|**\n";
	cout<<"\t\t\t\t\t**                                                                                         **\n";
	cout<<"\t\t\t\t\t*********************************************************************************************\n\n\n\n\t\t\t\t\t";
	system("pause");
	system("cls");
	again:
		string pass="";
	char ch;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSYSTEME DE GESTION DU CABINET MEDICAL \n\n";
	cout<<"\t\t\t\t\t\t\t\t--------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t|         SE CONNECTER          |\n";
	cout<<"\t\t\t\t\t\t\t\t--------------------------------\n\n";
	cout << "\t\t\t\t\t\t\t\tEnter Le Mot de pass(secretaire/docteur): ";
	ch=_getch();

	while(ch !=13) {
		pass.push_back(ch);
		cout << '*';
		ch=_getch();
	}

	if(pass=="docteur") {

		cout << "\n\n\t\t\t\t\t\t\t\tAcces Autorise! \n";
		system("PAUSE");
		system ("CLS");
		system("Color C0");
		cout<<"\n\n\t\t\t\t\t\t Veuillez choisir parmis les options suivantes : \n\n";
		cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
		cout<<"\t\t\t\t\t\t|                                           	                  |\n";
		cout<<"\t\t\t\t\t\t|             1  >> Gerer les patients                            |\n";
		cout<<"\t\t\t\t\t\t|             2  >> Quitter le programme                          |\n";
		cout<<"\t\t\t\t\t\t|                                                                 |\n";
		cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

		a: cout<<"\n\tEntrer votre choix : ";
		cin>>choix;

		if(choix>2||choix<1) {
			cout<<"\n\n\t\t\t\t\t\t Choix Invalide \n";
			cout<<"\t\t\t\t\t\t Essaye Une Autre Fois...........\n\n";
			goto a;
		}

		switch (choix) {
			case 1: gererpatient1();
			cout << "\n\tClicker sur une touche";
			getch();
			break;

			case 2: exitsysteme();

		}
	}

	else if (pass=="secretaire") {

		cout << "\n\n\t\t\t\t\t\t\t\tAcces Autorise! \n";
		system("PAUSE");
		system ("CLS");
		system ("color C0");
		cout<<"\n\n\t\t\t\t\t\t Veuillez choisir parmis les options suivantes : \n\n";
		cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
		cout<<"\t\t\t\t\t\t|                                           	                  |\n";
		cout<<"\t\t\t\t\t\t|             1  >> Gerer les patients                            |\n";
		cout<<"\t\t\t\t\t\t|             2  >> Acceder Aux Rendez-vous                       |\n";
		cout<<"\t\t\t\t\t\t|             3  >> Quitter le programme                          |\n";
		cout<<"\t\t\t\t\t\t|                                                                 |\n";
		cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

		b: cout<<"\n\tEntrer votre choix : ";
		cin>>choix;



	if(choix>3||choix<1) {
		cout<<"\n\n\t\t\t\t\t\t Choix Invalide \n";
		cout<<"\t\t\t\t\t\t Essaye Une Autre Fois...........\n\n";
		goto b;
	}

	switch (choix) {
		case 1: gererpatient2();
		cout << "\n\tClicker sur une touche";
		getch();
		break;

		case 2: rendezvous();
		cout << "\n\tClicker sur une touche";
		getch();
		break;


		case 3: exitsysteme();

	}

    } 
    else {
    	cout<<"\n\n\t\t\t\t\t\t Mot De Pass Incorrect \n";
    	cout<<"\t\t\t\t\t\t Veuillez Reessayer De Saisir Le Mot De Pass ";
    	system("pause");
    	system ("CLS");
    	goto again ;
	}
    
	exit(0);
}

void gererpatient1 () {
	int choix=0;
	listepatient q;

	while (choix !=5) {
		system("Color C0");
		system("cls");
		cout<<"\n\n\t\t\t\t\t \t Bonjour Encore Une Fois ! ";
		cout<<"\n\n\t\t\t\t\t\tVeuillez choisir parmi les options suivantes : \n\n";
		cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
		cout<<"\t\t\t\t\t\t|                                           	                  |\n";
		cout<<"\t\t\t\t\t\t|                                           	                  |\n";
		cout<<"\t\t\t\t\t\t|             1  >> Ajouter un patient                            |\n";
		cout<<"\t\t\t\t\t\t|             2  >> Chercher un patient                           |\n";
		cout<<"\t\t\t\t\t\t|             3  >> Afficher la liste des patients                |\n";
		cout<<"\t\t\t\t\t\t|             4  >> Ajouter le diagnostique d'un patient          |\n";
		cout<<"\t\t\t\t\t\t|             5  >> Quitter le programme                          |\n";
		cout<<"\t\t\t\t\t\t|                                                                 |\n";
		cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

		a: cout<<"\n\tEntrer votre choix : ";
		cin>>choix;

		if(choix>5||choix<1) {
			cout<<"\n\n\t\t\t\t\t\tChoix Invalide\n";
			cout<<"\t\t\t\t\t\tEssaye Une Autre Fois...........\n\n";
			goto a;
		}

		system("CLS");

		switch (choix) {
			case 1: q.ajouterpatient();
			cout << "\n\t Clicker sur une touche";
			getch();
			break;

			case 2: q.chercher();
			cout << "\n\t Clicker sur une touche";
			getch();
			break;

			case 3: q.listerpatient();
			cout<<"\n\t Clicker sur une touche";
			getch();
			break;
			case 4: ajouterdiagnostic();
			cout<<"\n\t Clicker sur une touche";
			getch();
			break;
			case 5: exitsysteme();
		}

		system("CLS");
	}
}

void gererpatient2() {
	int choix=0;
	listepatient q;

	while (choix !=4) {
		system("Color C0");
		system("cls");
		cout<<"\n\n\t\t\t\t\t \t Bonjour Encore Une Fois ! ";
		cout<<"\n\n\t\t\t\t\t\tVeuillez choisir parmi les options suivantes : \n\n";
		cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
		cout<<"\t\t\t\t\t\t|                                           	                  |\n";
		cout<<"\t\t\t\t\t\t|                                           	                  |\n";
		cout<<"\t\t\t\t\t\t|             1  >> Ajouter un patient                            |\n";
		cout<<"\t\t\t\t\t\t|             2  >> Chercher un patient                           |\n";
		cout<<"\t\t\t\t\t\t|             3  >> Afficher la liste des patients                |\n";
		cout<<"\t\t\t\t\t\t|             4  >> Quitter le programme                          |\n";
		cout<<"\t\t\t\t\t\t|                                                                 |\n";
		cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

		a: cout<<"\n\tEntrer votre choix : ";
		cin>>choix;

		if(choix>4||choix<1) {
			cout<<"\n\n\t\t\t\t\t\tChoix Invalide\n";
			cout<<"\t\t\t\t\t\tEssaye Une Autre Fois...........\n\n";
			goto a;
		}

		system("CLS");

		switch (choix) {
			case 1: q.ajouterpatient();
			cout << "\n\t Clicker sur une touche";
			getch();
			break;

			case 2: q.chercher();
			cout << "\n\t Clicker sur une touche";
			getch();
			break;

			case 3: q.listerpatient();
			cout<<"\n\t Clicker sur une touche";
			getch();
			break;
			case 4: exitsysteme();
		}

		system("CLS");
	}
}

void ajouterdiagnostic() {


	app add;
	fstream pat_file;
	char fname[30];
	cout<<"\n\n \t\t\t\t\t\tEnter le nom du fichier a ouvrir pour ajouter le diagnostic : ";
	cin.ignore();
	gets(fname);
	strcat(fname, " diagnonstic");
	system("cls");
	pat_file.open(fname, ios::in);

	if( !pat_file) {
		pat_file.open(fname, ios::out | ios::app);
		cout<<"\n";
		cout<<"\n\n\n\n\t\t\t\t\t\t Ajouter plus d'informations dans le dossier du patient................on : ";
		cout<<"\n \t\t\t\t\tSymptomes : ";
		pat_file<<"Symptomes : ";
		gets(add.symptom);
		pat_file<<add.symptom<<"\n";
		cout<<"\n\t\t\t\t\tDiagnostic : ";
		pat_file<<"Diagnostic : ";
		gets(add.diagnosis);
		pat_file<<add.diagnosis<<"\n";
		cout<<"\n \t\t\t\t\tMedicaments : ";
		pat_file<<"Medicaments : ";
		gets(add.medicine);
		pat_file<<add.medicine<<"\n";
		cout<<"\n \t\t\t\t\tAdmission requise ? : ";
		pat_file<<"Admission requise? : ";
		gets(add.addmission);
		pat_file<<add.addmission<<"\n";
		cout<<"\n\t\t\t\t\t Type de service : ";
		pat_file<<"Type de service: ";
		gets(add.ward);
		pat_file<<add.ward<<"\n";
		pat_file<<"\n*************************************************************************\n";
		cout<<"\n\n \t\t\t\t\t La Diagnostique est attribuee avec succees\n\n\n\n";
		system("pause");
		pat_file.close();
		cout<<"\n\n";
	}

	else {
		cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
		string info;

		while(pat_file.good()) {
			getline(pat_file, info);
			cout<<info<<"\n";
		}

		cout<<"\n";
		pat_file.close();
		pat_file.open(fname, ios::out | ios::app);
		cout<<"\n";
		cout<<"\n\n\n\n\t\t\t\t\t\t Ajouter plus d'informations dans le dossier du patient................on : ";
		cout<<"\n\t\t\t\t\t Symptomes : ";
		pat_file<<"Symptomes : ";
		gets(add.symptom);
		pat_file<<add.symptom<<"\n";
		cout<<"\n\t\t\t\t\t Diagnostic : ";
		pat_file<<"Diagnostic : ";
		gets(add.diagnosis);
		pat_file<<add.diagnosis<<"\n";
		cout<<"\n\t\t\t\t\t Medicaments : ";
		pat_file<<"Medicaments : ";
		gets(add.medicine);
		pat_file<<add.medicine<<"\n";
		cout<<"\n\t\t\t\t\t Admission requise ? : ";
		pat_file<<"Admission requise? : ";
		gets(add.addmission);
		pat_file<<add.addmission<<"\n";
		cout<<"\n\t\t\t\t\t Type de service : ";
		pat_file<<"Type de service: ";
		gets(add.ward);
		pat_file<<add.ward<<"\n";
		pat_file<<"\n*************************************************************************\n";
		cout<<"\n\n\t\t\t\t\t La diagnostique est attribuee avec succes\n\n\n\n";
		pat_file.close();
		cout<<"\n\n";
	}

}

void rendezvous() {
	int choix=0;
	rdv r;
	char namefile [30];

	while (choix !=5) {
		system("Color C0");
		system("cls");
		cout<<"\n\n\t\t\t\t\t \t Bonjour Encore Une Fois ! ";
		cout<<"\n\n\t\t\t\t\t\tVeuillez choisir parmi les options suivantes : \n\n";
		cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
		cout<<"\t\t\t\t\t\t|                                           	                  |\n";
		cout<<"\t\t\t\t\t\t|                                           	                  |\n";
		cout<<"\t\t\t\t\t\t|             1  >> Ajouter un rendez-vous                        |\n";
		cout<<"\t\t\t\t\t\t|             2  >> Chercher un rendez-vous                       |\n";
		cout<<"\t\t\t\t\t\t|             3  >> Modifier un rendez-vous                       |\n";
		cout<<"\t\t\t\t\t\t|             4  >> Supprimer un rendez-vous                      |\n";
		cout<<"\t\t\t\t\t\t|             5  >> Quitter le programme                          |\n";
		cout<<"\t\t\t\t\t\t|                                                                 |\n";
		cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";

		a: cout<<"\n\tEntrer votre choix : ";
		cin>>choix;

		if(choix>5||choix<1) {
			cout<<"\n\n\t\t\t\t\t\tChoix Invalide\n";
			cout<<"\t\t\t\t\t\tEssaye Une Autre Fois...........\n\n";
			goto a;
		}

		system("CLS");

		switch (choix) {
			case 1: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t Entrer le nom du fichier :";
			cin.ignore();
			gets(namefile);
			r.ajouterrdv(namefile);
			cout << "\n\t\t\t\t\t\t Clicker sur une touche";
			getch();
			break;


			case 2: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t Entrer le nom du fichier :";
			cin.ignore();
			gets(namefile);
			r.afficherrdv(namefile);
			cout << "\n\t\t\t\t\t\t Clicker sur une touche";
			getch();
			break;

			case 3: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t Entrer le nom du fichier :";
			cin.ignore();
			gets(namefile);
			r.modifierrdv(namefile);
			cout<<"\n\t\t\t\t\t\t Clicker sur une touche";
			getch();
			break;

			case 4: cout<<"\n\n\n\n\n\n\t\t\t\t\t\t Entrer le nom du fichier :";
			cin.ignore();
			gets(namefile);
			r.supprimerrdv(namefile);
			cout<<"\n\t\t\t\t\t\t Clicker sur une touche";
			getch();
			break;

			case 5: exitsysteme();
			break;
		}

		system("CLS");
	}
}

void exitsysteme() {
	system("cls");
	system("Color 74");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*********************************************************************************************\n";
	cout<<"\t\t\t\t\t** _______________________________________________________________________________________ **\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
	cout<<"\t\t\t\t\t**|                                     Merci                                             |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                   A BIENTOT                                           |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                                                       |**\n";
	cout<<"\t\t\t\t\t**|                                                      Realise Par Groupe Elite         |**\n";
	cout<<"\t\t\t\t\t**|_______________________________________________________________________________________|**\n";
	cout<<"\t\t\t\t\t**                                            		                                   **\n";
	cout<<"\t\t\t\t\t*********************************************************************************************\n\n\n\n\t\t\t\t\t";
	system("pause");
}
