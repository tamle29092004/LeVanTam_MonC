// chương trình tính tỷ lệ lấp đầy của 1 khách sạn
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    // số tầng , số người  trong mổi tầng, số phòng , tổng phòng , tổng số người trong khách sạn
    int floorOfHotel, numberOfpeople, numberRoom, totalroom = 0, totalpeople = 0;
    double peoppleOfRoom;
    cout << "Enter the number floor of hotel :  ";
    cin >> floorOfHotel;  // nhập số tầng
    if (floorOfHotel < 1) // kiểm tra nếu sai yêu cầu nhập lại
    {
        cout << "value invalid .Please Enter again : ";
        cin >> floorOfHotel;
    }
    for (int count = 1; count <= floorOfHotel; count++)
    {
        cout << "The floor " << count << " has number room : ";
        cin >> numberRoom; // nhập số phòng mổi tầng

        if (numberRoom < 10) // kiểm tra sai yêu cầu nhập lại
        {
            cout << "Please Can you enter a room number greater 10 :  ";
            cin >> numberRoom;
        }
        cout << "The number of people is : ";
        cin >> numberOfpeople; // nhập số người

        if (numberOfpeople < 1) // kiểm tra nếu sai yêu cầu nhập lại
        {
            cout << "Please Can you enter a people number  greater 10 :  ";
            cin >> numberOfpeople;
        }

        cout << "The Floor " << count << "has user is :"; // nhập số người đã sử dụng
        cin >> peoppleOfRoom;
        double perCentUser = (peoppleOfRoom / numberRoom) * 100; // tính tỷ lệ lấp đầy
        cout << fixed << showpoint << setprecision(2);           // làm tròn
        cout << "The percent  user of floor " << count << " is " << perCentUser << "%" << endl;

        totalpeople += numberOfpeople; // tổng số người
        totalroom += numberRoom;       // tổng số phòng
    }
    // in ra số phòng và số người
    cout << "The total room of hotel is: " << totalroom << endl;
    cout << "The total people of hotel is :" << totalpeople << endl;

    return 0;
}