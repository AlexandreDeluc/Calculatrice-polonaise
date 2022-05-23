//
// Created by yanoi on 10/05/2022.
//

#include "Operateur.h"

Operateur::Operateur(Expression *G, Expression *D): Expression(){
    _opG = G;
    _opD = D;
}

Expression *Operateur::getOpG() const {
    return _opG;
}

Expression *Operateur::getOpD() const {
    return _opD;
}
