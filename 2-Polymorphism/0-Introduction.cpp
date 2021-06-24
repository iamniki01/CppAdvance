/***************************************************************
 * Description: This is to understand the "Polymorphism " in c++.
 *    --  Object-oriented Programming[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           -- Polymorphism is one of the key features of Object-oriented programming in C++.
 *                      It means many forms
 *  Key points:
 *      There are two types of Polymorphism
 *          1. Compile Time Polymorphisms / static binding/ Early binding
 *              a. Function Overloading
 *              b. Operator Overloading
 *          2. RunTime Polymorphisms / Dynamic Binding /  Lazy Binding --> iyt can be achieved only by pointer / reference.
 *               a. Function overriding(Using virtual function)
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 ///////function overloading////////////


 #include<iostream>
 using namespace std;
 class test
 {
 public:
    void fun(int x)
    {
        cout<<"Integer.." <<endl;
    }

     void fun(double x)
    {
        cout<<"Double.." <<endl;
    }
 };

 int main()
 {
    test t1;
    t1.fun(10);
    t1.fun(10.5);
    return 0;
 }
