/***************************************************************
 * Description: This is to understand the "STL " in c++.
 *           -- Standard Template Library
 *
 *      Topic: std::set --Stores sorted unique elements
 *          std::set<Type> setVar;
 *  Key points:
 *          Usually implemented  using Red-Black Tree
 *          Logirathmic complexity
 *
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include <set>
 using namespace std;

 int main()
 {
     std::set<int> mySet = {1,2,3,5,4,1,2,3,5,4};
     for(const auto& e:mySet)
     {
         cout<<e<<endl;
     }
     return 0;
 }
