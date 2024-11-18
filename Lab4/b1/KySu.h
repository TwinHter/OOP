#ifndef KYSU_H
#define KYSU_H
#include "NhanVien.h"
#include <iostream>
using namespace std;

class KySu : public NhanVien
{
private:
    int SoGioLamThem;
public:
    KySu();
    KySu(string, string, double, int);
    void Nhap();
    void Xuat();
    double TienThuong();
};
#endif