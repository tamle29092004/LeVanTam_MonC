//chương trình cấp phát động cơ bản 
#include <iostream>

using namespace std;

// Hàm cấp phát động một mảng số nguyên
int *allocateIntArray(int numElements)
{
    int *arr = new int[numElements]; // Cấp phát mảng số nguyên
    return arr;
}

int main()
{
    int numElements;

    cout << "Nhap so luong phan tu cua mang : ";
    cin >> numElements;

    int *dynamicArray = allocateIntArray(numElements); // Gọi hàm để cấp phát mảng

    // Bạn có thể sử dụng dynamicArray như một mảng thông thường với numElements phần tử.
    // Đừng quên giải phóng bộ nhớ khi bạn đã sử dụng xong nó.

    // Ví dụ: Khởi tạo mảng
    for (int i = 0; i < numElements; i++)
    {
        dynamicArray[i] = i * 2; // Điền dữ liệu vào mảng
    }

    // Ví dụ: In ra mảng
    cout << "Cac phan tu cua mang : ";
    for (int i = 0; i < numElements; i++)
    {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // Đừng quên giải phóng bộ nhớ đã cấp phát khi bạn đã xong việc với mảng
    delete[] dynamicArray;

    return 0;
}
