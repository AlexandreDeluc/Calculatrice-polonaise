#ifndef EXPRESSION_PUISSANCE_H
#define EXPRESSION_PUISSANCE_H


#include "Operateur.h"

using namespace std;

class Puissance : public Operateur{
public:
    Puissance(Expression *oG, Expression *oD);
    void afficher(ostream &os) override;
    void afficherNPI(ostream &os) override;
    float calculer() override;
};


#endif //EXPRESSION_PUISSANCE_H