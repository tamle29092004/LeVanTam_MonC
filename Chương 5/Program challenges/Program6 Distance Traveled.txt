//chương trình hỏi người chạy về vận tốc và thời gian và sau đó cho ra kết quả
#include <iostream>
using namespace std;

int main() {
    int speed, hours;

    // Get the speed of the vehicle in mph
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    // Get the number of hours traveled
    cout << "How many hours has it traveled? ";
    cin >> hours;

    // Display the header for the table
    cout << "Hour   Distance Traveled" << endl;
    cout << "-----------------------" << endl;

    // Calculate and display the distance for each hour
    for (int hour = 1; hour <= hours; hour++) {
        int distance = speed * hour;
        cout << hour << "      " << distance << " miles" << endl;
    }

    return 0;
}
