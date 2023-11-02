// chương trình lấy tên từ trong file txt
#include <iostream>
#include <fstream> // Required for file handling
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;           // Input file stream
    inputFile.open("LineUp.txt"); // Open the file

    // Check if the file was opened successfully
    if (!inputFile)
    {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    string studentName; // To hold each student name

    // Read names from the file until there is no more data to read
    while (getline(inputFile, studentName))
    {
        cout << "Student: " << studentName << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}
