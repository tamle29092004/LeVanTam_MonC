//chương trình hiện ascII

#include <iostream>
using namespace std;

int main()
{
    int charactersPerLine = 16; // Số ký tự trên mỗi dòng

    for (int asciiValue = 0; asciiValue <= 127; asciiValue++)
    {
        // In ra ký tự tương ứng với mã ASCII
        cout << static_cast<char>(asciiValue) << ' ';

        // Nếu đã in đủ số ký tự cho mỗi dòng, xuống dòng
        if ((asciiValue + 1) % charactersPerLine == 0)
        {
            cout << endl;
        }
    }

    return 0;
}
