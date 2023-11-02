// chương trình nhập tên học sinh và cho biết ai là người đúng đầu
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int numberStudent;
    do
    {
        cout << "Enter the number students : ";
        cin >> numberStudent;                        // nhập số học sinh nếu nhập chử sẻ vòng lặp vô hạn are you ok?
        if (numberStudent < 1 || numberStudent > 25) // kiểm tra điều kiện
        {
            cout << "Please Enter number student from 1 to 25! ";
            cin >> numberStudent; // nhập lại
        }
    } while (numberStudent < 1 || numberStudent > 25);
    string firstName, firststudent, laststudent;
    int i = 1;                 // khai báo
    while (i <= numberStudent) // kiểm tra
    {

        cout << "Enter the name student " << i << " : ";
        cin >> firstName;

        if (i == 1)
        {
            laststudent = firststudent = firstName;
        }
        else
        {
            if (firstName < firststudent) // so sánh dựa trên ascii và cái nào nhỏ nhất thì đứng đầu
            {
                firststudent = firstName;
            }
            if (firstName > laststudent) // so sánh dựa trên ascii và cái nào lớn nhất thì đứng sau cùng
            {
                laststudent = firstName;
            }
        }
        i++; // bước lặp
    }
    cout << "The fisrt student is " << firststudent << endl; // học sinh đầu tiên
    cout << "The last student is " << laststudent << endl;   // học sinh cuối cùng
    return 0;
}