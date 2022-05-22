//
// Created by yanoi on 10/05/2022.
//

#include "Multiplication.h"

using namespace std;

Multiplication::Multiplication(Expression *oG, Expression *oD) : Operateur(oG, oD) {}

void Multiplication::afficher(ostream &os) {
    getOpG()->afficher(os);
    os << " * ";
    getOpD()->afficher(os);
}

void Multiplication::afficherNPI(ostream &os) {
    getOpG()->afficher(os);
    getOpD()->afficher(os);
    os << " * ";
}

float Multiplication::calculer() {
    return getOpG()->calculer() * getOpD()->calculer();
}

