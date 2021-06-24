/***************************************************************
 * Description: This is to understand the "Virtual Destructor" in c++.
 *
 *  Key points:
 *      If we delete child object through a pointer of parent class then it is undefined behaviour
 *                  if parent class dose not ahev virtual destructor
 *      If we fail to declare destrctor as virtual in parent class then we end up having memory leak.
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 ///////Virtual Destructor////////////


 #include<iostream>
 using namespace std;

 class Base
 {
 public:
   Base() { cout<<"Base Constructed.." <<endl;}
   ~ Base() { cout<<"Base Destructed.." <<endl;}
 };

 class Derived: public Base
 {
 public:
   Derived() { cout<<"Derived Constructed.." <<endl;}
   ~ Derived() { cout<<"Derived destructed.." <<endl;}
 };


 int main()
 {
     Base *b = new Derived;
     delete b;  //never forget to delete when dynamically allocated object if default destructor is not available
     //it follows like stack
     Derived d;
    return 0;
 }
