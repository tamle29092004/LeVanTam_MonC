//chương trình số tiền tích lủy qua từng ngày và nhân đôi mổi ngày
#include <iostream>

using namespace std;
int main()
{
    int numberofday;
    cout << "Enter the number day : ";
    cin >> numberofday;//nhập số ngày
    if (numberofday < 1)//kiểm tra
    {
        cout << "Value invalid. Please Enter again : ";
        cin >> numberofday;//nhập lại số ngày
    }

    int total = 1, totalvalue = 0;
    for (int count = 1; count <= numberofday; count++)
    {

        cout << "The day " << count << "you have to $" << total << endl;
        total *= 2;//mổi ngày nhân 2 
        totalvalue += total;//tổng các ngày
    }
    cout << "After " << numberofday << " day you have to $" << total << endl;

    return 0;
}