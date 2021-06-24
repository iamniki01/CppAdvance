/***************************************************************
 * Description: This is to understand the "STL " in c++.
 *           -- Standard Template Library
 *      Topic: std::array
 *          std::array<Type, N> array;
 *  Key points:
 *          Access elements
 *          a. at()
 *          b. []
 *          c. front()
 *          d. back()
 *          e.data()
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include<memory>
 using namespace std;

 int main()
 {
     //Declare
     std::array<int, 5> myarray3;

     //initiaization
     std::array<int, 5> myarray = {1,2,2,4,5};  //initializer lost
     //std::array<int, 4> myarray2 (1,2,3,5);   //uniform initialaization
     cout<<myarray.at(2)<<endl;
     cout<<myarray[3]<<endl;
     cout<<myarray.front()<<endl;
     cout<<myarray.back()<<endl;
     cout<<myarray.data()<<endl; //to get address of array
     return 0;
 }
