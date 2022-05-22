//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_MULTIPLICATION_H
#define EXPRESSION_MULTIPLICATION_H


#include "Operateur.h"
#include "Constante.h"

class Multiplication : public Operateur{
public:
    Multiplication(Expression *oG, Expression *oD);
    void afficher(ostream &os) override;
    void afficherNPI(ostream &os) override;
    float calculer() override;
};


#endif //EXPRESSION_MULTIPLICATION_H
