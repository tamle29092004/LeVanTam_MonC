#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void searchAndDisplayString(const string& file_name, const string& search_string) {
    ifstream file(file_name);
    if (!file.is_open()) {
        cerr << "File '" << file_name << "' not found." << endl;
        return;
    }

    string line;
    int line_number = 1;
    int occurrences = 0;

    while (getline(file, line)) {
        size_t found = line.find(search_string);
        if (found != string::npos) {
            cout << "Line " << line_number << ": " << line << endl;
            occurrences++;
        }
        line_number++;
    }

    file.close();

    cout << "The string '" << search_string << "' appeared " << occurrences << " times in the file." << endl;
}

int main() {
    string file_name;
    string search_string;

    cout << "Enter the name of the file: ";
    cin >> file_name;

    cout << "Enter the string to search for: ";
    cin >> search_string;

    searchAndDisplayString(file_name, search_string);

    return 0;
}
