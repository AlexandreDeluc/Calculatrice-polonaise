#ifndef LOADSAVE_H
#define LOADSAVE_H

#include "include/Expression.h"
#include <string>

void save(Expression *E, std::string path = "expression.txt");
Expression *load(std::string path = "expression.txt");

#endif // LOADSAVE_H
