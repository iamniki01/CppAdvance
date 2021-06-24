/***************************************************************
 * Description: This is to understand the "Function overridding " in c++.
 *    --  Object-oriented Programmin[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           -- the same function is defined in both the derived class and the based class.
 *            -- Now if we call this function using the object of the derived class, the function of the derived class is executed.
 *           This is known as function overriding in C++. The function in derived class overrides the function in base class.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 // C++ program to call the overridden function
// from a member function of the derived class

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print()
    {
        cout << "Derived Function" << endl;

        // call overridden function
        Base::print();
    }
};

int main()
{
    Derived derived1;
    derived1.print();
    return 0;
}
