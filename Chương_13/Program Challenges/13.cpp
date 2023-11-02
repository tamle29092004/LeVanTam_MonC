#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Coin
{
private:
    string sideUp;

public:
    Coin()
    {
        // Initialize random seed
        srand(static_cast<unsigned>(time(0)));

        // Randomly determine the initial side facing up
        toss();
    }

    void toss()
    {
        // Simulate the tossing of the coin
        if (rand() % 2 == 0)
        {
            sideUp = "heads";
        }
        else
        {
            sideUp = "tails";
        }
    }

    string getSideUp() const
    {
        return sideUp;
    }
};

int main()
{
    Coin quarter, dime, nickel;
    double balance = 0.0;

    while (balance < 1.0)
    {
        // Toss the coins
        quarter.toss();
        dime.toss();
        nickel.toss();

        // Display the results
        cout << "Quarter: " << quarter.getSideUp() << endl;
        cout << "Dime: " << dime.getSideUp() << endl;
        cout << "Nickel: " << nickel.getSideUp() << endl;

        // Update balance
        if (quarter.getSideUp() == "heads")
        {
            balance += 0.25;
        }
        if (dime.getSideUp() == "heads")
        {
            balance += 0.10;
        }
        if (nickel.getSideUp() == "heads")
        {
            balance += 0.05;
        }

        // Display current balance
        cout << "Current Balance: $" << balance << endl;
    }

    if (balance == 1.0)
    {
        cout << "Congratulations! You won the game." << endl;
    }
    else
    {
        cout << "Sorry, you lost the game." << endl;
    }

    return 0;
}
