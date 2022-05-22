#ifndef DIVISION_H
#define DIVISION_H

#include "Operateur.h"

using namespace std;

class Division : public Operateur
{
    public:
        Division();
        virtual ~Division();

        Division(Expression *oG, Expression *oD);
        void afficher(ostream &os) override;
        void afficherNPI(ostream &os) override;
        float calculer() override;

    protected:

    private:
};

#endif // DIVISION_H
