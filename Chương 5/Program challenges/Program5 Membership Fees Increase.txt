// chương trình tính phí của câu lạc bộ trong 6 năm tới
#include <iostream>

using namespace std;
int main()
{
    double saleofyear = 2500, // phí 1 năm
        totalCharges = 0;
    for (int count = 1; count <= 6; count++)
    {
        totalCharges += saleofyear * 0.04;//tính lai suat 1 nam
        cout << "The charge year " << count  << " is $" << totalCharges << endl;//in ra lai suat tung nam
    }
    return 0;
}