#include "QuanLy.h"
#include <iostream>
#include <iomanip>
using namespace std;

QuanLy::QuanLy()
{
    TyLeThuong = 0;
}
QuanLy::QuanLy(string MSNV, string HoTen, double LuongCoBan, double TyLeThuong) : NhanVien(MSNV, HoTen, LuongCoBan)
{
    this->TyLeThuong = TyLeThuong;
}
void QuanLy::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap Ty Le Thuong: ";
    cin >> TyLeThuong;
    if(TyLeThuong < 0) {
        throw std::runtime_error("Ty le thuong phai lon hon hoac bang 0");
    }
}
void QuanLy::Xuat()
{
    NhanVien::Xuat();
    cout << "Ty Le Thuong: " << fixed << setprecision(2) << TyLeThuong << " | ";
    cout << "Tien Thuong: " << fixed << setprecision(2) << TienThuong() << endl;
}
double QuanLy::TienThuong()
{
    return TyLeThuong * LuongCoBan;
}
