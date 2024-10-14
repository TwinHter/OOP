#ifndef DAGIAC_H
#define DAGIAC_H
#include "diem.h"
class DaGiac {
private:
    int n;
    Diem *Dinh;
public:
    DaGiac();
    DaGiac(int n);
    DaGiac(const DaGiac& x);
    void Nhap();
    void Xuat();
    void TinhTien(float x, float y);
    void Quay(float goc);
    void PhongTo(float k);
    void ThuNho(float k);
};
#endif