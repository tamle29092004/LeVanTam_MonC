#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char firstName[50];
    char middleName[50];
    char lastName[50];
    char arrangedName[200];

    cout << "Nhap ten cua ban: ";
    cin.getline(firstName, sizeof(firstName));

    cout << "Nhap ten  dem cua ban : ";
    cin.getline(middleName, sizeof(middleName));

    cout << "Nhap ho cau ban: ";
    cin.getline(lastName, sizeof(lastName));

    // Sắp xếp tên theo định dạng được yêu cầu
    strcpy(arrangedName, lastName);
    strcat(arrangedName, ", ");
    strcat(arrangedName, firstName);
    strcat(arrangedName, " ");
    strcat(arrangedName, middleName);

    cout << "ten da duoc sap xep: " << arrangedName << endl;

    return 0;
}
