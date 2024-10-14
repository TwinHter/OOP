#include "TamGiac.h"
#include <math.h> // De dung M_PI
#include <iostream>
using namespace std;

TamGiac::TamGiac() {
    A = Diem();
    B = Diem();
    C = Diem();
}
TamGiac::TamGiac(Diem A, Diem B, Diem C) {
    this->A = A;
    this->B = B;
    this->C = C;
}
TamGiac::TamGiac(const TamGiac& x) {
    A = x.A;
    B = x.B;
    C = x.C;
}
void TamGiac::Xuat() {
    A.Xuat();
    B.Xuat();
    C.Xuat();
}
void TamGiac::Nhap() {
    cout << "Nhap toa do diem A. ";
    A.Nhap();
    cout << "Nhap toa do diem B. ";
    B.Nhap();
    cout << "Nhap toa do diem C. ";
    C.Nhap();
}
void TamGiac::TinhTien(float x, float y) {
    A.TinhTien(x, y);
    B.TinhTien(x, y);
    C.TinhTien(x, y);
}
void TamGiac::Quay(float goc) {
    float rad = goc*M_PI/180; // chuyen sang radian
    float xA = A.GetHoanhDo(), yA = A.GetTungDo();
    float xB = B.GetHoanhDo(), yB = B.GetTungDo();
    float xC = C.GetHoanhDo(), yC = C.GetTungDo();
    // xoay
    A.SetHoanhDo(xA * cos(rad) - yA * sin(rad));
    A.SetTungDo(xA * sin(rad) + yA * cos(rad));
    B.SetHoanhDo(xB * cos(rad) - yB * sin(rad));
    B.SetTungDo(xB * sin(rad) + yB * cos(rad));
    C.SetHoanhDo(xC * cos(rad) - yC * sin(rad));
    C.SetTungDo(xC * sin(rad) + yC * cos(rad));
}
void TamGiac::PhongTo(float k) {
    // Tang cac hoanh do va tung do moi diem len k lan
    A.SetHoanhDo(A.GetHoanhDo()*k);
    A.SetTungDo(A.GetTungDo()*k);
    B.SetHoanhDo(B.GetHoanhDo()*k);
    B.SetTungDo(B.GetTungDo()*k);
    C.SetHoanhDo(C.GetHoanhDo()*k);
    C.SetTungDo(C.GetTungDo()*k);
}
void TamGiac::ThuNho(float k) {
    PhongTo(1/k); // Phong To 1/k lan
}