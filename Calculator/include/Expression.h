#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <iostream>

using namespace std;

class Expression
{
	protected:
		float _val;

	public:
		Expression(float val);
		virtual ~Expression();
		
		void afficher(ostream& os);
		float getValue();
};

#endif // EXPRESSION_H
