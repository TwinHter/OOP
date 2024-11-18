#include "NhanVien.h"
#include <iostream>
#include <iomanip>
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
    if (LuongCoBan < 0) {
        throw std::runtime_error("Luong co ban phai lon hon hoac bang 0");
    }
}
void NhanVien::Xuat()
{
    cout << "MSNV: " << MSNV << " | ";
    cout << "Ho Ten: " << HoTen << endl;
    cout << "Luong Co Ban: " << fixed << setprecision(0) << LuongCoBan << " | ";
}
