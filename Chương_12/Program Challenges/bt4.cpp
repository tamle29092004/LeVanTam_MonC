#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void hienThiDuoiCuaTep(const string& tenTep) {
    ifstream tep(tenTep);
    if (!tep.is_open()) {
        cerr << "Tep '" << tenTep << "' Khong ton tai." << endl;
        return;
    }

    vector<string> cacDong;
    string dong;

    while (getline(tep, dong)) {
        cacDong.push_back(dong);
        if (cacDong.size() > 10) {
            cacDong.erase(cacDong.begin());
        }
    }

    tep.close();

    if (cacDong.size() <= 10) {
        cout << "Toan bo tep da dươc hien thi :" << endl;
        for (const string& dong : cacDong) {
            cout << dong << endl;
        }
    } else {
        cout << "10 dong cuoi cung cua tep:" << endl;
        for (size_t i = 0; i < cacDong.size(); i++) {
            cout << cacDong[i] << endl;
        }
    }
}

int main() {
    string tenTep;
    cout << "Nhap ten cua tep: ";
    cin >> tenTep;
    hienThiDuoiCuaTep(tenTep);

    return 0;
}
