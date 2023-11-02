#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void hienThiTepVoiSoThuTuDong(const string& tenTep) {
    ifstream tep(tenTep);
    if (!tep.is_open()) {
        cerr << "Khong tim thay tep '" << tenTep << "'" << endl;
        return;
    }

    int soThuTuDong = 1;
    string dong;
    int soDongDaHienThi = 0;
    
    while (getline(tep, dong)) {
        if (soDongDaHienThi == 24) {
            cout << "Nhan enter de tiep tuc...";
            cin.get();
            soDongDaHienThi = 0;
        }
        cout << soThuTuDong << ":" << dong << endl;
        soThuTuDong++;
        soDongDaHienThi++;
    }

    tep.close();
}

int main() {
    string tenTep;
    cout << "Nhap ten cua tep: ";
    cin >> tenTep;
    hienThiTepVoiSoThuTuDong(tenTep);

    return 0;
}
