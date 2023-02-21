//============================================================================
// Name        : struct_padding.cpp
// Author      : Nikhil Gowda S
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

// pre-processive directive to padding (save 2B) on each struct
#pragma pack(push, 1)

struct Person
{
    char name[50]; // size is 50 here
    int age;       // 4 bytes
    double weight; // 8 bytes
};

#pragma pack(pop)

int main()
{

    cout << sizeof(Person) << endl;

    return 0;
}