//============================================================================
// Name        : writing_file.cpp
// Author      : NIkhil Gowda S
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // ofstream outFile;

    fstream outFile;

    string outputFileName = "text.txt";

    // outFile.open(outputFileName);
    outFile.open(outputFileName, ios::out);

    if (outFile.is_open())
    {
        outFile << "Hello there!\nThis file is written from write_file.cpp file" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else
    {
        cout << "Could not create file: " << outputFileName << endl;
    }

    return 0;
}