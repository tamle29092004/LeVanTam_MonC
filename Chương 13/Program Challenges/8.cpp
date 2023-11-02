#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    const double pi = 3.14159;

public:
    // Default constructor
    Circle()
    {
        radius = 0.0;
    }

    // Constructor with radius argument
    Circle(double r)
    {
        radius = r;
    }

    // Mutator function for radius
    void setRadius(double r)
    {
        radius = r;
    }

    // Accessor function for radius
    double getRadius() const
    {
        return radius;
    }

    // Calculate and return the area
    double getArea() const
    {
        return pi * radius * radius;
    }

    // Calculate and return the diameter
    double getDiameter() const
    {
        return radius * 2;
    }

    // Calculate and return the circumference
    double getCircumference() const
    {
        return 2 * pi * radius;
    }
};

int main()
{
    double userRadius;

    cout << "Enter the radius of the circle: ";
    cin >> userRadius;

    Circle myCircle(userRadius);

    cout << "Area: " << myCircle.getArea() << endl;
    cout << "Diameter: " << myCircle.getDiameter() << endl;
    cout << "Circumference: " << myCircle.getCircumference() << endl;

    return 0;
}
