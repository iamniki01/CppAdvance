/***************************************************************
 * Description: This is to understand the "STL " in c++.
 *           -- Standard Template Library
 *      Topic: std::vector --Sequence container
 *          std::vector<Type> vectorVar;
 *  Key points:
 *          Access elements
 *          a. at()
 *          b. []
 *          c. front()
 *          d. back()
 *          e.data()
 *  Modifiers:
 *      insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear();
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include <vector>
 using namespace std;

 int main()
 {
     //Declare
     std::vector<int> myvector;

     //initiaization
     std::vector<int> myvector1 = {1,2,2,4,5};  //initializer lost
     //std::array<int, 4> myarray2 (1,2,3,5);   //uniform initialaization
     cout<<myvector1.at(2)<<endl;
     cout<<myvector1[3]<<endl;
     cout<<myvector1.front()<<endl;
     cout<<myvector1.back()<<endl;
     cout<<myvector1.data()<<endl; //to get address of vector
     cout<<"Modifiers..."<<endl;
     myvector1.push_back(10);
     cout<<"Last element after pushing at end "<<myvector1.back()<<endl;
     myvector1.pop_back();
     cout<<"Last element after poping at end "<<myvector1.back()<<endl;

     return 0;
 }
