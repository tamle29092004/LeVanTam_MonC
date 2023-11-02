#include <iostream>
#include <cmath>
#include <iomanip>

class MortgageCalculator
{
private:
    double loanAmount;         // Dollar amount of the loan
    double annualInterestRate; // Annual interest rate
    int years;                 // Number of years of the loan
    double monthlyPayment;     // Monthly payment
    double totalAmountPaid;    // Total amount paid to the bank

public:
    // Constructor
    MortgageCalculator()
    {
        loanAmount = 0.0;
        annualInterestRate = 0.0;
        years = 0;
        monthlyPayment = 0.0;
        totalAmountPaid = 0.0;
    }

    // Setters for loan amount, annual interest rate, and years
    void setLoanAmount(double amount)
    {
        if (amount >= 0)
        {
            loanAmount = amount;
        }
        else
        {
            std::cout << "Loan amount cannot be negative. Setting to 0." << std::endl;
            loanAmount = 0;
        }
    }

    void setAnnualInterestRate(double rate)
    {
        if (rate >= 0)
        {
            annualInterestRate = rate;
        }
        else
        {
            std::cout << "Interest rate cannot be negative. Setting to 0." << std::endl;
            annualInterestRate = 0;
        }
    }

    void setYears(int numYears)
    {
        if (numYears >= 0)
        {
            years = numYears;
        }
        else
        {
            std::cout << "Number of years cannot be negative. Setting to 0." << std::endl;
            years = 0;
        }
    }

    // Calculate and return monthly payment
    double calculateMonthlyPayment()
    {
        if (annualInterestRate == 0)
        {
            monthlyPayment = loanAmount / (years * 12);
        }
        else
        {
            double monthlyRate = annualInterestRate / 12 / 100;
            int numPayments = years * 12;
            monthlyPayment = loanAmount * (monthlyRate * pow(1 + monthlyRate, numPayments)) /
                             (pow(1 + monthlyRate, numPayments) - 1);
        }
        return monthlyPayment;
    }

    // Calculate and return total amount paid
    double calculateTotalAmountPaid()
    {
        totalAmountPaid = monthlyPayment * years * 12;
        return totalAmountPaid;
    }
};

int main()
{
    MortgageCalculator calculator;

    double loanAmount;
    double annualInterestRate;
    int years;

    std::cout << "Enter the loan amount: $";
    std::cin >> loanAmount;
    calculator.setLoanAmount(loanAmount);

    std::cout << "Enter the annual interest rate (as a percentage): ";
    std::cin >> annualInterestRate;
    calculator.setAnnualInterestRate(annualInterestRate);

    std::cout << "Enter the number of years for the loan: ";
    std::cin >> years;
    calculator.setYears(years);

    double monthlyPayment = calculator.calculateMonthlyPayment();
    double totalAmountPaid = calculator.calculateTotalAmountPaid();

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Monthly Payment: $" << monthlyPayment << std::endl;
    std::cout << "Total Amount Paid: $" << totalAmountPaid << std::endl;

    return 0;
}
