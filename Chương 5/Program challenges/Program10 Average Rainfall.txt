//chương tính số trong số năm nhập và lượng mưa
#include <iostream>

using namespace std;

int main() {
    int num_years;
    double total_rainfall = 0.0;
    int total_months = 0;

    // Get the number of years with input validation
    do {
        cout << "Nhap so nam: "; // Enter the number of years:
        cin >> num_years;

        if (num_years < 1) {
            cout << "Vui long nhap so nam lon hon hoac bang 1." << endl; // Please enter a number of years greater than or equal to 1.
        }
    } while (num_years < 1);

    // Outer loop for each year
    for (int year = 1; year <= num_years; year++) {
        // Inner loop for each month
        for (int month = 1; month <= 12; month++) {
            double inches;

            // Get monthly rainfall with input validation
            do {
                cout << "Nhap luong mua (inch) cho Nam " << year << ", Thang " << month << ": "; // Enter the inches of rainfall for Year <year>, Month <month>:
                cin >> inches;

                if (inches < 0) {
                    cout << "Vui long nhap gia tri khong am cho luong mua." << endl; // Please enter a non-negative value for rainfall.
                }
            } while (inches < 0);

            total_rainfall += inches;
            total_months++;
        }
    }

    // Calculate average rainfall
    double average_rainfall = total_rainfall / total_months;

    // Display the results
    cout << "\nSo thang: " << total_months << endl; // Number of months:
    cout << "Tong luong mua (inch): " << total_rainfall << endl; // Total inches of rainfall:
    cout << "Luong mua trung binh hang thang: " << average_rainfall << " inch" << endl; // Average rainfall per month:

    return 0;
}
