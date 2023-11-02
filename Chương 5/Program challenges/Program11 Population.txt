//chương trình tính quần thể 
#include <iostream>

using namespace std;

int main() {
    int initial_population, days_to_multiply;
    double daily_growth_rate;

    // Nhập thông tin từ người dùng và thực hiện xác thực đầu vào
    cout << "Nhap so luong sinh vat ban dau (khong nho hon 2): ";
    cin >> initial_population;

    while (initial_population < 2) {
        cout << "Vui long nhap so luong sinh vat ban dau lon hon hoac bang 2: ";
        cin >> initial_population;
    }

    cout << "Nhap ty le tang dan so hang ngay (pham tram): ";
    cin >> daily_growth_rate;

    while (daily_growth_rate <= 0) {
        cout << "Vui long nhap ty le tang dan so hang ngay lon hon 0: ";
        cin >> daily_growth_rate;
    }

    cout << "Nhap so ngay sinh vat se nhan len (khong nho hon 1): ";
    cin >> days_to_multiply;

    while (days_to_multiply < 1) {
        cout << "Vui long nhap so ngay lon hon hoac bang 1: ";
        cin >> days_to_multiply;
    }

    // Chuyển tỷ lệ tăng dân số thành dạng thập phân
    daily_growth_rate /= 100.0;

    // In tiêu đề cho báo cáo
    cout << "\nBao cao dan so:" << endl;
    cout << "Ngay\tKich thuoc quan the" << endl;

    // Tinh kich thuoc dan so va in ra moi ngay
    double population = initial_population;
    for (int day = 1; day <= days_to_multiply; ++day, population *= (1 + daily_growth_rate)) {
        cout << day << "\t" << int(population) << endl;
    }

    cout << "\nKet thuc chuong trinh." << endl;

    return 0;
}
