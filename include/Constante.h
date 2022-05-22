//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_CONSTANTE_H
#define EXPRESSION_CONSTANTE_H


#include "Expression.h"

using namespace std;

class Constante : public Expression {
private:
    float _val;
public:
    Constante(float val){
        _val = val;
    }

   Constante(){
        _val = 0;
   }

    void afficher(ostream &os) override;
    virtual void afficherNPI(ostream &os) override;
    virtual float calculer() override;
};


#endif //EXPRESSION_CONSTANTE_H
