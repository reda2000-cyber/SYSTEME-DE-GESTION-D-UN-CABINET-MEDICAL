#ifndef MYHEADEFILE_H
#define MYHEADEFILE_H


#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include <string.h>
#include<stdlib.h>
#include <string>
#include <sstream>


using namespace std;




struct patient {
	int id;
	string nom;
	string prenom;
	int age;
	string adrresse;
	string sexe;
	string telephone;
	patient*suivant;
}

;

struct app {
	char symptom[500];
	char diagnosis[500];
	char medicine[500];
	char addmission[30];
	char ward[15];
}

;

class listepatient {
	patient *tete,
	*dernier;

	public: listepatient() {
		tete=NULL;
		dernier=NULL;
	}

	patient saisiepatient();
	void ajouterpatient();
	void getpatientout();
	void listerpatient();
	void chercher();
}

;
#endif