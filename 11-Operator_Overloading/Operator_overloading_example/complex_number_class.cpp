//============================================================================
// Name        : A.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "complex.cpp"

using namespace std;
using namespace overloadingExample;

int main()
{

    Complex c1(2, 3);
    Complex c2(c1);

    Complex c3;

    c3 = c2;

    cout << c2 << ": " << c3 << endl;

    return 0;
}