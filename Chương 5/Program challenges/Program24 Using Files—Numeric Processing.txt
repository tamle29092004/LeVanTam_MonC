// this program Using Files—Numeric Processing
#include <iostream>
#include <fstream> // Required for file handling
using namespace std;

int main()
{
    ifstream inputFile;           // Input file stream
    inputFile.open("Random.txt"); // Open the file

    // Check if the file was opened successfully
    if (!inputFile)
    {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    int number;           // To hold each number read from the file
    int count = 0;        // Number count
    double sum = 0.0;     // Running total
    double average = 0.0; // Average

    // Read numbers from the file, calculate count and sum
    while (inputFile >> number)
    {
        count++;
        sum += number;
    }

    // Close the file
    inputFile.close();

    // Calculate the average
    if (count > 0)
    {
        average = sum / count;
    }

    // Display the results
    cout << "Number of numbers in the file: " << count << endl;
    cout << "Sum of all numbers in the file: " << sum << endl;
    cout << "Average of all numbers in the file: " << average << endl;

    return 0;
}
