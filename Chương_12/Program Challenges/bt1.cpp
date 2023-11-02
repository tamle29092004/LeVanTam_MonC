#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string ten_tep;
    cout << "Nhap ten cua tep: ";
    cin >> ten_tep;

    ifstream tep(ten_tep);
    if (!tep.is_open()) {
        cerr << "Khong tim thay '" << ten_tep << "'." << endl;
        return 1;
    }

    string dong;
    int dem_dong = 0;
    while (getline(tep, dong) && dem_dong < 10) {
        cout << dong << endl;
        dem_dong++;
    }

    if (dem_dong >= 10) {
        cout << "Da hien thi 10 dong dau tien cua tep." << endl;
    } else {
        cout << "Toan bo tep da duoc hien thi." << endl;
    }

    tep.close();
    return 0;
}
