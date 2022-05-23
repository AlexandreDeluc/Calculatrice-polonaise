//
// Created by yanoi on 10/05/2022.
//

#include "Division.h"
using namespace std;

Division::Division(Expression *oG, Expression *oD) : Operateur(oG, oD) {}

void Division::afficher(ostream &os) {
    getOpG()->afficher(os);
    os << " / ";
    getOpD()->afficher(os);
}

void Division::afficherNPI(ostream &os) {
    getOpG()->afficher(os);
    getOpD()->afficher(os);
    os << " / ";
}

float Division::calculer() {
    return getOpG()->calculer() / getOpD()->calculer();
}


Expression* Division::simplifier() {
    float a = getOpG()->calculer();
    float b = getOpD()->calculer();

    if(a == 0.0f && b == 0.0f){
        return this;
    }
    else if(a == 0.0f){
         return new Division(getOpG(), new Constante(b));

    }
    else if(b == 0.0f){
        return new Division(new Constante(a), getOpD());
    }

    return new Division(new Constante(a), new Constante(b));
}