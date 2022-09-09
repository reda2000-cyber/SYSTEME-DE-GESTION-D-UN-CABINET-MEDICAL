#ifndef RDV_H
#define RDV_H


#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<fstream>



using namespace std;


class rdv {
	int rendezvous;
	string date;
	string hour;
	char nomfichier[20];
	public:
		void ajouterrdv(char*);
	void modifierrdv(char*);
	void afficherrdv(char *);
	void supprimerrdv(char *);
	~rdv();
	rdv();

}

;

#endif