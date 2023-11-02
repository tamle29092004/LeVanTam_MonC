#include <iostream>
using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default Constructor
    Inventory()
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        setTotalCost();
    }

    // Constructor #2
    Inventory(int number, int qty, double itemCost)
    {
        itemNumber = (number < 0) ? 0 : number;
        quantity = (qty < 0) ? 0 : qty;
        cost = (itemCost < 0.0) ? 0.0 : itemCost;
        setTotalCost();
    }

    // Mutator functions
    void setItemNumber(int number)
    {
        itemNumber = (number < 0) ? 0 : number;
    }

    void setQuantity(int qty)
    {
        quantity = (qty < 0) ? 0 : qty;
        setTotalCost();
    }

    void setCost(double itemCost)
    {
        cost = (itemCost < 0.0) ? 0.0 : itemCost;
        setTotalCost();
    }

    void setTotalCost()
    {
        totalCost = static_cast<double>(quantity) * cost;
    }

    // Accessor functions
    int getItemNumber() const
    {
        return itemNumber;
    }

    int getQuantity() const
    {
        return quantity;
    }

    double getCost() const
    {
        return cost;
    }

    double getTotalCost() const
    {
        return totalCost;
    }
};

int main()
{
    // Create Inventory objects
    Inventory item1;
    Inventory item2(101, 10, 19.95);
    Inventory item3(102, 15, 14.50);

    // Display item information
    cout << "Item #1: Number=" << item1.getItemNumber() << ", Quantity=" << item1.getQuantity() << ", Cost=$" << item1.getCost() << ", Total Cost=$" << item1.getTotalCost() << endl;
    cout << "Item #2: Number=" << item2.getItemNumber() << ", Quantity=" << item2.getQuantity() << ", Cost=$" << item2.getCost() << ", Total Cost=$" << item2.getTotalCost() << endl;
    cout << "Item #3: Number=" << item3.getItemNumber() << ", Quantity=" << item3.getQuantity() << ", Cost=$" << item3.getCost() << ", Total Cost=$" << item3.getTotalCost() << endl;

    return 0;
}
