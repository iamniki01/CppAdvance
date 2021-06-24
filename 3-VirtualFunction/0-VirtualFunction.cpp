/***************************************************************
 * Description: This is to understand the "Virtual Function " in c++.
 *           -- Polymorphism is one of the key features of Object-oriented programming in C++.
 *                      It means many forms
 *  Key points:
 *      To achieve dynamic polymorphism, which is the ability to call dervied class function using base class pointer or refernec
 *      Two type of Virtual functions
 *          1. Virtual Functions
 *          2. Pure Virtual Functions
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 ///////Virtual function ////////////


 #include<iostream>
 using namespace std;

 class Base
 {
 public:
    virtual void fun(int x)
    {
        cout<<"BASE.. "<< x << endl;
    }
 };

 class Derived: public Base
 {
 public:
    void fun(int x) override
    {
        cout<<"Derived.."<< x <<endl;
    }
 };


 int main()
 {
    Base* b = new Derived;
    b->fun(10);
    return 0;
 }
