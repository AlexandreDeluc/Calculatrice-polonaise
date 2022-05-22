#include "Constante.h"


Constante::Constante(float val)
{
    _val = val
}

Constante::~Constante()
{
    //dtor
}

void Constante::afficher(ostream &os)
{
    os << _val <<" ";
}

float Constante::calculer()
{
    return _val;
}

void Constante::setValue(float v)
{
    _val = v;
}
