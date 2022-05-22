#ifndef ADDITION_H
#define ADDITION_H

#include "Operateur.h"

using namespace std;

class Addition : public Operateur
{
    public:
        Addition();
        Addition(Expression *oG, Expression *oD);
        virtual ~Addition();

        void afficher(ostream &os) override;
        void afficherNPI(ostream &os) override;
        float calculer() override;

    protected:

    private:
};

#endif // ADDITION_H
