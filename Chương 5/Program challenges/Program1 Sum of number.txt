// chương trình tính tổng các số đến n
#include <iostream>

using namespace std;
int main()
{
    int number, total = 0 ;
    cout << "Enter the number : ";
    cin >> number; // nhập số

    for (int count = 1; count <= number; count++)
    {
        total += count; // tính toán tổng các số
    }
    cout << "The total is " << total << endl; // in ra kết quả

    return 0;
}
