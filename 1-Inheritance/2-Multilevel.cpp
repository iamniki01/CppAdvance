 /***************************************************************
 * Description: This is to understand the "Inheritance " in c++.
 *               Multi-level Inheritance
 *             This is the most basic types of inheritance
 *             It requires only one basic class and one derived class
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
    public:
    void eat(){cout<<"Eating..." <<endl;}
    void walk(){cout<<"Walking...." <<endl;}

 };

 class Cat : public Animal
 {
public:
    void talk()
    {
        cout<<"Miaooo" <<endl;
    }
 };

 class PersianCat : public Cat
 {
public:
    void breed()
    {
        cout<<"Persian cat" <<endl;
    }
 };
int main()
 {
     PersianCat pc;
     Cat c;
     pc.eat();
     pc.talk();
     pc.breed();
     return 0;
 }
