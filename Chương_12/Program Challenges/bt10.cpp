#include <iostream>
#include <fstream>

using namespace std;

void decryptFile(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName, ios::binary);
    if (!inputFile.is_open()) {
        cerr << "Input file '" << inputFileName << "' not found." << endl;
        return;
    }

    ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        cerr << "Failed to open output file for writing." << endl;
        inputFile.close();
        return;
    }

    char ch;
    while (inputFile.get(ch)) {
        // Simple decryption: shift ASCII values back by 10
        ch = char(ch - 10);
        outputFile.put(ch);
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    string encryptedFileName = "encrypted.txt";
    string decryptedFileName = "decrypted.txt";

    decryptFile(encryptedFileName, decryptedFileName);
    cout << "File decrypted successfully." << endl;

    return 0;
}
