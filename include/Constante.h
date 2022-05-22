#ifndef CONSTANTE_H
#define CONSTANTE_H

#include "Expression.h"

using namespace std;

class Constante : Expression
{
    public:
        Constante();
        Constante(float val)
        {
            _val = val;
        }
        virtual ~Constante();

        void afficher(ostream &os) override;
        float calculer();
        void setValue(float val);

    protected:

    private:
        float _val;
};

#endif // CONSTANTE_H
