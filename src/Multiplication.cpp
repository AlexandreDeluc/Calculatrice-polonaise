#include "Multiplication.h"

Multiplication::Multiplication(Expression *oG, Expression *oD0) : Operateur(oG, oD)
{
    //ctor
}

Multiplication::~Multiplication()
{
    //dtor
}


void Multiplication::afficher(ostream &os)
{
    getOpG()->afficher(os);
    os << "*";
    getOpD()->afficher(os);
}

void Multiplication::afficherNPI(ostream &os)
{
    getOpG()->afficher(os);
    getOpD()->afficher(os);
    os << "*";
}

float Multiplication::calculer()
{
    return getOpG()->calculer() * getOpD()->calculer();
}
