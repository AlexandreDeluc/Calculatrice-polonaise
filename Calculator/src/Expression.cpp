#include "../include/Expression.h"

Expression::Expression(float val)
{
    _val = val;
}

Expression::~Expression()
{
    //dtor
}

void Expression::afficher(ostream& os)
{
    os << _val << " ";
}

float Expression::getValue()
{
    return _val;
}