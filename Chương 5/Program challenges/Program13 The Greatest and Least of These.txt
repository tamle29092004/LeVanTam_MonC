// chương trình nhập vào dãy số và cho biết số nào lớn nhất
#include <iostream>
#include <climits>

using namespace std;
int main()
{
    int number;
    int smallest = INT_MAX;//ban đầu nó là lớn nhất nên khi nhập nó sẻ so sánh các số 
    int largest = INT_MIN;//ban đầu nó là nhỏ nhất khi nhập vào số lớn hơn nó sẻ nhận là max

    
    while (true)
    {   
        cout << "Please Enter a number(-99 to ending ) : ";
        cin >> number;
        if (number == -99)//nhập -99 sẻ kết thúc chương trình
        {
            break;
        }

        if (number < smallest)//điều kiện số nhập vào nhỏ hơn giá min thì số đó là min
        {
            smallest = number;
        }
        if (number > largest)//nhập vào lớn hơn số trước thì đó là max
        {
            largest = number;
        }
    }
    
    cout << "The number largest is " << largest << endl;
    cout << "The number smallest is " << smallest << endl;
    return 0;
}
