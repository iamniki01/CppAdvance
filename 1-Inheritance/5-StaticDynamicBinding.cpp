/***************************************************************
 * Description: This is to understand the "Binding " in c++.
 *               Hierearchical Inheritance
 *
 *   Static binding: If the function call mechanism determined at compile time.
 *   Dynamic binding: If the function call mechanism determined at run time.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/
 #include <iostream>
 using namespace std;


 class Developer
 {
 public:
    virtual void work()  //dynamic using virtual
    {
        cout<<"I have profound knowledge in c++ and python"<<endl;
    }

 };


class Gamer: public Developer
 {
 public:
    void work()
    {
        cout<<"I have good skills in playing Pubg"<<endl;
    }
 };


 void myWork(Developer *obj)
 {
     obj->work();   //static
 }


 int main()
 {
     myWork(new Developer);  //dynamic
     myWork(new Gamer);
     return 0;
 }
