#ifndef VARIABLE_H
#define VARIABLE_H
#include <iostream>

#include "Expression.h"

using namespace std;

class Variable 
{
    public:
        char _symbol;
        float _valeur;
        Variable(char symbol,float valeur);
        float getVariable();
        void afficher(ostream& os);

    protected:

    private:
};

#endif // VARIABLE_H
