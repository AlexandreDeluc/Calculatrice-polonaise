//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_ADDITION_H
#define EXPRESSION_ADDITION_H


#include "Operateur.h"
#include "Constante.h"

using namespace std;

class Addition : public Operateur {
public:
    Addition(Expression *oG, Expression *oD);
    void afficher(ostream &os) override;
    void afficherNPI(ostream &os) override;
    float calculer() override;

};


#endif //EXPRESSION_ADDITION_H
