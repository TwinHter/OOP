#ifndef THISINH_H
#define THISINH_H
#include<bits/stdc++.h>
using namespace std;
class ThiSinh {
private:
    string name;
    string MSSV;
    int iNgay;
    int iThang;
    int iNam;
    float fToan;
    float fVan;
    float fAnh;
public:
    ThiSinh(string name="", string MSSV="", int iNgay=0, int iThang=0, int iNam=0, float fToan=0, float fVan=0, float fAnh=0);
    void Nhap();
    void Xuat();
    float Tong();
};
#endif