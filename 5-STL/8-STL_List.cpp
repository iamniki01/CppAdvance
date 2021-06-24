/***************************************************************
 * Description: This is to understand the "STL " in c++.
 *           -- Standard Template Library
 *
 *      Topic: std::list --This is double linked list
 *          std::multimap<Type> listVar;
 *  Key points:
 *          Sequence container and it is faster than any other STL
 *          It can be store in sorted order
 *          ADDITIONAL OPERATION: push_front(), pop_front(), merge(), splice().
 *
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include <list>
 using namespace std;

 int main()
 {
     std::list<int> myList1 = {5,7,8,9,8};
     std::list<int> myList2 = {2,3,12,9,10};
     myList1.sort();
     myList2.sort();
     myList1.splice(myList1.begin(),myList2);
     for(auto const &e:myList1)
     {
         cout<<e<<' ';
     }


     return 0;
 }
