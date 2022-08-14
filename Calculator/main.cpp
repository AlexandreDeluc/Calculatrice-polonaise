#include <iostream>
#include "include/Variable.h"

using namespace std;

int main()
{
    Variable x('x',400.0);
    Variable y('y',20.0);
    x.afficher(cout);
    y.afficher(cout);
    float calcul = x.getValue()+y.getValue();
    cout << calcul;
    return 0;
}
