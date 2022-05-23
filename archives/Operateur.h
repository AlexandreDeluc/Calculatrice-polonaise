//
// Created by yanoi on 10/05/2022.
//

#ifndef EXPRESSION_OPERATEUR_H
#define EXPRESSION_OPERATEUR_H


#include "Expression.h"

class Operateur : public Expression {
private:
    Expression *_opG;
public:
    Expression *getOpG() const;

    Expression *getOpD() const;

private:
    Expression *_opD;

public:
    Operateur(Expression *_oG, Expression *_oD);
};


#endif //EXPRESSION_OPERATEUR_H
