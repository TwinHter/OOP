#include "QuanLy.h"
#include <iostream>
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
}
void QuanLy::Xuat()
{
    NhanVien::Xuat();
    cout << "Ty Le Thuong: " << TyLeThuong << endl;
    cout << "Tien Thuong: " << TienThuong() << endl;
}
double QuanLy::TienThuong()
{
    return LuongCoBan * TyLeThuong;
}
