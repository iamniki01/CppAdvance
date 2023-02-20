//============================================================================
// Name        : standard_exception.cpp
// Author      : Nikhil Gowda S
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong
{
public:
    CanGoWrong()
    {
        char *pMemory = new char[999999999999999999999999999999]; // bad allocation
        delete[] pMemory;
    }
};

int main()
{

    try
    {
        CanGoWrong wrong;
    }
    catch (bad_alloc &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }

    cout << "Still running" << endl;

    return 0;
}