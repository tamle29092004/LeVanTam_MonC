#include <iostream>
#include <string>

using namespace std;

// Define the structure to store drink data
struct Drink
{
    string name;
    double cost;
    int quantity;
};

int main()
{
    // Initialize an array of structures with drink data
    Drink drinks[] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}};

    double totalEarnings = 0.0;

    while (true)
    {
        cout << "Available Drinks:" << endl;
        cout << "-----------------" << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ". " << drinks[i].name << " - $" << drinks[i].cost << " (Qty: " << drinks[i].quantity << ")" << endl;
        }

        cout << "0. Quit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice < 0 || choice > 5)
        {
            cout << "Invalid choice. Please select a valid option." << endl;
            continue;
        }

        if (choice == 0)
        {
            break;
        }

        int selectedIndex = choice - 1;

        if (drinks[selectedIndex].quantity == 0)
        {
            cout << "Sorry, " << drinks[selectedIndex].name << " is sold out." << endl;
        }
        else
        {
            cout << "Insert money (in dollars, up to $1.00): $";
            double money;
            cin >> money;

            if (money < 0.0 || money > 1.0)
            {
                cout << "Invalid amount. Please insert money up to $1.00." << endl;
            }
            else if (money < drinks[selectedIndex].cost)
            {
                cout << "Insufficient funds. Please insert more money." << endl;
            }
            else
            {
                double change = money - drinks[selectedIndex].cost;
                totalEarnings += drinks[selectedIndex].cost;
                drinks[selectedIndex].quantity--;
                cout << "Dispensing " << drinks[selectedIndex].name << "..." << endl;
                cout << "Change: $" << change << endl;
            }
        }
    }

    cout << "Total earnings: $" << totalEarnings << endl;

    return 0;
}
