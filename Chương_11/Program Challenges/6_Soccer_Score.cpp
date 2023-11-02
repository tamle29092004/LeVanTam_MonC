#include <iostream>
#include <string>

using namespace std;

// Define the structure to store soccer player data
struct SoccerPlayer
{
    string name;
    int number;
    int pointsScored;
};

int main()
{
    const int numPlayers = 12;
    SoccerPlayer players[numPlayers];

    int totalPoints = 0;
    int maxPoints = -1;
    string playerWithMaxPoints;

    cout << "Enter data for each soccer player:" << endl;

    for (int i = 0; i < numPlayers; i++)
    {
        cout << "Player " << (i + 1) << ":" << endl;

        cout << "Name: ";
        cin.ignore(); // Clear the newline character left in the input buffer
        getline(cin, players[i].name);

        do
        {
            cout << "Number (positive integer): ";
            cin >> players[i].number;
        } while (players[i].number <= 0);

        do
        {
            cout << "Points Scored (positive integer): ";
            cin >> players[i].pointsScored;
        } while (players[i].pointsScored <= 0);

        totalPoints += players[i].pointsScored;

        if (players[i].pointsScored > maxPoints)
        {
            maxPoints = players[i].pointsScored;
            playerWithMaxPoints = players[i].name;
        }
    }

    // Display the table of player data
    cout << "\nSoccer Player Data:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Number\tName\tPoints Scored" << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < numPlayers; i++)
    {
        cout << players[i].number << "\t" << players[i].name << "\t" << players[i].pointsScored << endl;
    }
    cout << "----------------------------------------" << endl;

    cout << "Total Points Earned by the Team: " << totalPoints << endl;
    cout << "Player with the Most Points: " << playerWithMaxPoints << " (" << maxPoints << " points)" << endl;

    return 0;
}
