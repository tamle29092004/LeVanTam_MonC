#include <iostream>

using namespace std;

// Hàm thực hiện các phép toán trên hai con trỏ
int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main()
{
    int a = 5;
    int b = 3;

    cout << "Truoc khi goi doSomething:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    int ketQua = doSomething(&a, &b);

    cout << "Sau khi goi doSomething:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Ket qua = " << ketQua << endl;

    return 0;
}
