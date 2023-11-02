#include <iostream>
#include <string>

class SinhVien{
    private:
        string id, ten , tuoi;
        double gpa;
    public:
        SinhVien(string ,string , double);
        void xinchao();
        void nhap();
        void in(); 
        void dihoc();    
};
SinhVien::SinhVien(string ma, string name , double diem)
{
    cout << "Ham khoi tao cos tham duoc goi"<< endl;
    id = ma;
    ten= name;
    ns = birth;
    gpa = diem;
}
void SinhVien::nhap()
{
    
}
void SinhVien::xinchao()
{
    cout << "hello ban";
}
void SinhVien::dihoc()
{
    cout << "lo con chim ";
}
int main()
{
    SinhVien x("123","Nguyen Van A", 3.14);
    x.xinchao();
    x.dihoc();
    return 0 ;
}