//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_EXPRESSION_H
#define EXPRESSION_EXPRESSION_H


#include <iostream>
using namespace std;
class Expression {
public:
    virtual void afficher(ostream &os) = 0;
    virtual void afficherNPI(ostream &os) = 0;
    virtual float calculer() = 0;

     virtual Expression* simplifier(){return 0;}

};


#endif //EXPRESSION_EXPRESSION_H
