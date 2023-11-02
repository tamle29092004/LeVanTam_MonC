#include <iostream>
#include <ctime>
#include <cstdlib>

// Define a Die class to simulate rolling a six-sided die
class Die
{
public:
    Die()
    {
        // Initialize random seed
        srand(static_cast<unsigned>(time(0)));
    }

    int roll()
    {
        return rand() % 6 + 1; // Generates a random number between 1 and 6
    }
};

int main()
{
    Die die;
    int fishingPoints = 0;
    bool continueFishing = true;

    std::cout << "Welcome to the Fishing Game!" << std::endl;

    while (continueFishing)
    {
        std::cout << "Do you want to fish for more items? (y/n): ";
        char choice;
        std::cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            continueFishing = false;
        }
        else
        {
            // Simulate rolling the die
            int dieResult = die.roll();

            // Determine the item caught and its points
            std::string item;
            int points;

            switch (dieResult)
            {
            case 1:
                item = "a huge fish";
                points = 10;
                break;
            case 2:
                item = "an old shoe";
                points = -5;
                break;
            case 3:
                item = "a little fish";
                points = 5;
                break;
            case 4:
                item = "a seaweed";
                points = -2;
                break;
            case 5:
                item = "a treasure chest";
                points = 20;
                break;
            case 6:
                item = "a rusty can";
                points = -3;
                break;
            }

            std::cout << "You caught " << item << " worth " << points << " points." << std::endl;
            fishingPoints += points;
        }
    }

    std::cout << "Total fishing points: " << fishingPoints << std::endl;

    // Display a message based on the points earned
    if (fishingPoints >= 20)
    {
        std::cout << "Congratulations! You are a fishing champion!" << std::endl;
    }
    else if (fishingPoints >= 10)
    {
        std::cout << "Well done! You are a skilled angler." << std::endl;
    }
    else
    {
        std::cout << "Nice try! Keep practicing your fishing skills." << std::endl;
    }

    return 0;
}
