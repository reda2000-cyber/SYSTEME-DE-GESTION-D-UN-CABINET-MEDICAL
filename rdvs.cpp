#include"rdvs.h"

void rdv::ajouterrdv(char * namefile) {
	strcpy(nomfichier, namefile);
	ofstream pat_file(nomfichier, ios::app);
	if(pat_file) //On teste si tout est OK

		{
        cout<<"\t\t\t\t\t\t********************************************************************\n";
		cout<<"\t\t\t\t\t\t Entrez la date (sous la forme JJ/MM/AAAA)"<<endl;
		getline(cin, date);
		cout<<endl;
		cout<<"\t\t\t\t\t\t********************************************************************\n";
		cout<<"\n\t\t\t\t\t\t Entrez l'heure (sous la forme 00h00)"<<endl;
		getline(cin, hour);
		cout<<"\t\t\t\t\t\t********************************************************************\n";
		//Tout est OK, on peut utiliser le fichier
		pat_file<<"\t\t\t\t\t\t Rendez vous :"<<endl;
		pat_file<<"\t\t\t\t\t\t Date : "<<date<<endl;
		pat_file<<"\t\t\t\t\t\t Heure : "<<hour<<endl;
	}

	else {
		cout << "\t\t\t\t\t\t Aucun patient n'est enregistrer sous ce nom , reessayer"<< endl;
	}
}

void rdv::modifierrdv(char * namefile) {
	strcpy(nomfichier, namefile);
	fstream pat_file;
	pat_file.open(nomfichier, ios::ate | ios::out | ios::in);

	if(pat_file) //On teste si tout est OK

		{
		//Tout est OK, on peut utiliser le fichier
        cout<<"\t\t\t\t\t\t********************************************************************\n";
		cout<<"\t\t\t\t\t\t Entrez la nouvelle date (sous la forme JJ/MM/AAAA)"<<endl;
		getline(cin, date);
		cout<<endl;
		cout<<"\t\t\t\t\t\t********************************************************************\n";
		cout<<"\t\t\t\t\t\t Entrez la nouvelle heure (sous la forme 00h00)"<<endl;
		getline(cin, hour);


		pat_file.seekp(-35, ios::end);

		pat_file<<"\t\t\t\t\t\t Date : "<<date<<endl;

		pat_file<<"\t\t\t\t\t\t Heure : "<<hour<<endl;
		cout<<"\t\t\t\t\t\t La date est bien modifier.";

	}

	else {
		cout << "\t\t\t\t\t\t Aucun patient n'est enregistrer sous ce nom , reessayer... "<< endl;
	}

}



rdv::~rdv() {
	rendezvous=0;
	delete nomfichier;
}

void rdv::afficherrdv(char * namefile) {
	strcpy(nomfichier, namefile);
	fstream pat_file;
	pat_file.open(nomfichier, ios::ate | ios::out | ios::in);
	if(pat_file) //On teste si tout est OK

		{
		//Tout est OK, on peut utiliser le fichier
		string line;
		pat_file.seekg(-49, ios::end);
		getline(pat_file, line);
		cout<<line<<endl;
		getline(pat_file, line);
		cout<<line<<endl;
		getline(pat_file, line);
		cout<<line<<endl;
	}

	else {
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t Aucun patient n'est enregistrer sous ce nom , reessayer..."<< endl;
	}
}

rdv::rdv() {
	rendezvous=0;
	date="00/00/0000";
	hour="00h00";
	int i=0;

	while(i<20) {
		nomfichier[i]='a';
		i++;
	}
}

void rdv :: supprimerrdv(char * namefile) {
	strcpy(nomfichier, namefile);
	fstream pat_file;
	pat_file.open(nomfichier, ios::ate | ios::out | ios::in);
	pat_file.seekp(-49, ios::end);
	pat_file<<"                           "<<endl;
	pat_file<<"                                                                                  "<<endl;
	pat_file<<"                                                                       "<<endl;
	rendezvous=0;
	cout<<"\n\n\n\n\n\n\t\t\t\t\t\t Le rendez vous est supprimee avec succees."<<endl;

}
