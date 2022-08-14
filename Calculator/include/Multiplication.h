#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "Operateur.h"

using namespace std;

class Multiplication : public Operateur
{
	public:
		Multiplication(Expression* oG, Expression* oD);
		virtual ~Multiplication();

		void afficher(ostream& os) override;
		void afficherNPI(ostream& os) override;
		float calculer() override;
};

#endif // MULTIPLICATION_H
