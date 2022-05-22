#include "Addition.h"

Addition::Addition(Expression *oG, Expression *oD) : Operateur(oG, oD)
{
    //ctor
}

Addition::~Addition()
{
    //dtor
}

void Addition::afficher(ostream &os)
{
    getOpG()->afficher(os);
    os << "+";
    getOpD()->afficher(os);
}

void Addition::afficherNPI(ostream &os)
{
    getOpG()->afficher(os);
    getOpD()->afficher(os);
    os << "+";
}

float Addition::calculer()
{
    return getOpG()->calculer() + getOpD()->calculer();
}
