
#ifndef EXPRESSION_VALEURABSOLUE_H
#define EXPRESSION_VALEURABSOLUE_H


#include "Operateur.h"

class ValeurAbsolue : public Operateur{
public:
    ValeurAbsolue(Expression * oD);
    void afficher(ostream &os) override;
    void afficherNPI(ostream &os) override;
    float calculer() override;
};


#endif //EXPRESSION_VALEURABSOLUE_H
