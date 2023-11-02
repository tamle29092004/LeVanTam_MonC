#include <iostream>
using namespace std;

class Payroll
{
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    Payroll()
    {
        hourlyPayRate = 0.0;
        hoursWorked = 0.0;
        totalPay = 0.0;
    }

    void setHourlyPayRate(double rate)
    {
        hourlyPayRate = rate;
    }

    void setHoursWorked(double hours)
    {
        if (hours >= 0 && hours <= 60)
        {
            hoursWorked = hours;
        }
        else
        {
            cout << "Invalid hours worked. Must be between 0 and 60." << endl;
        }
    }

    double calculateTotalPay()
    {
        totalPay = hourlyPayRate * hoursWorked;
        return totalPay;
    }

    double getTotalPay() const
    {
        return totalPay;
    }
};

int main()
{
    const int numEmployees = 7;
    Payroll employees[numEmployees];

    for (int i = 0; i < numEmployees; i++)
    {
        double rate, hours;
        cout << "Enter hourly pay rate for Employee " << i + 1 << ": $";
        cin >> rate;
        employees[i].setHourlyPayRate(rate);

        cout << "Enter hours worked for Employee " << i + 1 << ": ";
        cin >> hours;
        employees[i].setHoursWorked(hours);

        cout << "Gross Pay for Employee " << i + 1 << ": $" << employees[i].calculateTotalPay() << endl;
    }

    return 0;
}
