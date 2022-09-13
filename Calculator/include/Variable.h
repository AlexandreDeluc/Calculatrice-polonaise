#ifndef VARIABLE_H
#define VARIABLE_H

#include <iostream>
#include "Expression.h"

using namespace std;

class Variable : public Expression
{
	private:
		char _symbol;
	
		

	public:
		Variable(char symbol, float val);
		virtual ~Variable();
		void afficher(ostream& os);
		Variable *next;
};	

#endif // VARIABLE_H
