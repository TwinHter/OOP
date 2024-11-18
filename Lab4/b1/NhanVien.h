#ifndef NHANVIEN_H
#define NHANVIEN_H
#include<iostream>
using namespace std;
class NhanVien 
{
protected:
    string MSNV;
    string HoTen;
    double LuongCoBan;
public:
    NhanVien();
    NhanVien(string, string, double);
    virtual void Nhap();
    virtual void Xuat();
};
#endif