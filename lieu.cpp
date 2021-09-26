#include <stdlib.h>
#include<iostream>
using namespace std;

struct Ville {
	string nom;
	int nbVoisin;
	struct Ville* voisins[4] ;
};

void init(Ville &v){
	v.nom = " ";
	v.nbVoisin =0;
	//v.voisins= new Ville()*;
}

void print_connexions(Ville &v){
	int i;
	int n = v.nbVoisin;
	for (i =0; i<= n; i++){
		cout << v.voisins[i];
	}
}


int main(){ 
	Ville* town1= new Ville();
	town1->nom = "Madrid";
	Ville* town2= new Ville();
	town2->nom = "Lviv";
	town2->voisins[0]= new Ville();
	town2->voisins[0]= town1;
	town2->nbVoisin=1; 
	cout << town2->nbVoisin;
    return 0;
}
