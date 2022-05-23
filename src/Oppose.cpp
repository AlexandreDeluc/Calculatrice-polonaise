//
// Created by yanoi on 10/05/2022.
//
#include "Oppose.h"
using namespace std;

Oppose::Oppose(Expression *oD) : Operateur(oD, oD) {}

void Oppose::afficher(ostream &os) {
    os << "- ( ";
    getOpD()->afficher(os);
    os << " ) ";
}

void Oppose::afficherNPI(ostream &os) {
    getOpD()->afficher(os);
    os << " - ";
}

float Oppose::calculer() {
    return -1 * getOpD()->calculer();
}