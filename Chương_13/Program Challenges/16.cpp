#include <iostream>
#include <string>
using namespace std;

class TemperatureChecker
{
private:
    double temperature;

public:
    TemperatureChecker(double temp)
    {
        temperature = temp;
    }

    // Accessor and mutator functions
    double getTemperature() const
    {
        return temperature;
    }

    void setTemperature(double temp)
    {
        temperature = temp;
    }

    // Check if ethyl alcohol will freeze at the given temperature
    bool isEthylFreezing() const
    {
        return temperature <= -173;
    }

    // Check if ethyl alcohol will boil at the given temperature
    bool isEthylBoiling() const
    {
        return temperature >= 172;
    }

    // Check if oxygen will freeze at the given temperature
    bool isOxygenFreezing() const
    {
        return temperature <= -362;
    }

    // Check if oxygen will boil at the given temperature
    bool isOxygenBoiling() const
    {
        return temperature >= -306;
    }

    // Check if water will freeze at the given temperature
    bool isWaterFreezing() const
    {
        return temperature <= 32;
    }

    // Check if water will boil at the given temperature
    bool isWaterBoiling() const
    {
        return temperature >= 212;
    }
};

int main()
{
    double temperature;

    cout << "Enter a temperature: ";
    cin >> temperature;

    TemperatureChecker checker(temperature);

    cout << "Substances that will freeze: ";
    if (checker.isEthylFreezing())
    {
        cout << "Ethyl Alcohol ";
    }
    if (checker.isOxygenFreezing())
    {
        cout << "Oxygen ";
    }
    if (checker.isWaterFreezing())
    {
        cout << "Water ";
    }
    cout << endl;

    cout << "Substances that will boil: ";
    if (checker.isEthylBoiling())
    {
        cout << "Ethyl Alcohol ";
    }
    if (checker.isOxygenBoiling())
    {
        cout << "Oxygen ";
    }
    if (checker.isWaterBoiling())
    {
        cout << "Water ";
    }
    cout << endl;

    return 0;
}
