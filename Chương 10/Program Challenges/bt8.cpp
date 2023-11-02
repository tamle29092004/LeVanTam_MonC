#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char chuoiNhap[100]; // Giả định độ dài tối đa của chuỗi là 100 ký tự
    int tong = 0;
    char chuSoLonNhat = '0';
    char chuSoNhoNhat = '9';

    cout << "Nhap mot chuoi cac so dơn vi ma có dau phan tach: ";
    cin.getline(chuoiNhap, sizeof(chuoiNhap));

    for (int i = 0; chuoiNhap[i] != '\0'; i++) {
        if (isdigit(chuoiNhap[i])) {
            int so = chuoiNhap[i] - '0'; // Chuyển ký tự sang số nguyên
            tong += so;

            if (chuoiNhap[i] > chuSoLonNhat) {
                chuSoLonNhat = chuoiNhap[i];
            }

            if (chuoiNhap[i] < chuSoNhoNhat) {
                chuSoNhoNhat = chuoiNhap[i];
            }
        }
    }

    cout << "Tong cua cac don vi : " << tong << endl;
    cout << "So lon nhat: " << chuSoLonNhat << endl;
    cout << "So nho nhat: " << chuSoNhoNhat << endl;

    return 0;
}
