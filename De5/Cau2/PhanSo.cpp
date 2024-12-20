#include "PhanSo.h"
#include<bits/stdc++.h>
using namespace std;

PhanSo::PhanSo()
{
    tuSo = 0;
    mauSo = 1;
}
PhanSo::PhanSo(int tuSo, int mauSo = 1)
{
    this->tuSo = tuSo;
    this->mauSo = mauSo;
    RutGon();
}
void PhanSo::RutGon()
{
    int a = abs(tuSo), b = abs(mauSo);
    while(a * b != 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
    tuSo /= a + b;
    mauSo /= a + b;
}
PhanSo PhanSo::operator+(const PhanSo& ps)
{
    PhanSo temp;
    temp.tuSo = tuSo * ps.mauSo + ps.tuSo * mauSo;
    temp.mauSo = mauSo * ps.mauSo;
    temp.RutGon();
    return temp;
}
PhanSo PhanSo::operator-(const PhanSo& ps)
{
    PhanSo temp;
    temp.tuSo = tuSo * ps.mauSo - ps.tuSo * mauSo;
    temp.mauSo = mauSo * ps.mauSo;
    temp.RutGon();
    return temp;
}
ostream& operator<<(ostream& os, const PhanSo& ps)
{
    os << ps.tuSo << "/" << ps.mauSo;
    return os;
}
istream& operator>>(istream& is, PhanSo& ps)
{
    cout << "Nhap tu so, mau so: "; is >> ps.tuSo >> ps.mauSo;
    if(ps.mauSo == 0) {
        cout << "Mau so khong the bang 0, tu dong chuyen mau so ve 1" << endl;
        ps.mauSo = 1;
    }
    ps.RutGon();
    return is;
}