#include <iostream>
#include <string>
using namespace std;

class PersonalInformation
{
private:
    string name;
    string address;
    int age;
    string phoneNumber;

public:
    void setName(string n)
    {
        name = n;
    }

    void setAddress(string a)
    {
        address = a;
    }

    void setAge(int ag)
    {
        age = ag;
    }

    void setPhoneNumber(string num)
    {
        phoneNumber = num;
    }

    string getName() const
    {
        return name;
    }

    string getAddress() const
    {
        return address;
    }

    int getAge() const
    {
        return age;
    }

    string getPhoneNumber() const
    {
        return phoneNumber;
    }
};

int main()
{
    PersonalInformation myInfo, friend1, friend2;

    myInfo.setName("Your Name");
    myInfo.setAddress("Your Address");
    myInfo.setAge(25);
    myInfo.setPhoneNumber("123-456-7890");

    friend1.setName("Friend 1");
    friend1.setAddress("Friend 1's Address");
    friend1.setAge(30);
    friend1.setPhoneNumber("111-222-3333");

    friend2.setName("Friend 2");
    friend2.setAddress("Friend 2's Address");
    friend2.setAge(28);
    friend2.setPhoneNumber("555-555-5555");

    cout << "My Information:\n";
    cout << "Name: " << myInfo.getName() << endl;
    cout << "Address: " << myInfo.getAddress() << endl;
    cout << "Age: " << myInfo.getAge() << endl;
    cout << "Phone Number: " << myInfo.getPhoneNumber() << endl;

    cout << "\nFriend 1's Information:\n";
    cout << "Name: " << friend1.getName() << endl;
    cout << "Address: " << friend1.getAddress() << endl;
    cout << "Age: " << friend1.getAge() << endl;
    cout << "Phone Number: " << friend1.getPhoneNumber() << endl;

    cout << "\nFriend 2's Information:\n";
    cout << "Name: " << friend2.getName() << endl;
    cout << "Address: " << friend2.getAddress() << endl;
    cout << "Age: " << friend2.getAge() << endl;
    cout << "Phone Number: " << friend2.getPhoneNumber() << endl;

    return 0;
}
