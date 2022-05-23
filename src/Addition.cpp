//
// Created by yanoi on 10/05/2022.
//

#include "Addition.h"


using namespace std;

Addition::Addition(Expression *oG, Expression *oD) : Operateur(oG, oD) {}

void Addition::afficher(ostream &os) {
    getOpG()->afficher(os);
    os << " + ";
    getOpD()->afficher(os);
}

void Addition::afficherNPI(ostream &os) {
    getOpG()->afficher(os);
    getOpD()->afficher(os);
    os << " + ";
}

float Addition::calculer() {
    return getOpG()->calculer() + getOpD()->calculer();
}

Expression* Addition::simplifier() {
    float a = getOpG()->calculer();
    float b = getOpD()->calculer();

    return new Addition(new Constante(a), new Constante(b));
}

