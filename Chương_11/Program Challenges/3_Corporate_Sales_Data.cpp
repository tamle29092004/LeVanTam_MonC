#include <iostream>
#include <string>
using namespace std;

struct DivisionData {
    string divisionName;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

int main() {
    DivisionData east, west, north, south;

    // Nhập thông tin cho từng phân khu
    cout << "Nhap thong tin phan khu Dong:" << endl;
    east.divisionName = "Dong";
    cout << "Doanh so quy 1: $";
    cin >> east.firstQuarterSales;
    cout << "Doanh so quy 2: $";
    cin >> east.secondQuarterSales;
    cout << "Doanh so quy 3: $";
    cin >> east.thirdQuarterSales;
    cout << "Doanh so quy 4: $";
    cin >> east.fourthQuarterSales;

    cout << "Nhap thong tin phan khu Tay:" << endl;
    west.divisionName = "Tay";
    cout << "Doanh so quy 1: $";
    cin >> west.firstQuarterSales;
    cout << "Doanh so quy 2: $";
    cin >> west.secondQuarterSales;
    cout << "Doanh so quy 3: $";
    cin >> west.thirdQuarterSales;
    cout << "Doanh so quy 4: $";
    cin >> west.fourthQuarterSales;

    cout << "Nhap thong tin phan khu Bac:" << endl;
    north.divisionName = "Bac";
    cout << "Doanh so quy 1: $";
    cin >> north.firstQuarterSales;
    cout << "Doanh so quy 2: $";
    cin >> north.secondQuarterSales;
    cout << "Doanh so quy 3: $";
    cin >> north.thirdQuarterSales;
    cout << "Doanh so quy 4: $";
    cin >> north.fourthQuarterSales;

    cout << "Nhap thong tin phan khu Nam:" << endl;
    south.divisionName = "Nam";
    cout << "Doanh so quy 1: $";
    cin >> south.firstQuarterSales;
    cout << "Doanh so quy 2: $";
    cin >> south.secondQuarterSales;
    cout << "Doanh so quy 3: $";
    cin >> south.thirdQuarterSales;
    cout << "Doanh so quy 4: $";
    cin >> south.fourthQuarterSales;

    // Tính tổng doanh số hàng năm và doanh số trung bình hàng quý cho mỗi phân khu
    east.totalAnnualSales = east.firstQuarterSales + east.secondQuarterSales + east.thirdQuarterSales + east.fourthQuarterSales;
    east.averageQuarterlySales = east.totalAnnualSales / 4;

    west.totalAnnualSales = west.firstQuarterSales + west.secondQuarterSales + west.thirdQuarterSales + west.fourthQuarterSales;
    west.averageQuarterlySales = west.totalAnnualSales / 4;

    north.totalAnnualSales = north.firstQuarterSales + north.secondQuarterSales + north.thirdQuarterSales + north.fourthQuarterSales;
    north.averageQuarterlySales = north.totalAnnualSales / 4;

    south.totalAnnualSales = south.firstQuarterSales + south.secondQuarterSales + south.thirdQuarterSales + south.fourthQuarterSales;
    south.averageQuarterlySales = south.totalAnnualSales / 4;

    // Hiển thị thông tin
    cout << "\nThong tin doanh so hang nam va doanh so trung binh hang quy cho moi phan khu:" << endl;
    cout << "Phan khu " << east.divisionName << " - Doanh so hang nam: $" << east.totalAnnualSales << " - Doanh so trung binh hang quy: $" << east.averageQuarterlySales << endl;
    cout << "Phan khu " << west.divisionName << " - Doanh so hang nam: $" << west.totalAnnualSales << " - Doanh so trung binh hang quy: $" << west.averageQuarterlySales << endl;
    cout << "Phan khu " << north.divisionName << " - Doanh so hang nam: $" << north.totalAnnualSales << " - Doanh so trung binh hang quy: $" << north.averageQuarterlySales << endl;
    cout << "Phan khu " << south.divisionName << " - Doanh so hang nam: $" << south.totalAnnualSales << " - Doanh so trung binh hang quy: $" << south.averageQuarterlySales << endl;

    return 0;
}
