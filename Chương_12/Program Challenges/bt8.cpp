    #include <iostream>
#include <fstream>
using namespace std;

// Function to write an array to a binary file
void arrayToFile(const char* file_name, int* arr, int size) {
    ofstream file(file_name, ios::binary);
    if (!file.is_open()) {
        cerr << "Failed to open file for writing." << endl;
        return;
    }

    file.write(reinterpret_cast<char*>(arr), size * sizeof(int));
    file.close();
}

// Function to read data from a binary file into an array
void fileToArray(const char* file_name, int* arr, int size) {
    ifstream file(file_name, ios::binary);
    if (!file.is_open()) {
        cerr << "Failed to open file for reading." << endl;
        return;
    }

    file.read(reinterpret_cast<char*>(arr), size * sizeof(int));
    file.close();
}

int main() {
    const char* file_name = "data.dat";
    const int array_size = 5;
    int original_array[array_size] = {10, 20, 30, 40, 50};
    int loaded_array[array_size];

    // Write the array to a binary file
    arrayToFile(file_name, original_array, array_size);

    // Read the data from the file into an array
    fileToArray(file_name, loaded_array, array_size);

    // Display the loaded array's contents
    cout << "Loaded Array: ";
    for (int i = 0; i < array_size; i++) {
        cout << loaded_array[i] << " ";
    }
    cout << endl;

    return 0;
}
