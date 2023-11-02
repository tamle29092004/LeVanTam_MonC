#include <iostream>
#include <algorithm> // Thư viện để sử dụng hàm sắp xếp

using namespace std;

// Hàm cấp phát động một mảng cho điểm kiểm tra
double *capPhatMangDiem(int soDiem)
{
    return new double[soDiem];
}

// Hàm sắp xếp điểm kiểm tra và tên học sinh theo thứ tự tăng dần
void sapXepDiem(double *diem, string *tenHocSinh, int soDiem)
{
    for (int i = 0; i < soDiem - 1; i++)
    {
        for (int j = 0; j < soDiem - i - 1; j++)
        {
            if (diem[j] > diem[j + 1])
            {
                // Hoán đổi điểm
                double tempScore = diem[j];
                diem[j] = diem[j + 1];
                diem[j + 1] = tempScore;
                // Hoán đổi tên học sinh
                string tempName = tenHocSinh[j];
                tenHocSinh[j] = tenHocSinh[j + 1];
                tenHocSinh[j + 1] = tempName;
            }
        }
    }
}

// Hàm tính điểm trung bình
double tinhTrungBinh(double *diem, int soDiem)
{
    double tong = 0.0;
    for (int i = 0; i < soDiem; i++)
    {
        tong += diem[i];
    }
    return (soDiem > 0) ? tong / soDiem : 0.0;
}

int main()
{
    int soDiem;

    cout << "Nhập số lượng học sinh: ";
    cin >> soDiem;

    if (soDiem < 1)
    {
        cout << "Số lượng học sinh không hợp lệ. Vui lòng nhập ít nhất 1 học sinh." << endl;
        return 1;
    }

    // Cấp phát động mảng cho điểm kiểm tra và mảng cho tên học sinh
    double *diemKiemTra = capPhatMangDiem(soDiem);
    string *tenHocSinh = new string[soDiem];

    cout << "Nhập tên học sinh và điểm kiểm tra:" << endl;
    for (int i = 0; i < soDiem; i++)
    {
        cout << "Tên học sinh " << (i + 1) << ": ";
        cin >> tenHocSinh[i];
        cout << "Điểm kiểm tra cua học sinh " << tenHocSinh[i] << ": ";
        cin >> diemKiemTra[i];
    }

    // Gọi hàm sắp xếp để sắp xếp danh sách điểm và tên học sinh
    sapXepDiem(diemKiemTra, tenHocSinh, soDiem);

    cout << "\nDanh Sách Điểm Kiểm Tra và Tên Học Sinh Đã Sắp Xếp:" << endl;
    for (int i = 0; i < soDiem; i++)
    {
        cout << tenHocSinh[i] << ": " << diemKiemTra[i] << endl;
    }

    // Gọi hàm tính điểm trung bình và hiển thị kết quả
    double trungBinh = tinhTrungBinh(diemKiemTra, soDiem);

    cout << "Điểm Trung Bình: " << trungBinh << endl;

    // Giải phóng bộ nhớ đã cấp phát động
    delete[] diemKiemTra;
    delete[] tenHocSinh;

    return 0;
}
