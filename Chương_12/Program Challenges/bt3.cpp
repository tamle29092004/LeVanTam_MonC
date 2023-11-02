#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void docVaHienThiCauChuyenCuoi(const string& tenTepCauChuyen) {
    ifstream tepCauChuyen(tenTepCauChuyen);
    if (!tepCauChuyen.is_open()) {
        cerr << "Lỗi: Không thể mở tệp câu chuyện '" << tenTepCauChuyen << "'" << endl;
        return;
    }

    string dong;
    while (getline(tepCauChuyen, dong)) {
        cout << dong << endl;
    }

    tepCauChuyen.close();
}

void hienThiPunchline(const string& tenTepPunchline) {
    ifstream tepPunchline(tenTepPunchline);
    if (!tepPunchline.is_open()) {
        cerr << "Loi:Khong the mơ tep Punchline '" << tenTepPunchline << "'" << endl;
        return;
    }

    string punchline;
    string dong;
    while (getline(tepPunchline, dong)) {
        punchline = dong; // Lưu trữ dòng cuối cùng
    }

    cout << "Punchline: " << punchline << endl;
    
    tepPunchline.close();
}

int main() {
    const string tenTepCauChuyen = "joke.txt";
    const string tenTepPunchline = "punchline.txt";

    cout << "Câu chuyện cười:" << endl;
    docVaHienThiCauChuyenCuoi(tenTepCauChuyen);

    cout << "\n";
    
    cout << "Punchline:" << endl;
    hienThiPunchline(tenTepPunchline);

    return 0;
}
