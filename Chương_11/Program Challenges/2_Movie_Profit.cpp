#include <iostream>
#include <string>
using namespace std;

struct ThongTinPhim
{
    string tieuDe;
    string daoDien;
    int namPhatHanh;
    int thoiLuong;
    double chiPhiSanXuat;
    double doanhThuNamDau;
};

void hienThongTinPhim(const ThongTinPhim &phim)
{
    cout << "Tieu de: " << phim.tieuDe << endl;
    cout << "Dao dien: " << phim.daoDien << endl;
    cout << "Nam phat hanh: " << phim.namPhatHanh << endl;
    cout << "Thoi luong (phut): " << phim.thoiLuong << endl;
    cout << "Loi nhuan/Lo nam dau: $" << (phim.doanhThuNamDau - phim.chiPhiSanXuat) << endl;
}

int main()
{
    ThongTinPhim phim1 = {"Phim 1", "Dao dien 1", 2000, 120, 5000000.0, 8000000.0};
    ThongTinPhim phim2 = {"Phim 2", "Dao dien 2", 2010, 150, 7000000.0, 6000000.0};

    cout << "Thong tin Phim 1:" << endl;
    hienThongTinPhim(phim1);

    cout << "\nThong tin Phim 2:" << endl;
    hienThongTinPhim(phim2);

    return 0;
}
