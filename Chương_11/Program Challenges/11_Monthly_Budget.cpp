#include <iostream>
#include <string>

using namespace std;

// Define the MonthlyBudget structure
struct MonthlyBudget
{
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

// Function to enter actual expenses
void enterExpenses(MonthlyBudget &budget)
{
    cout << "Enter actual expenses for each category:" << endl;
    cout << "Housing: $";
    cin >> budget.housing;
    cout << "Utilities: $";
    cin >> budget.utilities;
    cout << "Household Expenses: $";
    cin >> budget.householdExpenses;
    cout << "Transportation: $";
    cin >> budget.transportation;
    cout << "Food: $";
    cin >> budget.food;
    cout << "Medical: $";
    cin >> budget.medical;
    cout << "Insurance: $";
    cin >> budget.insurance;
    cout << "Entertainment: $";
    cin >> budget.entertainment;
    cout << "Clothing: $";
    cin >> budget.clothing;
    cout << "Miscellaneous: $";
    cin >> budget.miscellaneous;
}

// Function to display a budget report
void displayBudgetReport(const MonthlyBudget &budget)
{
    double totalBudget = budget.housing + budget.utilities + budget.householdExpenses +
                         budget.transportation + budget.food + budget.medical +
                         budget.insurance + budget.entertainment + budget.clothing +
                         budget.miscellaneous;

    cout << "Monthly Budget Report:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Category            Budget ($)   Actual ($)   Difference ($)" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Housing             500.00       " << budget.housing << "         " << budget.housing - 500.00 << endl;
    cout << "Utilities           150.00       " << budget.utilities << "         " << budget.utilities - 150.00 << endl;
    cout << "Household Expenses  65.00        " << budget.householdExpenses << "         " << budget.householdExpenses - 65.00 << endl;
    cout << "Transportation      50.00        " << budget.transportation << "         " << budget.transportation - 50.00 << endl;
    cout << "Food                250.00       " << budget.food << "         " << budget.food - 250.00 << endl;
    cout << "Medical             30.00        " << budget.medical << "         " << budget.medical - 30.00 << endl;
    cout << "Insurance           100.00       " << budget.insurance << "         " << budget.insurance - 100.00 << endl;
    cout << "Entertainment       150.00       " << budget.entertainment << "         " << budget.entertainment - 150.00 << endl;
    cout << "Clothing            75.00        " << budget.clothing << "         " << budget.clothing - 75.00 << endl;
    cout << "Miscellaneous       50.00        " << budget.miscellaneous << "         " << budget.miscellaneous - 50.00 << endl;
    cout << "---------------------------------------" << endl;
    cout << "Total Budget        " << totalBudget << "         " << totalBudget - totalBudget << endl;
}

int main()
{
    MonthlyBudget budget;

    // Enter actual expenses
    enterExpenses(budget);

    // Display the budget report
    displayBudgetReport(budget);

    return 0;
}
