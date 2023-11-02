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
        cerr << "khong tim thay tep'" << ten_tep << "'." << endl;
        return 1;
    }

    const int so_dong_moi_trang = 24;
    string dong;
    int dem_dong = 0;
    
    while (getline(tep, dong)) {
        if (dem_dong == so_dong_moi_trang) {
            cout << "Nhan enter de tiep tuc ...";
            cin.get();
            dem_dong = 0;
        }
        cout << dong << endl;
        dem_dong++;
    }

    tep.close();
    return 0;
}
