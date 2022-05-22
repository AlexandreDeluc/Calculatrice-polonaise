//
// Created by Renard on 22/05/2022.
//

#ifndef CALCULATRICE_POLONAISE_EXPRESSIONACCESSOR_H
#define CALCULATRICE_POLONAISE_EXPRESSIONACCESSOR_H

#include "../Expression.h"

class ExpressionAccessor {
public:
    static ExpressionAccessor & initializer();

    Expression * getExpression();

    void setExpression(Expression* newExpression);

    ExpressionAccessor();

    ~ExpressionAccessor();

private:
    Expression * _expression = nullptr;
};

#endif //CALCULATRICE_POLONAISE_EXPRESSIONACCESSOR_H
