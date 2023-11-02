// chương trình làm gia sư toán
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    unsigned seed = time(0);
    srand(seed);
    int number1 = rand() % 999 + 1;
    int number2 = rand() % 999 + 1;
    int correctAnswer, choice, answer;

    cout << "/tThere are the program caculate simple\n"
         << "-------------------------------------------\n"
         << "1.Two sum number \n "
         << "2.Subtract Two number\n"
         << "3.Multiply Two number\n"
         << "4.Divide Two Number\n"
         << "5.Quick program "
         << "Please Enter choice ( 1 to 5 ) : ";
    cin >> choice;

    if (choice > 5 || choice < 1)//kiểm tra nếu chọn ngoài đó sẻ báo lỏi
    {
        cout << "Error Please Enter again ";
        return 1;
    }
    else
    {
        switch (choice)//thực hiện theo từng lựa chọn
        {
        case 1:
            correctAnswer = number1 + number2;
            cout << "Please Enter the answer : " << number1 << " + " << number2 << " = ";
            cin >> answer;
            break;
        case 2:
            correctAnswer = number1 - number2;
            cout << "Please Enter the answer : " << number1 << " - " << number2 << " = ";
            cin >> answer;
            break;
        case 3:
            correctAnswer = number1 * number2;
            cout << "Please Enter the answer : " << number1 << " * " << number2 << " = ";
            cin >> answer;
            break;
        case 4:
            correctAnswer = number1 / number2;
            cout << "Please Enter the answer : " << number1 << " / " << number2 << " = ";
            cin >> answer;
            break;
        case 5:
            cout << "Program Ending.\n";
            return 1;
        }
        if (answer == correctAnswer)//kiểm tra nếu trả lời đúng sẻ báo đúng 
        {
            cout << "Congratulation! That good.\n";
        }
        else
        {
            cout << "No! it not correct. let's try again ";
        }
    }
    return 0;
}