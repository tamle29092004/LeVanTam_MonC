#include <iostream>
#include <string>

using namespace std;

// Define the structure to store customer account data
struct CustomerAccount
{
    string name;
    string address;
    string city;
    string state;
    string zip;
    string telephoneNumber;
    double accountBalance;
    string dateOfLastPayment;
};

int main()
{
    const int maxAccounts = 10;
    CustomerAccount accounts[maxAccounts];
    int numAccounts = 0;

    int choice;

    do
    {
        cout << "Customer Accounts Menu:" << endl;
        cout << "1. Enter New Account Data" << endl;
        cout << "2. Change Account Data" << endl;
        cout << "3. Display All Account Data" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (numAccounts < maxAccounts)
            {
                cout << "Enter data for the new account:" << endl;

                cout << "Name: ";
                cin.ignore();
                getline(cin, accounts[numAccounts].name);

                cout << "Address: ";
                getline(cin, accounts[numAccounts].address);

                cout << "City: ";
                getline(cin, accounts[numAccounts].city);

                cout << "State: ";
                getline(cin, accounts[numAccounts].state);

                cout << "ZIP: ";
                getline(cin, accounts[numAccounts].zip);

                cout << "Telephone Number: ";
                getline(cin, accounts[numAccounts].telephoneNumber);

                do
                {
                    cout << "Account Balance (non-negative): ";
                    cin >> accounts[numAccounts].accountBalance;
                } while (accounts[numAccounts].accountBalance < 0);

                cout << "Date of Last Payment: ";
                cin.ignore();
                getline(cin, accounts[numAccounts].dateOfLastPayment);

                numAccounts++;
                cout << "Account added successfully." << endl;
            }
            else
            {
                cout << "Maximum number of accounts reached." << endl;
            }
            break;

        case 2:
            if (numAccounts > 0)
            {
                int accountToChange;
                cout << "Enter the account number to change (1-" << numAccounts << "): ";
                cin >> accountToChange;
                if (accountToChange >= 1 && accountToChange <= numAccounts)
                {
                    cout << "Enter new data for the account:" << endl;

                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, accounts[accountToChange - 1].name);

                    cout << "Address: ";
                    getline(cin, accounts[accountToChange - 1].address);

                    cout << "City: ";
                    getline(cin, accounts[accountToChange - 1].city);

                    cout << "State: ";
                    getline(cin, accounts[accountToChange - 1].state);

                    cout << "ZIP: ";
                    getline(cin, accounts[accountToChange - 1].zip);

                    cout << "Telephone Number: ";
                    getline(cin, accounts[accountToChange - 1].telephoneNumber);

                    do
                    {
                        cout << "Account Balance (non-negative): ";
                        cin >> accounts[accountToChange - 1].accountBalance;
                    } while (accounts[accountToChange - 1].accountBalance < 0);

                    cout << "Date of Last Payment: ";
                    cin.ignore();
                    getline(cin, accounts[accountToChange - 1].dateOfLastPayment);

                    cout << "Account data changed successfully." << endl;
                }
                else
                {
                    cout << "Invalid account number." << endl;
                }
            }
            else
            {
                cout << "No accounts to change." << endl;
            }
            break;

        case 3:
            if (numAccounts > 0)
            {
                cout << "All Account Data:" << endl;
                for (int i = 0; i < numAccounts; i++)
                {
                    cout << "Account " << (i + 1) << ":" << endl;
                    cout << "Name: " << accounts[i].name << endl;
                    cout << "Address: " << accounts[i].address << endl;
                    cout << "City: " << accounts[i].city << endl;
                    cout << "State: " << accounts[i].state << endl;
                    cout << "ZIP: " << accounts[i].zip << endl;
                    cout << "Telephone Number: " << accounts[i].telephoneNumber << endl;
                    cout << "Account Balance: $" << accounts[i].accountBalance << endl;
                    cout << "Date of Last Payment: " << accounts[i].dateOfLastPayment << endl;
                }
            }
            else
            {
                cout << "No accounts to display." << endl;
            }
            break;

        case 4:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid option (1-4)." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
