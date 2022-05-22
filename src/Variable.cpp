//
// Created by yanoi on 10/05/2022.
//

#include "Variable.h"

void Variable::afficher(ostream &os) {
    os << _val << " ";
}

void Variable::afficherNPI(ostream &os) {
    os << _val << " ";
}

float Variable::calculer(){
    return _val;
}
