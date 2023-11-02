#include <iostream>

using namespace std; // Su dung khong gian ten std

// Ham tim mode cua mang
int timMode(const int *arr, int kichThuoc)
{
    if (kichThuoc <= 0)
    {
        return -1; // Mang rong, khong co mode
    }

    int mode = -1;
    int maxSoLanXuatHien = 0;

    for (int i = 0; i < kichThuoc; i++)
    {
        int soLanXuatHien = 0;
        for (int j = 0; j < kichThuoc; j++)
        {
            if (arr[i] == arr[j])
            {
                soLanXuatHien++;
            }
        }

        if (soLanXuatHien > maxSoLanXuatHien)
        {
            maxSoLanXuatHien = soLanXuatHien;
            mode = arr[i];
        }
    }

    if (maxSoLanXuatHien <= 1)
    {
        return -1; // Khong tim thay mode
    }

    return mode;
}

int main()
{
    int mang[] = {1, 2, 3, 4, 2, 3, 4, 2, 5, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    int mode = timMode(mang, kichThuoc);

    if (mode == -1)
    {
        cout << "Mang khong co mode." << endl;
    }
    else
    {
        cout << "Mode cua mang la: " << mode << endl;
    }

    return 0;
}
