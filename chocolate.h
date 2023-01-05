#ifndef CHOCOLATE_H_INCLUDED
#define CHOCOLATE_H_INCLUDED

#include <iostream>
#include "cake.h"

using namespace std;

class Chocolate : public Cake
{
    private:
        virtual void flavor()
        {
            cout << "adding chocolate flavor" << endl;
        }
};

#endif // CHOCOLATE_H_INCLUDED
