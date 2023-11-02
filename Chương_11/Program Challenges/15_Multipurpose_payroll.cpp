#include <iostream>
#include <cctype>

using namespace std;

// Define the structure for an hourly paid worker
struct HourlyPaid
{
    double hoursWorked;
    double hourlyRate;
};

// Define the structure for a salaried worker
struct Salaried
{
    double salary;
    double bonus;
};

// Define a union to store either hourly paid or salaried worker data
union PayrollData
{
    HourlyPaid hourlyWorker;
    Salaried salariedWorker;
};

int main()
{
    char workerType;
    PayrollData payroll;

    cout << "Enter the worker type (H for Hourly Paid, S for Salaried): ";
    cin >> workerType;
    workerType = toupper(workerType);

    if (workerType != 'H' && workerType != 'S')
    {
        cout << "Invalid worker type. Please enter H for Hourly Paid or S for Salaried." << endl;
        return 1;
    }

    if (workerType == 'H')
    {
        cout << "Enter hours worked (up to 80): ";
        cin >> payroll.hourlyWorker.hoursWorked;
        cout << "Enter hourly rate: ";
        cin >> payroll.hourlyWorker.hourlyRate;

        if (payroll.hourlyWorker.hoursWorked < 0 || payroll.hourlyWorker.hoursWorked > 80)
        {
            cout << "Invalid hours worked. Hours must be between 0 and 80." << endl;
            return 1;
        }
    }
    else if (workerType == 'S')
    {
        cout << "Enter salary: ";
        cin >> payroll.salariedWorker.salary;
        cout << "Enter bonus: ";
        cin >> payroll.salariedWorker.bonus;
    }

    double pay;

    if (workerType == 'H')
    {
        pay = payroll.hourlyWorker.hoursWorked * payroll.hourlyWorker.hourlyRate;
    }
    else
    {
        pay = payroll.salariedWorker.salary + payroll.salariedWorker.bonus;
    }

    cout << "Total pay: $" << pay << endl;

    return 0;
}
