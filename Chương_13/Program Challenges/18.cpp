#include <iostream>
#include <cstdlib>
#include <ctime>

class Die
{
public:
    Die()
    {
        srand(time(0)); // Seed the random number generator
    }

    int roll() const
    {
        return rand() % 6 + 1; // Simulate rolling a 6-sided die
    }
};
int main()
{
    Die die;
    int userTotal = 0;
    int computerTotal = 0;

    std::cout << "Welcome to the Game of 21!" << std::endl;

    while (true)
    {
        std::cout << "Computer's total: " << computerTotal << std::endl;
        std::cout << "Your total: " << userTotal << std::endl;

        int computerRoll = die.roll();
        computerTotal += computerRoll;
        std::cout << "Computer rolls: " << computerRoll << std::endl;

        char choice;
        std::cout << "Do you want to roll (y/n)? ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            int userRoll = die.roll();
            userTotal += userRoll;
            std::cout << "You roll: " << userRoll << std::endl;

            if (userTotal > 21)
            {
                std::cout << "You went over 21. Computer wins!" << std::endl;
                break;
            }
        }
        else
        {
            break;
        }
    }

    std::cout << "Computer's total: " << computerTotal << std::endl;
    std::cout << "Your total: " << userTotal << std::endl;

    if (userTotal > 21)
    {
        std::cout << "Computer wins!" << std::endl;
    }
    else if (computerTotal > 21)
    {
        std::cout << "You win!" << std::endl;
    }
    else if (userTotal > computerTotal)
    {
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "Computer wins!" << std::endl;
    }

    return 0;
}
