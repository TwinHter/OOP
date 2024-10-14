#ifndef DAGIAC_H
#define DAGIAC_H
#include "Diem.h"
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
    float DienTich();
};
#endif