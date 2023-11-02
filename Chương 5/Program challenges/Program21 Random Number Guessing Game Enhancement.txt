#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    unsigned int seed;
    cout << "Nhap mot so nguyen duong lam hat giong: ";
    cin >> seed;

    srand(seed);

    int soNgauNhien = rand() % 100 + 1; // Tao so ngau nhien tu 1 den 100
    int duDoan;
    int soLanDuDoan = 0; // Khoi tao bien dem so lan du doan

    cout << "Chao mung den voi tro choi doan so ngau nhien!" << endl;

    do {
        cout << "Doan so (tu 1 den 100): ";
        cin >> duDoan;
        soLanDuDoan++; // Tang bien dem so lan du doan

        if (duDoan < 1 || duDoan > 100) {
            cout << "Vui long nhap so tu 1 den 100." << endl;
        } else if (duDoan < soNgauNhien) {
            cout << "Thap qua! Hay thu lai." << endl;
        } else if (duDoan > soNgauNhien) {
            cout << "Cao qua! Hay thu lai." << endl;
        }
    } while (duDoan != soNgauNhien);

    cout << "Chuc mung! Ban da doan dung so (" << soNgauNhien << ") sau " << soLanDuDoan << " lan du doan." << endl;

    return 0;
}
