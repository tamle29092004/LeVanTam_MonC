#include <iostream>
#include <string>

using namespace std;

// Define the structure to store student data
struct Student
{
    string name;
    int idnum;
    int *tests;
    double average;
    char grade;
};

// Function to calculate the course grade based on the average test score
char calculateGrade(double average)
{
    if (average >= 91)
    {
        return 'A';
    }
    else if (average >= 81)
    {
        return 'B';
    }
    else if (average >= 71)
    {
        return 'C';
    }
    else if (average >= 61)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int numStudents;
    int numTests;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    cout << "Enter the number of tests: ";
    cin >> numTests;

    Student *students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        students[i].tests = new int[numTests];

        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Enter the ID number for student " << i + 1 << ": ";
        cin >> students[i].idnum;

        cout << "Enter the test scores for student " << i + 1 << ":" << endl;
        for (int j = 0; j < numTests; j++)
        {
            cout << "Test " << j + 1 << ": ";
            cin >> students[i].tests[j];
        }

        double sum = 0.0;
        for (int j = 0; j < numTests; j++)
        {
            sum += students[i].tests[j];
        }
        students[i].average = sum / numTests;

        students[i].grade = calculateGrade(students[i].average);
    }

    cout << "Student Data:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Name\tID Number\tAverage\tCourse Grade" << endl;
    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < numStudents; i++)
    {
        cout << students[i].name << "\t" << students[i].idnum << "\t" << students[i].average << "\t" << students[i].grade << endl;
    }
    cout << "-----------------------------------------------------" << endl;

    for (int i = 0; i < numStudents; i++)
    {
        delete[] students[i].tests;
    }
    delete[] students;

    return 0;
}
