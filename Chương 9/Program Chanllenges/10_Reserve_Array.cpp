#include <iostream>

using namespace std;

// Ham dao nguoc mot mang so nguyen va tra ve con tro toi mang dao nguoc
int *daoNguocMang(const int *mang, int kichThuoc)
{
    int *mangDaoNguoc = new int[kichThuoc];

    for (int i = 0; i < kichThuoc; i++)
    {
        mangDaoNguoc[i] = mang[kichThuoc - 1 - i]; // Dao nguoc cac phan tu
    }

    return mangDaoNguoc;
}

int main()
{
    int mangGoc[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mangGoc) / sizeof(mangGoc[0]);

    int *mangDaoNguoc = daoNguocMang(mangGoc, kichThuoc); // Goi ham dao nguoc

    cout << "Mang Goc: ";
    for (int i = 0; i < kichThuoc; i++)
    {
        cout << mangGoc[i] << " "; // In mang goc
    }
    cout << endl;

    cout << "Mang Dao Nguoc: ";
    for (int i = 0; i < kichThuoc; i++)
    {
        cout << mangDaoNguoc[i] << " "; // In mang dao nguoc
    }
    cout << endl;

    delete[] mangDaoNguoc; // Giai phong bo nho da cap phat dong

    return 0;
}
