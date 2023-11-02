#include <iostream>
#include <string>

using namespace std;

// Define the structure to store part information
struct InventoryBin
{
    string description;
    int numParts;
};

// Function to add parts to a specific bin
void AddParts(InventoryBin &bin, int numToAdd)
{
    if (bin.numParts + numToAdd <= 30)
    {
        bin.numParts += numToAdd;
    }
    else
    {
        cout << "Cannot add more parts than the bin can hold (max: 30)." << endl;
    }
}

// Function to remove parts from a specific bin
void RemoveParts(InventoryBin &bin, int numToRemove)
{
    if (bin.numParts - numToRemove >= 0)
    {
        bin.numParts -= numToRemove;
    }
    else
    {
        cout << "Cannot remove more parts than what's in the bin." << endl;
    }
}

int main()
{
    InventoryBin bins[10] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 25},
        {"Cable", 18},
        {"Rod", 12}};

    int choice;

    while (true)
    {
        cout << "Inventory Bins:" << endl;
        cout << "--------------------------------" << endl;

        for (int i = 0; i < 10; i++)
        {
            cout << i + 1 << ". " << bins[i].description << " (" << bins[i].numParts << " parts)" << endl;
        }

        cout << "0. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice < 0 || choice > 10)
        {
            cout << "Invalid choice. Please select a valid option." << endl;
            continue;
        }

        if (choice == 0)
        {
            break;
        }

        int selectedBinIndex = choice - 1;
        InventoryBin &selectedBin = bins[selectedBinIndex];

        cout << "Selected bin: " << selectedBin.description << " (" << selectedBin.numParts << " parts)" << endl;

        int action;
        cout << "1. Add parts" << endl;
        cout << "2. Remove parts" << endl;
        cout << "Enter your action: ";
        cin >> action;

        if (action == 1)
        {
            int numToAdd;
            cout << "Enter the number of parts to add: ";
            cin >> numToAdd;
            if (numToAdd >= 0)
            {
                AddParts(selectedBin, numToAdd);
            }
            else
            {
                cout << "Invalid input. Parts must not be negative." << endl;
            }
        }
        else if (action == 2)
        {
            int numToRemove;
            cout << "Enter the number of parts to remove: ";
            cin >> numToRemove;
            if (numToRemove >= 0)
            {
                RemoveParts(selectedBin, numToRemove);
            }
            else
            {
                cout << "Invalid input. Parts must not be negative." << endl;
            }
        }
        else
        {
            cout << "Invalid action. Please select a valid option." << endl;
        }
    }

    return 0;
}
