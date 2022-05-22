//
// Created by Renard on 22/05/2022.
//

#include "ExpressionAccessor.h"
#include <iostream>

Expression * ExpressionAccessor::getExpression(){
    if (_expression == nullptr) std::cout << "WARNING: Expression non définie." << std::endl;
    return _expression;
}

void ExpressionAccessor::setExpression(Expression *newExpression) {
    std::cout << "INFO: Expression définie." << std::endl;
    _expression = newExpression;
}

ExpressionAccessor &ExpressionAccessor::initializer() {
    std::cout << "INFO: Singleton initialisé" << std::endl;
    static auto * initializer = new ExpressionAccessor();
    return *initializer;
}

ExpressionAccessor::ExpressionAccessor() {
    std::cout << "INFO: Singleton construit." << std::endl;
}

ExpressionAccessor::~ExpressionAccessor() {
    std::cout << "INFO: Singleton détruit." << std::endl;
};
