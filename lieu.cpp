#include <stdlib.h>
#include<iostream>
using namespace std;

struct Ville {
	string nom;
	Ville Voisins[] ;
};

void init(Ville &v){
	v.nom = " ";
	v.Voisins = NULL;
}

void print_connexions(Ville &v){
	int i;
	int n = v.Voisins.size();
	for (i =0; i<= n; i++){
		cout << v.Voisins[i];
	}
}


int main(){
	Ville town1= {.nom="Madrid", .Voisins=NULL};
	Ville town2= {.nom="Lviv", .Voisins=&town1};
    return 0;
}
