#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int demTu(const char* str) {
    int soTu = 0;
    bool dangTrongTu = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (!dangTrongTu) {
                dangTrongTu = true;
                soTu++;
            }
        } else {
            dangTrongTu = false;
        }
    }

    return soTu;
}

int demTu(const string& str) {
    return demTu(str.c_str());
}

int main() {
    char chuoiNhap[100]; // Giả định độ dài tối đa của chuỗi là 100 ký tự
    cout << "Nhap mot chuoi: ";
    cin.getline(chuoiNhap, sizeof(chuoiNhap)); // Đọc một chuỗi từ người dùng

    int soTu = demTu(chuoiNhap);
    cout << "So tu trong chuoi: " << soTu << endl;

    return 0;
}
