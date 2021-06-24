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
 #include "4.1-externdef.cpp"
 using namespace std;
 extern int i;
 extern void display();

 int main()
 {

    int a = 12;
    cout<<a <<" " << i <<endl;
    display();

     return 0;
 }


