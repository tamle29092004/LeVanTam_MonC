#include <iostream>
#include <algorithm>

using namespace std;

// Hàm tính mode (giá trị xuất hiện nhiều nhất)
int tinhMode(const int *mang, int kichThuoc)
{
    int mode = mang[0];
    int maxCount = 0;

    // Duyệt qua mảng để tìm mode
    for (int i = 0; i < kichThuoc; i++)
    {
        int count = 0;

        // Duyệt lại mảng để đếm số lần xuất hiện của từng giá trị
        for (int j = 0; j < kichThuoc; j++)
        {
            if (mang[j] == mang[i])
            {
                count++;
            }
        }

        // Cập nhật mode nếu có giá trị nào xuất hiện nhiều hơn
        if (count > maxCount)
        {
            maxCount = count;
            mode = mang[i];
        }
    }

    return mode;
}

// Hàm tính trung vị (median)
double tinhTrungVi(int *mang, int kichThuoc)
{
    // Sắp xếp mảng để tính trung vị
    sort(mang, mang + kichThuoc);
    if (kichThuoc % 2 == 0)
    {
        return (mang[kichThuoc / 2 - 1] + mang[kichThuoc / 2]) / 2.0;
    }
    else
    {
        return mang[kichThuoc / 2];
    }
}

int main()
{
    int soSinhVien;
    do
    {
        cout << "Nhap so luong sinh vien tham gia khao sat: ";
        cin >> soSinhVien;
    } while (soSinhVien <= 0);

    int *soPhimXem = new int[soSinhVien];

    // Nhập số lượng phim mà mỗi sinh viên đã xem
    for (int i = 0; i < soSinhVien; i++)
    {
        do
        {
            cout << "Nhap so luong phim ma sinh vien " << i + 1 << " da xem trong thang: ";
            cin >> soPhimXem[i];
        } while (soPhimXem[i] < 0);
    }

    // Tính mode và trung vị
    int mode = tinhMode(soPhimXem, soSinhVien);
    double median = tinhTrungVi(soPhimXem, soSinhVien);

    // Tính trung bình
    double tong = 0;
    for (int i = 0; i < soSinhVien; i++)
    {
        tong += soPhimXem[i];
    }
    double trungBinh = tong / soSinhVien;

    // In kết quả
    cout << "Trung binh: " << trungBinh << endl;
    cout << "Trung vi: " << median << endl;
    cout << "Mode: " << mode << endl;

    // Giải phóng bộ nhớ
    delete[] soPhimXem;

    return 0;
}
