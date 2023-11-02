#include <iostream>
#include <algorithm> // de sap xep

using namespace std;

// Ham cap phat dong mot mang cho diem kiem tra
double *capPhatMangDiem(int soDiem)
{
    return new double[soDiem];
}

// Ham sap xep diem kiem tra theo thu tu tang dan
void sapXepDiem(double *diem, int soDiem)
{
    sort(diem, diem + soDiem);
}

// Ham tinh diem trung binh, loai bo diem thap nhat
double tinhTrungBinhLoaiBoThapNhat(double *diem, int soDiem)
{
    double tong = 0.0;
    for (int i = 1; i < soDiem; i++)
    { // Bat dau tu chi muc 1 de loai bo diem thap nhat
        tong += diem[i];
    }
    return (soDiem > 1) ? (tong / (soDiem - 1)) : 0.0;
}

int main()
{
    int soDiem;

    cout << "Nhap so luong diem kiem tra: ";
    cin >> soDiem;

    if (soDiem < 2)
    {
        cout << "So luong diem kiem tra khong hop le. Vui long nhap it nhat 2 diem." << endl;
        return 1;
    }

    double *diemKiemTra = capPhatMangDiem(soDiem);

    cout << "Nhap diem kiem tra (chi nhap so khong am):" << endl;
    for (int i = 0; i < soDiem; i++)
    {
        do
        {
            cin >> diemKiemTra[i];
            if (diemKiemTra[i] < 0)
            {
                cout << "Diem khong hop le. Vui long nhap so khong am: ";
            }
        } while (diemKiemTra[i] < 0);
    }

    sapXepDiem(diemKiemTra, soDiem);
    double trungBinh = tinhTrungBinhLoaiBoThapNhat(diemKiemTra, soDiem);

    cout << "\nDanh Sach Diem Kiem Tra Da Sap Xep (loai bo diem thap nhat):" << endl;
    for (int i = 1; i < soDiem; i++)
    {
        cout << diemKiemTra[i] << " ";
    }

    cout << "\nDiem Trung Binh (loai bo diem thap nhat): " << trungBinh << endl;

    delete[] diemKiemTra; // Giai phong mang dong

    return 0;
}