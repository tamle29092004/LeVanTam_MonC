#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

void processFile(const string& input_file, const string& output_file) {
    ifstream inputFile(input_file);
    if (!inputFile.is_open()) {
        cerr << "Input file '" << input_file << "' not found." << endl;
        return;
    }

    ofstream outputFile(output_file);
    if (!outputFile.is_open()) {
        cerr << "Unable to open output file '" << output_file << "'." << endl;
        inputFile.close();
        return;
    }

    string line;
    bool new_sentence = true;

    while (getline(inputFile, line)) {
        for (char& c : line) {
            if (new_sentence && isalpha(c)) {
                c = toupper(c);
                new_sentence = false;
            } else {
                c = tolower(c);
            }

            if (c == '.') {
                new_sentence = true;
            }
        }
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    string input_file, output_file;

    cout << "Enter the name of the input file: ";
    cin >> input_file;

    cout << "Enter the name of the output file: ";
    cin >> output_file;

    processFile(input_file, output_file);

    cout << "Processing complete. The revised content has been saved to '" << output_file << "'." << endl;

    return 0;
}
