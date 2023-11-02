#include <iostream>
#include <fstream> // Thêm thư viện này để làm việc với tệp tin
using namespace std;

int main()
{
    double laiSuatHangNam;
    double soDuBanDau;
    int soThang;

    // Nhập lãi suất hàng năm
    cout << "Nhap lai suat hang nam (dang thap phan): ";
    cin >> laiSuatHangNam;

    // Nhập số dư ban đầu
    cout << "Nhap so du ban dau: ";
    cin >> soDuBanDau;

    // Nhập số tháng đã trôi qua
    cout << "Nhap so thang da troi qua: ";
    cin >> soThang;

    double soDu = soDuBanDau;
    double tongTienGui = 0.0;
    double tongTienRut = 0.0;
    double tongLaiKiTiet = 0.0;

    // Thêm đoạn này để mở tệp cho việc ghi
    ofstream outputFile("savings_report.txt");

    for (int thang = 1; thang <= soThang; ++thang)
    {
        double tienGui, tienRut;

        // Nhập số tiền gửi vào tài khoản cho tháng
        cout << "Nhap so tien gui vao tai khoan cho thang " << thang << " (gia tri am de bo qua): ";
        cin >> tienGui;

        if (tienGui >= 0)
        {
            tongTienGui += tienGui;
            soDu += tienGui;
        }

        // Nhập số tiền rút khỏi tài khoản cho tháng
        cout << "Nhap so tien rut khoi tai khoan cho thang " << thang << " (gia tri am de bo qua): ";
        cin >> tienRut;

        if (tienRut >= 0)
        {
            tongTienRut += tienRut;
            soDu -= tienRut;
        }

        // Tính lãi hàng tháng
        double laiHangThang = (laiSuatHangNam / 12.0) * soDu;
        soDu += laiHangThang;
        tongLaiKiTiet += laiHangThang;
    }

    // Ghi kết quả vào tệp "savings_report.txt"
    outputFile << "So du cuoi ky: " << soDu << endl;
    outputFile << "Tong so tien gui: " << tongTienGui << endl;
    outputFile << "Tong so tien rut: " << tongTienRut << endl;
    outputFile << "Tong tien lai kiem duoc: " << tongLaiKiTiet << endl;

    // Đóng tệp sau khi ghi
    outputFile.close();

    return 0;
}
