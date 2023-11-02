//chương trình 2 tam giác ngược nhau

#include <iostream>
using namespace std;

int main()
{
    int rows = 10; // You can change the number of rows here

    // Pattern A
    cout << "Pattern A" << endl;
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "+";
        }
        cout << " ";

        cout << endl;
    }

    cout << endl; // Add a space between patterns

    // Pattern B
    cout << "Pattern B " << endl;
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= rows - i + 1; ++j)
        {
            cout << "+";
        }
        cout << " ";

        cout << endl;
    }

    return 0;
}
