#include <iostream>
#include "chocolate.h"
#include "corn.h"

using namespace std;

int main()
{
    Cake* chocolate_cake = new Chocolate();
    Cake* corn_cake = new Corn();

    cout << "MAKING A CHOCOLATE CAKE: " << endl;
    chocolate_cake->make();
    cout << endl;

    cout << "MAKING A CORN CAKE: " << endl;
    corn_cake->make();
    cout << endl;

    return 0;
}
