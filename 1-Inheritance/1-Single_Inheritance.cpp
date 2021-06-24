 /***************************************************************
 * Description: This is to understand the "Inheritance " in c++.
 *              1. Single level Inheritance
 *             This is the most basic types of inheritance
 *             It requires only one basic class and one derived class
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

 class Vehicle
 {
 public:
    void driveVehicle(){cout<<"Driving.." <<endl;}

 };

 class Car : public Vehicle
 {
public:
    void getTires()
    {
        cout<<"4 tiresss" <<endl;
    }
 };
int main()
 {
     Car C;
     C.driveVehicle();
     C.getTires();
     return 0;
 }
