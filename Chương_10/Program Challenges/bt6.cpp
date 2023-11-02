#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int demNguyenAm(const char* chuoi) {
    int demNguyenAm = 0;
    const char* nguyenAm = "AEIOUaeiou";

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (strchr(nguyenAm, chuoi[i]) != nullptr) {
            demNguyenAm++;
        }
    }

    return demNguyenAm;
}

int demPhuAm(const char* chuoi) {
    int demPhuAm = 0;

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i]) && strchr("AEIOUaeiou", chuoi[i]) == nullptr) {
            demPhuAm++;
        }
    }

    return demPhuAm;
}

int main() {
    char chuoiNhap[1000];
    char luaChon;

    do {
        cout << "1. Nhap mot chuoi" << endl;
        cout << "2. Dem so nguyen am trong chuoi" << endl;
        cout << "3. Dem so phu am trong chuoi" << endl;
        cout << "4. Dem ca nguyen am  va phu am " << endl;
        cout << "5. nhap mot so khac" << endl;
        cout << "6. Thoat chuong trinh " << endl;
        cout << "Chon mot tuy chon (1-6): ";
        cin >> luaChon;

        cin.ignore(); // Loại bỏ ký tự newline

        switch (luaChon) {
            case '1':
                cout << "Nhap mot chuoi: ";
                cin.getline(chuoiNhap, sizeof(chuoiNhap));
                break;
            case '2':
                cout << "So nguyen am trong chuoi: " << demNguyenAm(chuoiNhap) << endl;
                break;
            case '3':
                cout << "So phu am trong chuoi: " << demPhuAm(chuoiNhap) << endl;
                break;
            case '4':
                cout << "So nguyen am trong chuoi: " << demNguyenAm(chuoiNhap) << endl;
                cout << "So phu am trong chuoi: " << demPhuAm(chuoiNhap) << endl;
                break;
            case '5':
                cout << "Nhap chuoi khac: ";
                cin.getline(chuoiNhap, sizeof(chuoiNhap));
                break;
            case '6':
                cout << "thoat chuong trinh.Tam biet!" << endl;
                break;
            default:
                cout << "Tuy chon khong hop le .Vui long nhap lai." << endl;
        }
    } while (luaChon != '6');

    return 0;
}
