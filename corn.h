#ifndef CORN_H_INCLUDED
#define CORN_H_INCLUDED

#include <iostream>
#include "cake.h"

using namespace std;

class Corn : public Cake
{
    private:
        virtual void flavor()
        {
            cout << "adding corn flavor" << endl;
        }
};

#endif // CORN_H_INCLUDED
