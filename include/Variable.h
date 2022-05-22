//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_CONSTANTE_H
#define EXPRESSION_CONSTANTE_H


#include "Expression.h"

using namespace std;

class Variable : public Expression {
private:
    char _val;
public:
    Variable(char val){
        _val = val;
    }

   Variable(){
        _val = ' ';
   }

    void afficher(ostream &os) override;
    virtual void afficherNPI(ostream &os) override;
    virtual float calculer() override;
};


#endif //EXPRESSION_CONSTANTE_H
