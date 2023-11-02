#include <iostream>
#include <string>
using namespace std;

// Dinh nghia cau truc MovieData
struct MovieData
{
    string title;     // Tieu de
    string director;  // Dao dien
    int yearReleased; // Nam phat hanh
    int runningTime;  // Thoi luong (phut)
};

// Ham de hien thi thong tin phim
void hienThiThongTinPhim(const MovieData &movie)
{
    cout << "Tieu de: " << movie.title << endl;
    cout << "Dao dien: " << movie.director << endl;
    cout << "Nam phat hanh: " << movie.yearReleased << endl;
    cout << "Thoi luong: " << movie.runningTime << " phut" << endl;
    cout << endl;
}

int main()
{
    // Tao hai bien MovieData va khoi tao chung
    MovieData phim1 = {"Phim 1", "Dao dien 1", 2000, 120};
    MovieData phim2 = {"Phim 2", "Dao dien 2", 2010, 150};

    // Hien thi thong tin phim bang cach su dung ham
    cout << "Thong tin Phim 1:" << endl;
    hienThiThongTinPhim(phim1);

    cout << "Thong tin Phim 2:" << endl;
    hienThiThongTinPhim(phim2);

    return 0;
}
