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

 ///////Pure Virtual function////////////


 #include<iostream>
 using namespace std;
 class Animal
 {
 public:
    virtual void fun(int x)
    {
        cout<<"BASE.. "<< x << endl;
    }
    virtual void eat()=0; //pure virtual function - which converts base class to abstract class
 };

 class Lion: public Animal
 {
 public:
    void fun(int x) override
    {
        cout<<"Derived.."<< x <<endl;
    }
    void eat()
    {
        cout<< "Eating Non-veg...." << endl;
    }
 };

 class Cow: public Animal
 {
 public:
    void fun(int x) override
    {
        cout<<"Derived.."<< x <<endl;
    }
    void eat()
    {
        cout<< "Eating veg...." << endl;
    }
 };



 int main()
 {
    Animal* b = new Cow;
    b->eat();

    Animal* a = new Lion;
    a->eat();
    return 0;
 }
