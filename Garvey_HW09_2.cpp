//Program Name: HW09_2
//Purpose: Write, compile, and run a simple C++ program
//Author: James Garvey
//Date Last Modified: [10/17/24]

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;

    char inName[200];
    string inputLine;
    int lineNumber = 1;

    // in
    cout << "Enter input file name: "<< endl;
    cin >> inName;

    inFile.open(inName);

    if (!inFile)
    {
        cout << "ERROR: Failed to open input file "<< inName << "." << endl;
        return 51;
    }
  
    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');
        cout << setw(4) << right << lineNumber
             << ": " << inputLine << endl;
        lineNumber++;
    }

    inFile.close();
    cout << "The file " << inName << " has been processed." << endl;

    return 0;
}

// Control + Shift + B to run chose single file