#include <iostream>
#include <algorithm>

using namespace std;

// Ham so sanh tuy chinh de sap xep theo thu tu giam dan
bool soSanhGiamDan(const double &a, const double &b)
{
    return a > b;
}

int main()
{
    int soLuongKhoanQuy;

    cout << "Nhap so luong khoan quy: ";
    cin >> soLuongKhoanQuy;

    double *mangKhoanQuy = new double[soLuongKhoanQuy];

    for (int i = 0; i < soLuongKhoanQuy; i++)
    {
        cout << "Nhap khoan quy #" << i + 1 << ": ";
        cin >> mangKhoanQuy[i];
    }

    // Sap xep mang mangKhoanQuy theo thu tu giam dan
    sort(mangKhoanQuy, mangKhoanQuy + soLuongKhoanQuy, soSanhGiamDan);

    cout << "Cac khoan quy theo thu tu giam dan: ";
    for (int i = 0; i < soLuongKhoanQuy; i++)
    {
        cout << mangKhoanQuy[i] << " ";
    }
    cout << endl;

    delete[] mangKhoanQuy;

    return 0;
}
