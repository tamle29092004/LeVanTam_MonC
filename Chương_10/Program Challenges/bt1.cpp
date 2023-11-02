#include <iostream>
#include <string>

using namespace std;

int stringLength(const string &str) {
    return str.length();
}

int main() {
    string inputString;
    cout << "Nhap mot chuoi: "; // "Nhập một chuỗi: "
    getline(cin, inputString); // Đọc một chuỗi từ người dùng

    int length = stringLength(inputString);
    cout << "Do dai chuoi: " << length << endl; // "Độ dài chuỗi: "

    return 0;
}
