#include "NgayThangNam.h"
#include <iostream>
using namespace std;
int main() 
{
    NgayThangNam d1, d2;
    cout << "Nhap ngay thang nam cua ngay 1 (dd mm yyyy): " << endl;
    cin >> d1;
    cout << "Nhap ngay thang nam cua ngay 2 (dd mm yyyy): " << endl;
    cin >> d2;

    cout << "Ngay 1: " << d1 << endl;
    cout << "Ngay 2: " << d2 << endl;
    d1++;
    cout << "Ngay 1 (++): " << d1 << endl;
    d2--;
    cout << "Ngay 2 (--): " << d2 << endl;
    cout << "Ngay 1 > Ngay 2: " << (d1 > d2 ? "True" : "False") << endl;
    cout << "Ngay 1 < Ngay 2: " << (d1 < d2 ? "True" : "False") << endl;
    cout << "Ngay 1 == Ngay 2: " << (d1 == d2 ? "True" : "False") << endl;
    cout << "Ngay 1 != Ngay 2: " << (d1 != d2 ? "True" : "False") << endl;
    cout << "Ngay 1 >= Ngay 2: " << (d1 >= d2 ? "True" : "False") << endl;
    cout << "Ngay 1 <= Ngay 2: " << (d1 <= d2 ? "True" : "False") << endl;
    cout << "Ngay 1 + Ngay 2: " << d1 + d2 << endl;
    cout << "Ngay 1 - Ngay 2: " << d1 - d2 << endl;

    int days = 0;
    cout << "Nhap so ngay muon cong them vao: "; cin >> days;
    cout << "Ngay 1 + " << days << " ngay: " << d1 + days << endl;
    cout << "Ngay 1 - " << days << " ngay: " << d1 - days << endl;
    cout << "Ngay 2 + " << days << " ngay: " << d2 + days << endl;
    cout << "Ngay 2 - " << days << " ngay: " << d2 - days << endl;


}