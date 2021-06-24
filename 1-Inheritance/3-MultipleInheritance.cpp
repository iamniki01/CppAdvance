/***************************************************************
 * Description: This is to understand the "Inheritance " in c++.
 *               Multiple Inheritance
 *             It has  multiple base class and one derived class, there is an ambiguity problem.
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

 class Developer
 {
 public:
    Developer()
    {
        cout<< "I am a devloper"<<endl;
    }
    void work()
    {
        cout<<"I have profound knowledge in c++ and python"<<endl;
    }

 };

 class Gamer
 {
 public:

    Gamer()
        {
            cout<< "I am a gamer"<<endl;
        }
    void work()
    {
        cout<<"I have good skills in playing Pubg"<<endl;
    }
 };

 class Nikhil : public Developer, public Gamer
 {
public:
    Nikhil()
    {
        cout<<"About Nikhil"<<endl;
    }
 };

int main()
 {
     Nikhil n;
     n.Developer::work();
     n.Gamer::work();
     //2nd method using static_cast
     static_cast<Developer>(n).work();
     static_cast<Gamer>(n).work();

     return 0;
 }
