#include <iostream>
using namespace std;

class Ville{
    string nom;
    int numeroIdentification;
};

struct Graph {
    int nbVilles;
    int** connexions;
};

void init(int nbVilles) {
    this->nbVilles = nbVilles;
    connexions = new int*[nbVilles];
    for (int i = 0; i < nbVilles; i++) {
        connexions[i] = new int[nbVilles];
        for (int j = 0; j < nbVilles; j++)
            connexions[i][j] = 0;
    }
}

void addEdge(int i, int j, Graph &g) {
    g->connexions[i][j]++;
    g->connexions[j][i]++;
}

void print_connexions(Grap &g) {
    for (int i = 0; i < nbVilles; i++) {
        for (int j = 0; j < nbVilles; j++){
            if g->connexions[i][j]!=0
                cout << g->connexions[i][j] << " ";
            else
                cout << "-1 "
        }
        cout << "\n";
    }
}


int main() {
    representation = new Graph;
    init()
}
