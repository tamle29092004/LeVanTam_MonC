// chương trình vẽ ra khối hình vuông theo ý muốn
#include <iostream>
using namespace std;

int main()
{
    int sideLength;

    // Ask the user for input
    cout << "Enter a positive integer no greater than 15: ";
    cin >> sideLength;

    // Check if the input is valid
    if (sideLength < 1 || sideLength > 15)
    {
        cout << "Invalid input. Please enter a positive integer between 1 and 15." << endl;
        return 1; // Exit with an error code
    }

    // Display the square
    for (int i = 0; i < sideLength; ++i)
    {
        for (int j = 0; j < sideLength; ++j)
        {
            cout << "X";
        }
        cout << endl;
    }

    return 0; // Exit with success
}
