//chương trình nhập điểm và sắp xếp chúng 
#include <iostream>
#include <algorithm> // for sorting

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

// Ham tinh diem trung binh
double tinhTrungBinh(double *diem, int soDiem)
{
    double tong = 0.0;
    for (int i = 0; i < soDiem; i++)
    {
        tong += diem[i];
    }
    return soDiem > 0 ? tong / soDiem : 0.0;
}

int main()
{
    int soDiem;

    cout << "Nhap so luong diem kiem tra: ";
    cin >> soDiem;

    if (soDiem < 0)
    {
        cout << "So luong diem kiem tra khong hop le. Xin vui long nhap so khong am." << endl;
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
                cout << "Diem khong hop le. Xin vui long nhap so khong am: ";
            }
        } while (diemKiemTra[i] < 0);
    }

    sapXepDiem(diemKiemTra, soDiem);
    double trungBinh = tinhTrungBinh(diemKiemTra, soDiem);

    cout << "\nDiem Kiem Tra Da Sap Xep:" << endl;
    for (int i = 0; i < soDiem; i++)
    {
        cout << diemKiemTra[i] << " ";
    }

    cout << "\nDiem Trung Binh: " << trungBinh << endl;

    delete[] diemKiemTra; // Giai phong bo nho da cap phat dong

    return 0;
}
