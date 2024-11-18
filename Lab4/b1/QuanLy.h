#ifndef QUANLY_H
#define QUANLY_H
#include "NhanVien.h"
#include<iostream>
using namespace std;
class QuanLy : public NhanVien
{
private:
    double TyLeThuong;
public:
    QuanLy();
    QuanLy(string, string, double, double);
    void Nhap();
    void Xuat();
    double TienThuong();
};

#endif