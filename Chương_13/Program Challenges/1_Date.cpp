//hướng đối tượng cơ bản 
#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
    int thang; // Bien luu tru thang
    int ngay;  // Bien luu tru ngay
    int nam;   // Bien luu tru nam

public:
    // Constructor (Ham khoi tao) nhan cac gia tri thang, ngay, va nam
    Date(int m, int d, int y)
    {
        setThang(m); // Goi ham setThang de dam bao gia tri thang hop le
        setNgay(d);  // Goi ham setNgay de dam bao gia tri ngay hop le
        setNam(y);   // Gan gia tri nam
    }

    // Ham setter de dat gia tri thang
    void setThang(int m)
    {
        if (m >= 1 && m <= 12)
        {
            thang = m; // Neu gia tri thang hop le, gan cho bien thang
        }
        else
        {
            cout << "Thang khong hop le. Dang dat la 1 (Thang Mot)." << endl;
            thang = 1; // Mac dinh la Thang Mot neu gia tri khong hop le
        }
    }

    // Ham setter de dat gia tri ngay
    void setNgay(int d)
    {
        if (d >= 1 && d <= 31)
        {
            ngay = d; // Neu gia tri ngay hop le, gan cho bien ngay
        }
        else
        {
            cout << "Ngay khong hop le. Dang dat la 1." << endl;
            ngay = 1; // Mac dinh la 1 neu gia tri khong hop le
        }
    }

    // Ham setter de dat gia tri nam
    void setNam(int y)
    {
        nam = y; // Gan gia tri nam
    }

    // Ham inNgay1 de in ngay theo dinh dang "MM/DD/YYYY"
    void inNgay1()
    {
        cout << thang << "/" << ngay << "/" << nam << endl;
    }

    // Ham inNgay2 de in ngay theo dinh dang "Thang Ngay, Nam"
    void inNgay2()
    {
        const string cacThang[] = {
            "Thang Mot", "Thang Hai", "Thang Ba", "Thang Tu", "Thang Nam", "Thang Sau",
            "Thang Bay", "Thang Tam", "Thang Chin", "Thang Muoi", "Thang Muoi Mot", "Thang Muoi Hai"};
        cout << cacThang[thang - 1] << " " << ngay << ", " << nam << endl;
    }

    // Ham inNgay3 de in ngay theo dinh dang "Ngay Thang Nam"
    void inNgay3()
    {
        const string cacThang[] = {
            "Thang Mot", "Thang Hai", "Thang Ba", "Thang Tu", "Thang Nam", "Thang Sau",
            "Thang Bay", "Thang Tam", "Thang Chin", "Thang Muoi", "Thang Muoi Mot", "Thang Muoi Hai"};
        cout << ngay << " " << cacThang[thang - 1] << " " << nam << endl;
    }
};

int main()
{
    int m, d, y;

    cout << "Nhap thang: ";
    cin >> m;
    cout << "Nhap ngay: ";
    cin >> d;
    cout << "Nhap nam: ";
    cin >> y;

    Date ngay(m, d, y);

    cout << "Dinh dang 1: ";
    ngay.inNgay1();
    cout << "Dinh dang 2: ";
    ngay.inNgay2();
    cout << "Dinh dang 3: ";
    ngay.inNgay3();

    return 0;
}
