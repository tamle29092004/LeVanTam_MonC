#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int demTu(const char* str, double &trungBinh) {
    int soTu = 0;
    int tongKichThuoc = 0;
    bool dangTrongTu = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (!dangTrongTu) {
                dangTrongTu = true;
                soTu++;
            }
            tongKichThuoc++;
        } else {
            dangTrongTu = false;
        }
    }

    trungBinh = static_cast<double>(tongKichThuoc) / soTu;

    return soTu;
}

int demTu(const string& str, double &trungBinh) {
    return demTu(str.c_str(), trungBinh);
}

int main() {
    char chuoiNhap[100]; // Giả định độ dài tối đa của chuỗi là 100 ký tự
    cout << "Nhap mot chuoi: ";
    cin.getline(chuoiNhap, sizeof(chuoiNhap)); // Đọc một chuỗi từ người dùng

    double trungBinhKichThuoc;
    int soTu = demTu(chuoiNhap, trungBinhKichThuoc);
    
    cout << "So tu trong chuoi: " << soTu << endl;
    cout << "trung binh so ky tu moi tu: " << trungBinhKichThuoc << endl;

    return 0;
}
