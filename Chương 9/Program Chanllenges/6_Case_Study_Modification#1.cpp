#include <iostream>

using namespace std;

int main()
{
    int soLuongKhoanQuy;

    // Yeu cau nguoi dung nhap so luong khoan quy
    cout << "Nhap so luong khoan quy: ";
    cin >> soLuongKhoanQuy;

    // Cap phat dong mot mang de luu tru cac khoan quy
    double *khoanQuy = new double[soLuongKhoanQuy];

    // Yeu cau nguoi dung nhap gia tri cua cac khoan quy
    for (int i = 0; i < soLuongKhoanQuy; i++)
    {
        cout << "Nhap gia tri khoan quy #" << i + 1 << ": ";
        cin >> khoanQuy[i];
    }

    // Tinh tong gia tri khoan quy
    double tong = 0.0;
    for (int i = 0; i < soLuongKhoanQuy; i++)
    {
        tong += khoanQuy[i];
    }

    // Hien thi tong gia tri khoan quy
    cout << "Tong gia tri khoan quy: $" << tong << endl;

    // Giai phong mang da cap phat dong
    delete[] khoanQuy;

    return 0;
}
