#include "KySu.h"
#include <iostream>
#include <iomanip>
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
    if(SoGioLamThem < 0) {
        throw std::runtime_error("So gio lam them phai lon hon hoac bang 0");
    }
}
void KySu::Xuat()
{
    NhanVien::Xuat();
    cout << "So Gio Lam Them: " << SoGioLamThem << " | ";
    cout << "Tien Thuong: " << fixed << setprecision(0) << TienThuong() << endl;
}
double KySu::TienThuong()
{
    return SoGioLamThem * 100000;
}