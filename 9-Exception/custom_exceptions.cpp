//============================================================================
// Name        : custom_exceptions.cpp
// Author      : Nikhil Gowda S
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception
{
    /*customized exception class
    inherited from class exception*/
public:
    virtual const char *what() const throw()
    {
        return "Something bad happened!";
    }
};

class Test
{
public:
    void goesWrong()
    {
        throw MyException();
    }
    void goesRight()
    {
        std::cout << "everything is right\n";
    }
};

int main()
{

    Test test;

    try
    {
        test.goesWrong();
        // test.goesRight();
    }
    catch (MyException &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}