#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;    

public:
    void setName(string empName)
    {
        name = empName;
    }

    void setIdNumber(int empID)
    {
        idNumber = empID;
    }

    void setDepartment(string empDept)
    {
        department = empDept;
    }

    void setPosition(string empPosition)
    {
        position = empPosition;
    }

    string getName() const
    {
        return name;
    }

    int getIdNumber() const
    {
        return idNumber;
    }

    string getDepartment() const
    {
        return department;
    }

    string getPosition() const
    {
        return position;
    }
};

int main()
{
    Employee emp1, emp2, emp3;

    emp1.setName("Susan Meyers");
    emp1.setIdNumber(47899);
    emp1.setDepartment("Accounting");
    emp1.setPosition("Vice President");

    emp2.setName("Mark Jones");
    emp2.setIdNumber(39119);
    emp2.setDepartment("IT");
    emp2.setPosition("Programmer");

    emp3.setName("Joy Rogers");
    emp3.setIdNumber(81774);
    emp3.setDepartment("Manufacturing");
    emp3.setPosition("Engineer");

    cout << "Name\t\tID Number\tDepartment\tPosition" << endl;
    cout << emp1.getName() << "\t" << emp1.getIdNumber() << "\t" << emp1.getDepartment() << "\t" << emp1.getPosition() << endl;
    cout << emp2.getName() << "\t" << emp2.getIdNumber() << "\t" << emp2.getDepartment() << "\t" << emp2.getPosition() << endl;
    cout << emp3.getName() << "\t" << emp3.getIdNumber() << "\t" << emp3.getDepartment() << "\t" << emp3.getPosition() << endl;

    return 0;
}
