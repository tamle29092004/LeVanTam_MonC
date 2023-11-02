#include <iostream>
#include <string>

using namespace std;

// Define the structure to store speaker data
struct Speaker
{
    string name;
    string phoneNumber;
    string topic;
    double fee;
};

// Function to display a speaker's information
void displaySpeaker(const Speaker &speaker)
{
    cout << "Name: " << speaker.name << endl;
    cout << "Telephone Number: " << speaker.phoneNumber << endl;
    cout << "Speaking Topic: " << speaker.topic << endl;
    cout << "Fee Required: $" << speaker.fee << endl;
    cout << "----------------------------------------" << endl;
}

// Function to update a speaker's information
void updateSpeaker(Speaker &speaker)
{
    cout << "Enter new data for the speaker:" << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, speaker.name);
    cout << "Telephone Number: ";
    getline(cin, speaker.phoneNumber);
    cout << "Speaking Topic: ";
    getline(cin, speaker.topic);
    do
    {
        cout << "Fee Required (non-negative): $";
        cin >> speaker.fee;
    } while (speaker.fee < 0);
}

// Function to search for speakers by a keyword in the Speaking Topic
void searchSpeakersByTopic(const Speaker speakers[], int numSpeakers, const string &keyword)
{
    bool found = false;

    for (int i = 0; i < numSpeakers; i++)
    {
        if (speakers[i].topic.find(keyword) != string::npos)
        {
            displaySpeaker(speakers[i]);
            found = true;
        }
    }

    if (!found)
    {
        cout << "No speakers found with the keyword '" << keyword << "' in their Speaking Topic." << endl;
    }
}

int main()
{
    const int maxSpeakers = 10;
    Speaker speakers[maxSpeakers];
    int numSpeakers = 0;

    int choice;

    do
    {
        cout << "Speakers' Bureau Menu:" << endl;
        cout << "1. Enter New Speaker Data" << endl;
        cout << "2. Change Speaker Data" << endl;
        cout << "3. Display All Speaker Data" << endl;
        cout << "4. Search Speakers by Topic" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (numSpeakers < maxSpeakers)
            {
                cout << "Enter data for the new speaker:" << endl;
                updateSpeaker(speakers[numSpeakers]);
                numSpeakers++;
                cout << "Speaker added successfully." << endl;
            }
            else
            {
                cout << "Maximum number of speakers reached." << endl;
            }
            break;

        case 2:
            if (numSpeakers > 0)
            {
                int speakerToChange;
                cout << "Enter the speaker number to change (1-" << numSpeakers << "): ";
                cin >> speakerToChange;
                if (speakerToChange >= 1 && speakerToChange <= numSpeakers)
                {
                    updateSpeaker(speakers[speakerToChange - 1]);
                    cout << "Speaker data changed successfully." << endl;
                }
                else
                {
                    cout << "Invalid speaker number." << endl;
                }
            }
            else
            {
                cout << "No speakers to change." << endl;
            }
            break;

        case 3:
            if (numSpeakers > 0)
            {
                cout << "All Speaker Data:" << endl;
                for (int i = 0; i < numSpeakers; i++)
                {
                    displaySpeaker(speakers[i]);
                }
            }
            else
            {
                cout << "No speakers to display." << endl;
            }
            break;

        case 4:
            if (numSpeakers > 0)
            {
                cout << "Enter a keyword to search for speakers in the Speaking Topic: ";
                string keyword;
                cin.ignore();
                getline(cin, keyword);
                searchSpeakersByTopic(speakers, numSpeakers, keyword);
            }
            else
            {
                cout << "No speakers to search." << endl;
            }
            break;

        case 5:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid option (1-5)." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}
