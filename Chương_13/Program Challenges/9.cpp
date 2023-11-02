#include <iostream>
using namespace std;

class Population
{
private:
    int population;
    int numBirths;
    int numDeaths;

public:
    // Constructor
    Population(int pop, int births, int deaths)
    {
        if (pop >= 1 && births >= 0 && deaths >= 0)
        {
            population = pop;
            numBirths = births;
            numDeaths = deaths;
        }
        else
        {
            cout << "Invalid input. Population, births, and deaths must be non-negative." << endl;
            exit(1);
        }
    }

    // Function to calculate and return the birth rate
    double getBirthRate() const
    {
        return static_cast<double>(numBirths) / population;
    }

    // Function to calculate and return the death rate
    double getDeathRate() const
    {
        return static_cast<double>(numDeaths) / population;
    }
};

int main()
{
    int population, births, deaths;

    cout << "Enter the population: ";
    cin >> population;
    cout << "Enter the number of births: ";
    cin >> births;
    cout << "Enter the number of deaths: ";
    cin >> deaths;

    Population popData(population, births, deaths);

    cout << "Birth Rate: " << popData.getBirthRate() << endl;
    cout << "Death Rate: " << popData.getDeathRate() << endl;

    return 0;
}
