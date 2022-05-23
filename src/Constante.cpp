//
// Created by yanoi on 10/05/2022.
//

#include "Constante.h"

void Constante::afficher(ostream &os) {
    os << _val << " ";
}

Expression* Constante::simplifier(){
    return this;
}

