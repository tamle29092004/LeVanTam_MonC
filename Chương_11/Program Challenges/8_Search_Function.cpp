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

// Function to search for customer accounts by name
void searchAccountsByName(const CustomerAccount accounts[], int numAccounts, const string &searchTerm)
{
    bool found = false;

    for (int i = 0; i < numAccounts; i++)
    {
        if (accounts[i].name.find(searchTerm) != string::npos)
        {
            cout << "Match found for '" << searchTerm << "':" << endl;
            cout << "Name: " << accounts[i].name << endl;
            cout << "Address: " << accounts[i].address << endl;
            cout << "City: " << accounts[i].city << endl;
            cout << "State: " << accounts[i].state << endl;
            cout << "ZIP: " << accounts[i].zip << endl;
            cout << "Telephone Number: " << accounts[i].telephoneNumber << endl;
            cout << "Account Balance: $" << accounts[i].accountBalance << endl;
            cout << "Date of Last Payment: " << accounts[i].dateOfLastPayment << endl;
            cout << "----------------------------------------" << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No matching accounts found for '" << searchTerm << "'." << endl;
    }
}

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
        cout << "4. Search Accounts by Name" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // ... (unchanged code for entering new account data)
            break;

        case 2:
            // ... (unchanged code for changing account data)
            break;

        case 3:
            // ... (unchanged code for displaying all account data)
            break;

        case 4:
            if (numAccounts > 0)
            {
                cout << "Enter part of the customer's name to search: ";
                string searchTerm;
                cin.ignore();
                getline(cin, searchTerm);
                searchAccountsByName(accounts, numAccounts, searchTerm);
            }
            else
            {
                cout << "No accounts to search." << endl;
            }
            break;

        case 5:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid option (1-5)." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}
