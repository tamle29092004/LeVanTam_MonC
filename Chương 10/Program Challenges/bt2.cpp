#include <iostream>
#include <cstring>

using namespace std;

void displayBackward(const char* str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    char inputString[100]; // Assuming a maximum string length of 100 characters
    cout << "Enter a string: ";
    cin.getline(inputString, sizeof(inputString)); // Read a string from the user

    cout << "Backward string: ";
    displayBackward(inputString);

    return 0;
}
