#include <iostream>

// Ham tinh trung vi cua mot mang
double tinhTrungVi(const int *arr, int kichThuoc)
{
    if (kichThuoc <= 0)
    {
        return 0.0; // Mang rong, khong co trung vi
    }

    if (kichThuoc % 2 == 1)
    {
        return static_cast<double>(arr[kichThuoc / 2]);
    }
    else
    {
        int giua1 = arr[kichThuoc / 2 - 1];
        int giua2 = arr[kichThuoc / 2];
        return (static_cast<double>(giua1) + static_cast<double>(giua2)) / 2.0;
    }
}

int main()
{
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    double trungVi = tinhTrungVi(mang, kichThuoc);

    std::cout << "Trung vi cua mang la: " << trungVi << std::endl;

    return 0;
}
