#ifndef OPERATEUR_H
#define OPERATEUR_H

#include "Expression.h"

class Operateur
{
	private:
		Expression* _opD;
		Expression* _opG;
	
	public:
		
		Operateur(Expression* g, Expression* d);		
		virtual ~Operateur();
		
		Expression* getOpG() const;
		Expression* getOpD() const;

		virtual void afficher(ostream &os) = 0;
        virtual void afficherNPI(ostream &os) = 0;
		virtual float calculer() = 0;
};

#endif // OPERATEUR_H
