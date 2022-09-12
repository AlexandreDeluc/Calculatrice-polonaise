#include "../include/Variable.h"

using namespace std;

Variable::Variable(char symbol, float val) : Expression(val)
{
	_symbol = symbol;
    int next = NULL;
}

Variable::~Variable() {}

void Variable::afficher(ostream& os)
{
	os << _symbol << ":" << _val << endl;
}

