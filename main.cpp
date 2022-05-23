#include <iostream>
#include "Variable.h"

using namespace std;

int main()
{
    Variable x('x',400.0);
    Variable y('y',20.0);
    x.afficher(cout);
    y.afficher(cout);
    float calcul = x.getVariable()+y.getVariable();
    return calcul;
}
