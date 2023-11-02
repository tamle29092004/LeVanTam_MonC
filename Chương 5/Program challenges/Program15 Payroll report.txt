//chương trình hiện bảng lương và một số thứ thế 
#include <iostream>
using namespace std;

int main() {
    int employeeId;
    double grossSalary, stateTax, federalTax, fica;
    double totalGrossSalary = 0.0, totalStateTax = 0.0, totalFederalTax = 0.0, totalFICA = 0.0, totalNetSalary = 0.0;

    while (true) {
        cout << "Enter employee ID (0 to exit): ";
        cin >> employeeId;

        if (employeeId == 0) {
            break;
        }

        cout << "Enter gross salary: ";
        cin >> grossSalary;

        // Input validation
        if (grossSalary < 0) {
            cout << "Invalid input. Gross salary cannot be negative. Please re-enter data for employee." << endl;
            continue;
        }

        cout << "Enter state tax: ";
        cin >> stateTax;

        cout << "Enter federal tax: ";
        cin >> federalTax;

        cout << "Enter FICA deduction: ";
        cin >> fica;

        // Input validation
        if (stateTax < 0 || federalTax < 0 || fica < 0 || stateTax + federalTax + fica > grossSalary) {
            cout << "Invalid input. Tax deductions or FICA exceed gross salary. Please re-enter data for employee." << endl;
            continue;
        }

        // Calculate totals
        totalGrossSalary += grossSalary;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFICA += fica;
        totalNetSalary += (grossSalary - stateTax - federalTax - fica);
    }

    cout << "Total gross salary: " << totalGrossSalary << endl;
    cout << "Total state tax: " << totalStateTax << endl;
    cout << "Total federal tax: " << totalFederalTax << endl;
    cout << "Total FICA deductions: " << totalFICA << endl;
    cout << "Total net salary: " << totalNetSalary << endl;

    return 0;
}
