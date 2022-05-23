//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_SOUSTRACTION_H
#define EXPRESSION_SOUSTRACTION_H


#include "Operateur.h"
#include "Constante.h"

using namespace std;

class Soustraction : public Operateur{
public:
    Soustraction(Expression *oG, Expression *oD);
    void afficher(ostream &os) override;
    void afficherNPI(ostream &os) override;
    float calculer() override;

     Expression* simplifier() override;

};




#endif //EXPRESSION_SOUSTRACTION_H
