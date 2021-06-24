/***************************************************************
 * Description: This is to understand the "Inheritance " in c++.
 *    --  Object-oriented Programming[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           -- Inheritance is one of the key features of Object-oriented programming in C++.
 *                   It allows us to create a new class (derived class) from an existing class (base class).
 *          -- The derived class inherits the features from the base class and can have additional features of its own
 *          -- Inheritance is an "is-a relationship". We use inheritance only if an is-a relationship is present between the two classes
 *          1) C++ protected Members
 *       The access modifier protected is especially relevant when it comes to C++ inheritance.
 *        Like "private members", protected members are inaccessible outside of the class.
 *          However, they can be accessed by derived classes and friend classes/functions.
 *          We need "protected" members if we want to hide the data of a class,
 *              but still want that data to be inherited by its derived classes.
 *
 *      ``` Types of Inheritance:
 *              1. Single level Inheritance
 *              2. Multilevel Inheritance
 *              3. Multiple Inheritance
 *              4. Hierarchial Inheritance
 *              5. Hybrid Inheritance
 *              6. Multipath Inheriance
 *
 *      ``` Modes of Inheritance
 *              1. Public - Visible to everyone
 *              2. Protected - Visible to current class and derived class
 *              3. Private - Visible to current class only
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include <iostream>
 using namespace std;

 class Animal
 {
 public:
    void eat(){cout<<"Eating..." <<endl;}
    void walk(){cout<<"Walking...." <<endl;}

 };

 class Dog : public Animal
 {
public:
    void talk()
    {
        cout<<"Bowwww" <<endl;
    }
 };

 class cat : public Animal
 {
public:
    void talk()
    {
        cout<<"Miaooo" <<endl;
    }
 };

 int main()
 {
     Dog d;
     cat c;
     d.eat();
     d.talk();
     c.eat();
     return 0;
 }
