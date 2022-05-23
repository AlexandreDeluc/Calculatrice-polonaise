#include "Variable.h"

using namespace std;


Variable::Variable(char symbol,float valeur)
{
    _symbol = symbol;
    _valeur = valeur;
}

float Variable::getVariable(){
    return _valeur;
}
void Variable::afficher(ostream& os)
{
      os <<_symbol << ":" << _valeur << endl;
}