//chương trình tính * và in ra màn hình quy mô dân số 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile("People.txt"); // Mo tệp People.txt để đọc
    if (!inputFile)
    {
        cout << "Khong the mo tep People.txt." << endl;
        return 1;
    }

    int years[] = {1900, 1920, 1940, 1960, 1980, 2000};
    int populations[6];

    for (int i = 0; i < 6; ++i)
    {
        inputFile >> populations[i];
    }

    cout << "TANG DAN SO PRAIRIEVILLE" << endl;
    cout << "(moi dau * tuong trung cho 1.000 nguoi)" << endl;

    for (int i = 0; i < 6; ++i)
    {
        cout << years[i] << " ";
        for (int j = 0; j < populations[i] / 1000; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    inputFile.close(); // Đóng tệp

    return 0;
}
