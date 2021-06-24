/***************************************************************
 * Description: This is to understand the "Inheritance " in c++.
 *               Hierearchical Inheritance
 *             It has  multiple derived class with only one base class.
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

 class Human
 {
 public:
     void breath()
     {
         cout<<"I am breathing"<<endl;
     }

    void sleep()
    {
        cout<<"I am sleeping"<<endl;
    }


 };

 class Gamer: public Human
 {
 public:
    void work()
    {
        cout<<"I have good skills in playing Pubg"<<endl;
    }
 };

 class Developer: public Human
 {
 public:
    void work()
    {
        cout<<"I have profound knowledge in c++ and python"<<endl;
    }

 };

 int main()
 {
        //Traditional way of calling inherited object
     cout<<"1.  Traditional way of calling inherited object"<<endl;
     Developer d;
     d.work();
     Gamer g;
     g.work();
     //Using bindings
     cout<<"2.  Staic biding and dynaminc binding"<<endl;

 /*   Static binding: If the function call mechanism determined at compile time.
      Dynamic binding: If the function call mechanism determined at run time.
      */
      Developer* D;
      //Static binding
      D->work();

      Gamer* G;

      G->work();



     return 0;
 }
