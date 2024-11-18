#include "KySu.h"
#include <iostream>
using namespace std;

KySu::KySu()
{
    SoGioLamThem = 0;
}
KySu::KySu(string MSNV, string HoTen, double LuongCoBan, int SoGioLamThem) : NhanVien(MSNV, HoTen, LuongCoBan)
{
    this->SoGioLamThem = SoGioLamThem;
}
void KySu::Nhap() 
{
    NhanVien::Nhap();
    cout << "Nhap So Gio Lam Them: ";
    cin >> SoGioLamThem;
}
void KySu::Xuat()
{
    NhanVien::Xuat();
    cout << "So Gio Lam Them: " << SoGioLamThem << endl;
    cout << "Tien Thuong: " << TienThuong() << endl; 
}
double KySu::TienThuong()
{
    return SoGioLamThem * 100000;
}