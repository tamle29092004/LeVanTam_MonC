#include <iostream>
using namespace std;

class NumberArray
{
private:
    double *array;
    int size;

public:
    // Constructor
    NumberArray(int arraySize)
    {
        size = arraySize;
        array = new double[size];
    }

    // Destructor
    ~NumberArray()
    {
        delete[] array;
    }

    // Function to store a number in a specific element
    void setElement(int index, double value)
    {
        if (index >= 0 && index < size)
        {
            array[index] = value;
        }
        else
        {
            cout << "Invalid index." << endl;
        }
    }

    // Function to retrieve a number from a specific element
    double getElement(int index) const
    {
        if (index >= 0 && index < size)
        {
            return array[index];
        }
        else
        {
            cout << "Invalid index." << endl;
            return 0.0;
        }
    }

    // Function to return the highest value in the array
    double getHighestValue() const
    {
        double highest = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] > highest)
            {
                highest = array[i];
            }
        }
        return highest;
    }

    // Function to return the lowest value in the array
    double getLowestValue() const
    {
        double lowest = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] < lowest)
            {
                lowest = array[i];
            }
        }
        return lowest;
    }

    // Function to return the average of all numbers in the array
    double getAverage() const
    {
        if (size == 0)
        {
            return 0.0;
        }
        double sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += array[i];
        }
        return sum / size;
    }
};

int main()
{
    int arraySize;
    cout << "Enter the size of the number array: ";
    cin >> arraySize;

    NumberArray arr(arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        double value;
        cout << "Enter a number for element " << i << ": ";
        cin >> value;
        arr.setElement(i, value);
    }

    cout << "Highest value: " << arr.getHighestValue() << endl;
    cout << "Lowest value: " << arr.getLowestValue() << endl;
    cout << "Average: " << arr.getAverage() << endl;

    return 0;
}
