#include <iostream>

using namespace std;

// Ham mo rong mang so nguyen
int *moRongMang(const int *mang, int kichThuoc)
{
    int kichThuocMoi = 2 * kichThuoc; // Tinh kich thuoc moi
    int *mangMoRong = new int[kichThuocMoi];

    for (int i = 0; i < kichThuocMoi; i++)
    {
        if (i < kichThuoc)
        {
            mangMoRong[i] = mang[i]; // Sao chep noi dung tu mang goc
        }
        else
        {
            mangMoRong[i] = 0; // Khoi tao cac phan tu chua su dung bang 0
        }
    }

    return mangMoRong;
}

int main()
{
    int mangGoc[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mangGoc) / sizeof(mangGoc[0]);

    int *mangMoRong = moRongMang(mangGoc, kichThuoc);

    cout << "Mang Goc: ";
    for (int i = 0; i < kichThuoc; i++)
    {
        cout << mangGoc[i] << " ";
    }
    cout << endl;

    cout << "Mang Mo Rong: ";
    for (int i = 0; i < 2 * kichThuoc; i++)
    {
        cout << mangMoRong[i] << " ";
    }
    cout << endl;

    delete[] mangMoRong; // Dung quen giai phong bo nho da cap phat dong

    return 0;
}
