/***************************************************************
 * Description: This is to understand the "STL " in c++.
 *           -- Standard Template Library
 *
 *      Topic: std::multiset --Stores sorted elements
 *          std::multiset<Type> setVar;
 *  Key points:
 *          Usually implemented  using Red-Black Tree
 *          Logirathmic complexity
 *          NOTE:  If we want to store user defined data type in multiset then we will have to provide
 *                  compare function so that multiset can store them in sorted order
 *
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include <set>
 #include <string>
 #include <functional>
 using namespace std;


 class Person
 {
public:
    float age;
    std::string Name;

    //Comparator Function
    bool operator < (const Person& rhs)
    const
    {
        return age<rhs.age;
    }
    bool operator > (const Person& rhs)
    const
    {
        return age>rhs.age;
    }

 };

 int main()
 {
     std::multiset<Person, std::greater<>> myMultiSet1 = {{17,"Mandira"},{21,"Rahul"},{25,"Punya"} ,{25,"Nikhil"}};
     std::multiset<Person, std::less<>> myMultiSet2 = {{17,"Mandira"},{21,"Rahul"},{25,"Punya"}, {25,"Nikhil"}};
     cout<<"Greater order"<<endl;
     for(const auto& e:myMultiSet1)
     {
         cout<<e.age<<" " <<e.Name<<endl;
     }
     cout<<"lesser order"<<endl;
     for(const auto& e:myMultiSet2)
     {
         cout<<e.age<<" " <<e.Name<<endl;
     }

     return 0;
 }
