#include <iostream>
#include <string>
using namespace std;

class InventoryItem {
private:
    string description;
    double cost;
    int unitsOnHand;

public:
    InventoryItem(string desc, double c, int units) : description(desc), cost(c), unitsOnHand(units) {}

    string getDescription() const {
        return description;
    }

    double getCost() const {
        return cost;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }
};

class CashRegister {
private:
    InventoryItem item;
    int quantity;

public:
    CashRegister(InventoryItem i, int q) : item(i), quantity(q) {}

    double getPurchaseSubtotal() {
        double unitPrice = item.getCost() * 1.30;  // Add 30% profit
        return unitPrice * quantity;
    }

    double getTax() {
        double subtotal = getPurchaseSubtotal();
        return subtotal * 0.06;  // 6% sales tax
    }

    double getTotal() {
        double subtotal = getPurchaseSubtotal();
        double tax = getTax();
        return subtotal + tax;
    }

    void makePurchase() {
        if (quantity >= 0) {
            int availableUnits = item.getUnitsOnHand();
            if (quantity <= availableUnits) {
                item.setUnitsOnHand(availableUnits - quantity);
                cout << "Purchase Subtotal: $" << getPurchaseSubtotal() << endl;
                cout << "Sales Tax: $" << getTax() << endl;
                cout << "Total: $" << getTotal() << endl;
            } else {
                cout << "Insufficient quantity in stock. Available units: " << availableUnits << endl;
            }
        } else {
            cout << "Invalid quantity. Please enter a non-negative quantity." << endl;
        }
    }
};
int main() {
    // Create an InventoryItem object
    InventoryItem item("Widget", 10.0, 100);

    // Create a CashRegister object
    int quantity;
    cout << "Enter the quantity of items to purchase: ";
    cin >> quantity;

    CashRegister register1(item, quantity);
    register1.makePurchase();

    return 0;
}
