#include <iostream>
#include <string>
using namespace std;

struct WeatherData
{
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

int main()
{
    WeatherData monthlyData[12];
    string months[12] = {"Thang 1", "Thang 2", "Thang 3", "Thang 4", "Thang 5", "Thang 6", "Thang 7", "Thang 8", "Thang 9", "Thang 10", "Thang 11", "Thang 12"};

    // Nhap du lieu thoi tiet cho tung thang
    for (int i = 0; i < 12; i++)
    {
        cout << "Nhap du lieu thoi tiet cho " << months[i] << ":" << endl;

        cout << "Tong luong mua (inch): ";
        cin >> monthlyData[i].totalRainfall;

        cout << "Nhiet do cao nhat (do Fahrenheit): ";
        cin >> monthlyData[i].highTemperature;

        while (monthlyData[i].highTemperature < -100 || monthlyData[i].highTemperature > 140)
        {
            cout << "Nhiet do cao nhat phai nam trong khoang tu -100 den 140 do Fahrenheit. Vui long nhap lai: ";
            cin >> monthlyData[i].highTemperature;
        }

        cout << "Nhiet do thap nhat (do Fahrenheit): ";
        cin >> monthlyData[i].lowTemperature;

        while (monthlyData[i].lowTemperature < -100 || monthlyData[i].lowTemperature > 140)
        {
            cout << "Nhiet do thap nhat phai nam trong khoang tu -100 den 140 do Fahrenheit. Vui long nhap lai: ";
            cin >> monthlyData[i].lowTemperature;
        }

        monthlyData[i].averageTemperature = (monthlyData[i].highTemperature + monthlyData[i].lowTemperature) / 2;
    }

    // Tinh toan cac thong ke
    double totalAnnualRainfall = 0;
    double totalAverageTemperature = 0;
    double highestTemperature = monthlyData[0].highTemperature;
    double lowestTemperature = monthlyData[0].lowTemperature;
    int monthOfHighestTemperature = 0;
    int monthOfLowestTemperature = 0;

    for (int i = 0; i < 12; i++)
    {
        totalAnnualRainfall += monthlyData[i].totalRainfall;
        totalAverageTemperature += monthlyData[i].averageTemperature;

        if (monthlyData[i].highTemperature > highestTemperature)
        {
            highestTemperature = monthlyData[i].highTemperature;
            monthOfHighestTemperature = i;
        }

        if (monthlyData[i].lowTemperature < lowestTemperature)
        {
            lowestTemperature = monthlyData[i].lowTemperature;
            monthOfLowestTemperature = i;
        }
    }

    double averageMonthlyRainfall = totalAnnualRainfall / 12;
    double averageMonthlyTemperature = totalAverageTemperature / 12;

    // Hien thi cac thong ke
    cout << "\nThong ke thoi tiet trong nam:" << endl;
    cout << "Luong mua trung binh hang thang: " << averageMonthlyRainfall << " inch" << endl;
    cout << "Tong luong mua trong nam: " << totalAnnualRainfall << " inch" << endl;
    cout << "Nhiet do cao nhat trong nam: " << highestTemperature << " do Fahrenheit (trong " << months[monthOfHighestTemperature] << ")" << endl;
    cout << "Nhiet do thap nhat trong nam: " << lowestTemperature << " do Fahrenheit (trong " << months[monthOfLowestTemperature] << ")" << endl;
    cout << "Nhiet do trung binh hang thang: " << averageMonthlyTemperature << " do Fahrenheit" << endl;

    return 0;
}
