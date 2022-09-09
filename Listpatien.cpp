#include"Listpatien.h"


void afficher(patient *p) {
   cout<<"\n************";
   cout<<"\n\n  Patient :";
   cout<<"\n\n  Identite      : "<<p->id;
   cout<<"\n\n  Nome       : "<<p->nom;
   cout<<"\n    Prenom     : "<<p->prenom;
   cout<<"\n    Age        : "<<p->age;
   cout<<"\n    Sexe       : "<<p->sexe;
   cout<<"\n    Adresse    : "<<p->adrresse;
   cout<<"\n    Numero Telephone     : "<<p->telephone;
   cout<<"\n\n************";
}

patient listepatient :: saisiepatient() {
   patient *p=new patient();


   cout <<"\n\n\n\n\n\n\t\t\t\t\t\t\t Entrer les donnees de votre patient : \n";
   cout<<"\t\t\t\t\t\t\t Identite  : ";
   cin>>p->id;
   cin.ignore();
   cout<<endl<<"\t\t\t\t\t\t\t Nom     : ";
   getline(cin, p->nom);
   cout <<endl<<"\t\t\t\t\t\t\t Prenom    : ";
   getline(cin, p->prenom);
   cout<<endl<<"\t\t\t\t\t\t\t Age       : ";
   cin>>p->age;
   cin.ignore();
   cout<<endl<<"\t\t\t\t\t\t\t Sexe (HOMME / FEMME) :";
   getline(cin, p->sexe);
   cout<<endl<<"\t\t\t\t\t\t\t Adresse   :";
   getline(cin, p->adrresse);
   cout<<endl<<"\t\t\t\t\t\t\t Numero Telephone   : ";
   getline(cin, p->telephone);
   cin.ignore();


   return *p;
}

void listepatient :: ajouterpatient() {
   patient*p=new patient();
   *p=saisiepatient();

   if(p->id==0) return;

   else {


      ofstream pat_file;
      char nomfichier[20];
      cout<<"\n\n\n\n\t\t\t\t\t\t\t Enter le nom du fichier : ";
      gets(nomfichier);
      pat_file.open(nomfichier);



      cout<<"\n\t\t\t\t\t\t\t******************************************************************************\n";
      pat_file<<"\n\t\t\t\t\t\t\t******************************************************************************\n\n";
      pat_file<<" \t\t\t\t\t\t\t ID  :"<<p->id<<"\n";
      ;
      pat_file<<" \t\t\t\t\t\t\t Nom  :"<<p->nom<<"\n";
      ;
      pat_file<<" \t\t\t\t\t\t\t Prenom :"<<p->prenom<<"\n";
      pat_file<<" \t\t\t\t\t\t\t Age  :"<<p->age<<"\n";
      pat_file<<" \t\t\t\t\t\t\t Sexe  :"<<p->sexe<<"\n";
      pat_file<<" \t\t\t\t\t\t\t Adrresse  :"<<p->adrresse<<"\n";
      pat_file<<" \t\t\t\t\t\t\t Telephone  :"<<p->telephone<<"\n";


   }

   if(tete==NULL) {
      tete=p;
      dernier=p;
      p->suivant=NULL;
   }

   else {
      p->suivant=tete;
      tete=p;
   }

   system("cls");
   cout << "\n\t\t\t\t\t\t\t\t Patient ajoute .";
   afficher(p);
}

void listepatient :: listerpatient() {
   if(tete==NULL) {
      cout<<"\n\t\t\t\t\t\t\t\t Pas de patient .";
   }

   patient*p=new patient;
   p=tete;
   int i=1;

   while(p !=NULL) {
      cout<<"********************************************************************\n";
      cout<<i<<endl;
      afficher(p);
      i++;
      p=p->suivant;
   }

   cout<<"\n";
}

void listepatient :: chercher() {
   char nomfichier[20];
   fstream pat_file;


   cout<<" \n\n\n\n\t\t\t\t\t\t Enter le nom du fichier  : \n";
   cin.ignore();
   gets(nomfichier);
   pat_file.open(nomfichier);

   if( !pat_file) {
      cout<<" \t\t\t\t\t\t\t Erreur patient non trouver ! \n";
   }

   else {
      cout<<"\n\n\n\n\t\t\t\t\t\t........................................ PATIENT ID :"<<nomfichier<<" ........................................\n\n\n\n";
      string info;

      while(pat_file.good()) {
         getline(pat_file, info);
         cout<<info<<"\n";
      }

      cout<<"\n";
   }
}
