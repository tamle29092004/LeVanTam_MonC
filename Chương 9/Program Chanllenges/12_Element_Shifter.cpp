#include <iostream>

using namespace std;

// Ham dich chuyen cac phan tu cua mang so nguyen
int *dichChuyenPhanTu(const int *mang, int kichThuoc)
{
    int kichThuocMoi = kichThuoc + 1; // Tinh kich thuoc moi
    int *mangDichChuyen = new int[kichThuocMoi];

    mangDichChuyen[0] = 0; // Dat phan tu dau tien cua mang moi bang 0

    for (int i = 0; i < kichThuoc; i++)
    {
        mangDichChuyen[i + 1] = mang[i]; // Dich chuyen cac phan tu
    }

    return mangDichChuyen;
}

int main()
{
    int mangGoc[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mangGoc) / sizeof(mangGoc[0]);

    int *mangDichChuyen = dichChuyenPhanTu(mangGoc, kichThuoc);

    // In ra mang goc
    cout << "Mang Goc: ";
    for (int i = 0; i < kichThuoc; i++)
    {
        cout << mangGoc[i] << " ";
    }
    cout << endl;

    // In ra mang da dich chuyen
    cout << "Mang Da Dich Chuyen: ";
    for (int i = 0; i < kichThuoc + 1; i++)
    {
        cout << mangDichChuyen[i] << " ";
    }
    cout << endl;

    delete[] mangDichChuyen; // Dung quen giai phong bo nho da cap phat dong

    return 0;
}
