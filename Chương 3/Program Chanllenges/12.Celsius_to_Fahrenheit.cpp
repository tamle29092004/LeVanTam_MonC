// chuong trình chuyển đổi độ c sang f
#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    // Input temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}
