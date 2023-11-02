//chương trình lãi xuất và số dư khi rút và khi nạp


#include <iostream>
using namespace std;

int main()
{
    // Khai bao cac bien dau vao
    double laiSuatHangNam;
    double soDuBanDau;
    int soThang;

    // Nhap lai suat hang nam
    cout << "Nhap lai suat hang nam (dang thap phan): ";
    cin >> laiSuatHangNam;

    // Nhap so du ban dau
    cout << "Nhap so du ban dau: ";
    cin >> soDuBanDau;

    // Nhap so thang da troi qua
    cout << "Nhap so thang da troi qua: ";
    cin >> soThang;

    // Khoi tao cac bien tinh toan
    double soDu = soDuBanDau;
    double tongTienGui = 0.0;
    double tongTienRut = 0.0;
    double tongLaiKiTiet = 0.0;

    // Vong lap cho moi thang
    for (int thang = 1; thang <= soThang; ++thang)
    {
        double tienGui, tienRut;

        // Nhap so tien gui vao tai khoan cho thang
        cout << "Nhap so tien gui vao tai khoan cho thang " << thang << " (gia tri am de bo qua): ";
        cin >> tienGui;

        if (tienGui >= 0)
        {
            tongTienGui += tienGui;
            soDu += tienGui;
        }

        // Nhap so tien rut khoi tai khoan cho thang
        cout << "Nhap so tien rut khoi tai khoan cho thang " << thang << " (gia tri am de bo qua): ";
        cin >> tienRut;

        if (tienRut >= 0)
        {
            tongTienRut += tienRut;
            soDu -= tienRut;
        }

        // Tinh lai hang thang
        double laiHangThang = (laiSuatHangNam / 12.0) * soDu;
        soDu += laiHangThang;
        tongLaiKiTiet += laiHangThang;
    }

    // Hien thi ket qua
    cout << "So du cuoi ky: " << soDu << endl;
    cout << "Tong so tien gui: " << tongTienGui << endl;
    cout << "Tong so tien rut: " << tongTienRut << endl;
    cout << "Tong tien lai kiem duoc: " << tongLaiKiTiet << endl;

    return 0;
}

