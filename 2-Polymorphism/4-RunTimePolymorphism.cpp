/***************************************************************
 * Description: RunTime Polymorphism
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
    void work() override
    {
        cout<<"I have good skills in playing Pubg"<<endl;
    }
 };



 int main()
 {
     Developer *d = new Gamer();
     d -> work();

     //using reference
    Gamer G;
    Developer &D = G;
    D.work();

     return 0;
 }
