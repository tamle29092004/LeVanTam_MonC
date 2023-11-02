//chương trình tính c sang f 
#include <iostream>
using namespace std;

int main() {
    cout << "Bảng chuyển đổi nhiệt độ từ độ C sang độ F:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "   doC       doF" << endl;
    
    
    for (int celsius = 0; celsius <= 20; celsius++) {
        double fahrenheit = celsius * 9.0 / 5.0 + 32.0;//đổi độ f từ độ c 
    
        cout << "   " << celsius << "        " << fahrenheit << endl;
    }

    return 0;
}
