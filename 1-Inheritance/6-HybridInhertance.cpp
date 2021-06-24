/***************************************************************
 * Description: This is to understand the "Inheritance " in c++.
 *               Hybrid Inheritance
 *             It its the combination of multiple and hierarchical inheritance.
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

 class Student
 {
 public:
    void study()
    {
        cout<<"I am studying"<<endl;
    }
 };
 class Male{};
 class Female{};
 class Boy:public Student, public Male{};
 class Girl:public Student, public Female{};

 int main()
 {
     Boy ram;
     ram.study();

     Girl sana;
     sana.study();


 }
