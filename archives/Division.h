//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_DIVISION_H
#define EXPRESSION_DIVISION_H


#include "Operateur.h"

class Division : public Operateur{
public:
    Division(Expression *oG, Expression *oD);
    void afficher(ostream &os) override;
    void afficherNPI(ostream &os) override;
    float calculer() override;
};


#endif //EXPRESSION_DIVISION_H
