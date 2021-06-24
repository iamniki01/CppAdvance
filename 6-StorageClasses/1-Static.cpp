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

 //Static ////

 #include<iostream>
 using namespace std;

 void increment()
 {
     static int n = 10;  //static - the variable is not going to be destroyed
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


