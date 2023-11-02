#include <iostream>
#include <string>
using namespace std;

enum Month
{
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

struct WeatherData
{
    Month month;
    double totalRainfall;
    int highTemperature;
    int lowTemperature;
    double averageTemperature;
};

string monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main()
{
    WeatherData monthlyData[12];

    for (int i = JANUARY; i <= DECEMBER; i++)
    {
        monthlyData[i].month = static_cast<Month>(i);
        cout << "Enter data for " << monthNames[i] << ":\n";
        cout << "Total Rainfall: ";
        cin >> monthlyData[i].totalRainfall;

        cout << "High Temperature (in Fahrenheit): ";
        cin >> monthlyData[i].highTemperature;

        cout << "Low Temperature (in Fahrenheit): ";
        cin >> monthlyData[i].lowTemperature;

        // Calculate average temperature
        monthlyData[i].averageTemperature = (monthlyData[i].highTemperature + monthlyData[i].lowTemperature) / 2;
    }

    // Calculate average monthly rainfall and total yearly rainfall
    double totalYearlyRainfall = 0.0;
    for (int i = JANUARY; i <= DECEMBER; i++)
    {
        totalYearlyRainfall += monthlyData[i].totalRainfall;
    }
    double averageMonthlyRainfall = totalYearlyRainfall / 12;

    // Find highest and lowest temperatures
    int highestTempMonth = JANUARY;
    int lowestTempMonth = JANUARY;
    for (int i = FEBRUARY; i <= DECEMBER; i++)
    {
        if (monthlyData[i].highTemperature > monthlyData[highestTempMonth].highTemperature)
        {
            highestTempMonth = i;
        }
        if (monthlyData[i].lowTemperature < monthlyData[lowestTempMonth].lowTemperature)
        {
            lowestTempMonth = i;
        }
    }

    // Display results
    cout << "\nYearly Weather Statistics:\n";
    cout << "Average Monthly Rainfall: " << averageMonthlyRainfall << " inches\n";
    cout << "Total Yearly Rainfall: " << totalYearlyRainfall << " inches\n";
    cout << "Highest Temperature: " << monthNames[highestTempMonth] << " (" << monthlyData[highestTempMonth].highTemperature << "F)\n";
    cout << "Lowest Temperature: " << monthNames[lowestTempMonth] << " (" << monthlyData[lowestTempMonth].lowTemperature << "F)\n";

    return 0;
}
