#include <iostream>
#include <cstring>

using namespace std;

char mostFrequentCharacter(const char* str) {
    int charCount[256] = {0}; // Initialize an array to store character counts

    char mostFrequentChar = '\0';
    int maxCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char currentChar = str[i];
        charCount[currentChar]++;

        if (charCount[currentChar] > maxCount) {
            maxCount = charCount[currentChar];
            mostFrequentChar = currentChar;
        }
    }

    return mostFrequentChar;
}

int main() {
    char inputString[1000]; // Assuming a maximum string length of 1000 characters

    cout << "Enter a string: ";
    cin.getline(inputString, sizeof(inputString));

    char mostFrequent = mostFrequentCharacter(inputString);

    if (mostFrequent != '\0') {
        cout << "The most frequent character is: " << mostFrequent << endl;
    } else {
        cout << "No characters in the input." << endl;
    }

    return 0;
}
