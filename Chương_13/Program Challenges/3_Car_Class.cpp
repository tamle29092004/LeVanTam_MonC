#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    int yearModel;  // Năm sản xuất của xe
    string make;    // Hãng sản xuất
    int speed;      // Tốc độ hiện tại của xe

public:
    // Hàm để thiết lập năm sản xuất và hãng sản xuất
    void setCar(int year, string carMake)
    {
        yearModel = year;
        make = carMake;
        speed = 0;
    }

    // Hàm getter để lấy năm sản xuất của xe
    int getYearModel() const
    {
        return yearModel;
    }

    // Hàm getter để lấy hãng sản xuất của xe
    string getMake() const
    {
        return make;
    }

    // Hàm getter để lấy tốc độ hiện tại của xe
    int getSpeed() const
    {
        return speed;
    }

    // Hàm tăng tốc độ của xe lên 5 đơn vị
    void accelerate()
    {
        speed += 5;
    }

    // Hàm giảm tốc độ của xe xuống 5 đơn vị
    void brake()
    {
        speed -= 5;
    }
};

int main()
{
    Car myCar;
    
    // Gọi hàm để thiết lập năm sản xuất và hãng sản xuất
    myCar.setCar(2023, "Toyota");

    cout << "Nam san xuat xe: " << myCar.getYearModel() << endl;
    cout << "Hang san xuat: " << myCar.getMake() << endl;

    for (int i = 0; i < 5; i++)
    {
        myCar.accelerate();
        cout << "Toc do hien tai: " << myCar.getSpeed() << " mph" << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        myCar.brake();
        cout << "Toc do hien tai: " << myCar.getSpeed() << " mph" << endl;
    }

    return 0;
}
