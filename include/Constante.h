//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_CONSTANTE_H
#define EXPRESSION_CONSTANTE_H


#include "Expression.h"

using namespace std;

class Constante : Expression {
private:
    float _val;
public:
    Constante(float val){
        _val = val;
    }

    void afficher(ostream &os) override;


};


#endif //EXPRESSION_CONSTANTE_H
