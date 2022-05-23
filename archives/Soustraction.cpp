//
// Created by yanoi on 10/05/2022.
//

#include "Soustraction.h"

//
// Created by yanoi on 10/05/2022.
//

#include "Soustraction.h"

using namespace std;

Soustraction::Soustraction(Expression *oG, Expression *oD) : Operateur(oG, oD) {}

void Soustraction::afficher(ostream &os) {
    getOpG()->afficher(os);
    os << " + ";
    getOpD()->afficher(os);
}

void Soustraction::afficherNPI(ostream &os) {
    getOpG()->afficher(os);
    getOpD()->afficher(os);
    os << " + ";
}

float Soustraction::calculer() {
    return getOpG()->calculer() - getOpD()->calculer();
}