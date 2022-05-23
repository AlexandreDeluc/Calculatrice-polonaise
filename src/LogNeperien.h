
#ifndef EXPRESSION_LOGNEPERIEN_H
#define EXPRESSION_LOGNEPERIEN_H


#include "Operateur.h"

class LogNeperien : public Operateur{
public:
    LogNeperien(Expression * oD);
    void afficher(ostream &os) override;
    void afficherNPI(ostream &os) override;
    float calculer() override;
};


#endif //EXPRESSION_LOGNEPERIEN_H
