#ifndef CAKE_H_INCLUDED
#define CAKE_H_INCLUDED

#include <iostream>

using namespace std;

class Cake
{

    private:
        void standardIngredients(){cout << "adding standard ingredients" << endl;}
        virtual void flavor() = 0;
        void mix_whip(){cout << "mixing and whipping ingredients" << endl;}
        void bake(){cout << "baking the cake" << endl;}
        void ready(){cout << "cake's done" << endl;}


    public:
        void make()
        {
            standardIngredients();
            flavor();
            mix_whip();
            bake();
            ready();
        }

};

#endif // CAKE_H_INCLUDED
