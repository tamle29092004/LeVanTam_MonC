// chương trình hiện thị mực nước biển trong 25 năm tới
#include <iostream>

using namespace std;
int main()
{
    // mực nước biển tăng 1 năm
    double OceanLevel = 1.5,
           totalOceanLevel = 0;

    // in ra trong 25 năm tới
    for (int count = 1; count <= 25; count++)
    {
        totalOceanLevel += OceanLevel; // lượng nước tăng sau mổi năm
        cout << "The ocean level year " << count << " is " << totalOceanLevel << "mm" << endl;
    }
    return 0;
}