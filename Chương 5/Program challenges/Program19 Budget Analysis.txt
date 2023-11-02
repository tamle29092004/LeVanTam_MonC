//chương trình chi phí dự trù 
#include <iostream>
using namespace std;

int main()
{
    double nganSach; // Số tiền dự trù trong tháng
    cout << "Nhap so tien da du tru trong mot thang: $";
    cin >> nganSach;

    double chiPhi = 0; // Tổng số tiền chi tiêu

    // Nhập các chi phí và tính tổng số tiền chi tiêu
    char tiepTucNhap;
    do
    {
        double chiPhiCon;
        cout << "Nhap chi phi cua ban trong thang: $";
        cin >> chiPhiCon;

        chiPhi += chiPhiCon;

        cout << "Ban co muon nhap them chi phi? (c/k): ";
        cin >> tiepTucNhap;
    } while (tiepTucNhap == 'c' || tiepTucNhap == 'C');

    // Tính số tiền vuot qua hoac duoi ngan sach
    double chenhLech = nganSach - chiPhi;

    // Hien thi ket qua
    if (chenhLech == 0)
    {
        cout << "Ban da tuan thu ngan sach chinh xac." << endl;
    }
    else if (chenhLech > 0)
    {
        cout << "Ban con du $" << chenhLech << " so voi ngan sach." << endl;
    }
    else
    {
        cout << "Ban da vuot qua ngan sach $" << -chenhLech << "." << endl;
    }

    return 0;
}
