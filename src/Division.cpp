#include "Division.h"

Division::Division(Expression *oG, Expression *oD) : Operateur(oG, oD)
{
    //ctor
}

Division::~Division()
{
    //dtor
}

void Division::afficher(ostream &os)
{
    getOpG()->afficher(os);
    os << "/";
    getOpD()->afficher(os);
}

void Division::afficherNPI(ostream &os)
{
    getOpG()->afficher(os);
    getOpD()->afficher(os);
    os << "/";
}

float Division::calculer()
{
    return getOpG()->calculer() / getOpD()->calculer()
}
