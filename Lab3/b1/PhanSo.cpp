#include<bits/stdc++.h>
#include "PhanSo.h"

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}
PhanSo::PhanSo(): iTu(0), iMau(1) {}
PhanSo::PhanSo(int a, int b): iTu(a), iMau(b) {}
PhanSo PhanSo::RutGon()
{
    int g = gcd(iTu, iMau);
    if(g != 0) {
        if(iTu/g < 0) g = -g;
        iTu /= g;
        iMau /= g;
    }
    return RutGon();
}
long double PhanSo::Value() const
{
    return (long double)iTu/iMau;
}
PhanSo PhanSo::operator+(const PhanSo& ps)
{
    return PhanSo(iTu*ps.iMau + iMau*ps.iTu, iMau*ps.iMau).RutGon();
}
PhanSo PhanSo::operator-(const PhanSo& ps)
{
    return PhanSo(iTu*ps.iMau - iMau*ps.iTu, iMau*ps.iMau).RutGon();
}
PhanSo PhanSo::operator*(const PhanSo& ps)
{
    return PhanSo(iTu*ps.iTu, iMau*ps.iMau).RutGon();
}
PhanSo PhanSo::operator/(const PhanSo& ps)
{
    return PhanSo(iTu*ps.iMau, iMau*ps.iTu).RutGon();
}
bool PhanSo::operator>(const PhanSo& ps)
{
    return this->Value() > ps.Value();
}
bool PhanSo::operator<=(const PhanSo& ps)
{
    return !(*this > ps);
}
bool PhanSo::operator<(const PhanSo& ps)
{
    return this->Value() < ps.Value();
}
bool PhanSo::operator>=(const PhanSo& ps)
{
    return !(*this < ps);
}
bool PhanSo::operator==(const PhanSo& ps)
{
    return this->iTu * ps.iMau == this->iMau * ps.iTu;
}
bool PhanSo::operator!=(const PhanSo& ps) 
{
    return !(*this == ps);
}
std::istream& operator>>(std::istream& is, PhanSo& ps)
{
    std::cout << "Nhap tu so va mau so: "; 
    is >> ps.iTu >> ps.iMau;
    return is;
}
std::ostream& operator<<(std::ostream& os, const PhanSo& ps)
{
    os << ps.iTu << "/" << ps.iMau;
    return os;
}