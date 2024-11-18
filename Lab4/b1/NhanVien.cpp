#include "NhanVien.h"
#include <iostream>
using namespace std;

NhanVien::NhanVien()
{
    MSNV = "";
    HoTen = "";
    LuongCoBan = 0;
}
NhanVien::NhanVien(string MSNV, string HoTen, double LuongCoBan)
{
    this->MSNV = MSNV;
    this->HoTen = HoTen;
    this->LuongCoBan = LuongCoBan;
}
void NhanVien::Nhap()
{
    cout << "Nhap MSNV: ";
    cin >> MSNV;
    cout << "Nhap Ho Ten: ";
    cin.ignore();
    getline(cin, HoTen);
    cout << "Nhap Luong Co Ban: ";
    cin >> LuongCoBan;
}
void NhanVien::Xuat()
{
    cout << "MSNV: " << MSNV << " | ";
    cout << "Ho Ten: " << HoTen << endl;
    cout << "Luong Co Ban: " << LuongCoBan << " | ";
}
