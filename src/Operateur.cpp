#include "Operateur.h"

Operateur::Operateur(Expression *g, Expression *d): Expression()
{
    _opD = d;
    _opG = g;
}

Operateur::~Operateur()
{
    //dtor
}

Expression *Operateur::getOpG() const
{
    return _opG;
}

Expression *Operateur::getOpD() const
{
    return _opD;
}
