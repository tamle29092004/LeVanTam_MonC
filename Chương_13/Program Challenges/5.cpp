#include <iostream>
#include <string>
using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;

public:
    // Constructor
    RetailItem(string desc, int units, double itemPrice) {
        description = desc;
        unitsOnHand = units;
        price = itemPrice;
    }

    // Mutator functions
    void setDescription(string desc) {
        description = desc;
    }

    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }

    void setPrice(double itemPrice) {
        price = itemPrice;
    }

    // Accessor functions
    string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    cout << "Item #1: " << item1.getDescription() << ", Units On Hand: " << item1.getUnitsOnHand() << ", Price: $" << item1.getPrice() << endl;
    cout << "Item #2: " << item2.getDescription() << ", Units On Hand: " << item2.getUnitsOnHand() << ", Price: $" << item2.getPrice() << endl;
    cout << "Item #3: " << item3.getDescription() << ", Units On Hand: " << item3.getUnitsOnHand() << ", Price: $" << item3.getPrice() << endl;

    return 0;
}
