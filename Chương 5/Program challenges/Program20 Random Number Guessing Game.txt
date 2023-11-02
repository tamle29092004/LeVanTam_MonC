//chương trình dự đoán sổ số 
#include <iostream>
#include <cstdlib> // Thư viện cho số ngẫu nhiên
#include <ctime>   // Thư viện cho thời gian
using namespace std;

int main()
{
    // Khởi tạo số ngẫu nhiên sử dụng thời gian hiện tại làm hạt giống
    srand(time(0));
    int soNgauNhien = rand() % 100 + 1; // Số ngẫu nhiên từ 1 đến 100

    int duDoan;
    int soLanDuDoan = 0;

    cout << "Chao mung den tro choi doan so ngau nhien!" << endl;

    do
    {
        cout << "Moi ban doan so (tu 1 den 100): ";
        cin >> duDoan;

        if (duDoan < 1 || duDoan > 100)
        {
            cout << "Vui long nhap so trong khoang tu 1 den 100." << endl;
        }
        else if (duDoan < soNgauNhien)
        {
            cout << "So cua ban qua thap, hay thu lai." << endl;
        }
        else if (duDoan > soNgauNhien)
        {
            cout << "So cua ban qua cao, hay thu lai." << endl;
        }

        soLanDuDoan++;
    } while (duDoan != soNgauNhien);

    cout << "Chuc mung! Ban da doan dung so " << soNgauNhien << " sau " << soLanDuDoan << " lan du doan." << endl;

    return 0;
}
