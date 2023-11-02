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
    Coin coin;

    cout << "Initial side facing up: " << coin.getSideUp() << endl;

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; i++)
    {
        coin.toss();
        cout << "Side facing up after toss " << i + 1 << ": " << coin.getSideUp() << endl;

        if (coin.getSideUp() == "heads")
        {
            headsCount++;
        }
        else
        {
            tailsCount++;
        }
    }

    cout << "Heads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;

    return 0;
}
