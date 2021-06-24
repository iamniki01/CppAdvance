/***************************************************************
 * Description: This is to understand the functions overloading  in c++.
 *              Here Function is a block of code that perform a specific task
 * In C++, two functions can have the same name if the number and/or type of arguments passed is different.
 *
 * "These functions having the same name but different arguments are known as overloaded functions"
 *
 * There is always certain steps we should use while creating function in c++
 *    step 1 : writing function prototype
 *    step 2 : declaring/ defining function
 *    step 3 : calling function
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

#include <iostream>
using namespace std;

// function with 2 parameters
void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// function with double type single parameter
void display(double var) {
    cout << "Double number: " << var << endl;
}

// function with int type single parameter
void display(int var) {
    cout << "Integer number: " << var << endl;
}

int main() {

    int num1;
    double num2;
    std::cout<<"Enter any 2 Number 1st number in int and 2nd number with float: " ;
    std::cin>> num1 >> num2;

    // call function with int type parameter
    display(num1);

    // call function with double type parameter
    display(num2);

    // call function with 2 parameters
    display(num1, num2);

    return 0;
}

/*Note::  Standard library function is always function overloaded*/
