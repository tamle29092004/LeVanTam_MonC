#include <iostream>
#include <cstring>
#include <cctype> // cho isalpha và toupper

using namespace std;

void vietHoaChuCaiDauMoiCau(char* chuoi) {
    bool cauMoi = true;

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (cauMoi && isalpha(chuoi[i])) {
            chuoi[i] = toupper(chuoi[i]);
            cauMoi = false;
        }

        if (chuoi[i] == '.' || chuoi[i] == '!' || chuoi[i] == '?') {
            cauMoi = true;
        }
    }
}

int main() {
    char chuoiNhap[1000]; // Giả định độ dài tối đa của chuỗi là 1000 ký tự
    cout << "Nhap mot chuoi: ";
    cin.getline(chuoiNhap, sizeof(chuoiNhap)); // Đọc một chuỗi từ người dùng

    vietHoaChuCaiDauMoiCau(chuoiNhap);
    
    cout << "Chuoi sau khi sua: " << chuoiNhap << endl;

    return 0;
}
