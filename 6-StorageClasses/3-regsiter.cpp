/***************************************************************
 * Description: This is to understand the "Storage Classes " in c++.
 *
 *  Key points:
 *          It  consists of 5 types
 *          --  Auto
 *          --  Register
 *          --  Static
 *          --  Extern
 *          --  Mutable
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 //Register

 #include<iostream>
 using namespace std;
 void increment()
 {
     register int n = 10;  //auto- similar to n and it is going to be destroyed
     n = n + 1 ;
     cout<<n<<endl;
 }
 int main()
 {

     increment();
     increment();
     increment();

     return 0;
 }


