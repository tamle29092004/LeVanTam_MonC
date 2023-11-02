//chương trình tính dấu * của 5 cửa hàng
#include <iostream>
using namespace std;

int main() {
    int doanhSoCuaHang[5];

    // Nhập doanh số từng cửa hàng
    for (int i = 0; i < 5; ++i) {
        cout << "Nhap doanh so hom nay cua cua hang " << i + 1 << ": ";
        cin >> doanhSoCuaHang[i];
        if (doanhSoCuaHang[i] < 0) {
            cout << "Xin vui long khong nhap so am. Vui long nhap lai: ";
            cin >> doanhSoCuaHang[i];
        }
    }

    // Hien thi bieu do thanh so sanh
    cout << "BIEU DO BAN HANG" << endl;
    cout << "(Moi * = $100)" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Cua hang " << i + 1 << ": ";
        for (int j = 0; j < doanhSoCuaHang[i] / 100; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
