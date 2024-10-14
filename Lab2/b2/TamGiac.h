#ifndef TAMGIAC_H
#define TAMGIAC_H
#include "diem.h"

class TamGiac {
private:
    Diem A, B, C;
public:
    TamGiac();
    TamGiac(Diem A, Diem B, Diem C);
    TamGiac(const TamGiac& x);
    void Xuat();
    void Nhap();
    void TinhTien(float x, float y);
    void Quay(float goc);
    void PhongTo(float k);
    void ThuNho(float k);
};
#endif