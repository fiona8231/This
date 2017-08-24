
#include "Hannah.h"
#include <iostream>

using namespace std;

Hannah::Hannah(int number)
: h(number)
{

}

void  Hannah::print() {
    cout << "h= " << h << endl;
    cout << "this-> h" << this ->h << endl;
    cout << "(*this).h" << (*this).h << endl;
}