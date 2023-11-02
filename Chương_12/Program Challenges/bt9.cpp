#include <iostream>
#include <fstream>

using namespace std;

void encryptFile(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cerr << "Input file '" << inputFileName << "' not found." << endl;
        return;
    }

    ofstream outputFile(outputFileName, ios::binary);
    if (!outputFile.is_open()) {
        cerr << "Failed to open output file for writing." << endl;
        inputFile.close();
        return;
    }

    char ch;
    while (inputFile.get(ch)) {
        // Simple encryption: shift ASCII values by 10
        ch = char(ch + 10);
        outputFile.put(ch);
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    string inputFileName = "original.txt";
    string encryptedFileName = "encrypted.txt";

    encryptFile(inputFileName, encryptedFileName);
    cout << "File encrypted successfully." << endl;

    return 0;
}
