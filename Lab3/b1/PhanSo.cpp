#include<bits/stdc++.h>
#include "PhanSo.h"

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}
PhanSo::PhanSo(): iTu(0), iMau(1) {}
PhanSo::PhanSo(int a, int b): iTu(a), iMau(b) {}
int PhanSo::GetMauSo() const // Lay mau so
{
    return iMau;
}
PhanSo PhanSo::RutGon() // Rut gon phan so
{
    int g = gcd(iTu, iMau);
    if(g != 0) {
        if(iMau/g < 0) g = -g; // Xu ly truong hop mau so am
        iTu /= g;
        iMau /= g;
    }
    return *this;
}
long double PhanSo::Value() const // Gia tri thuc cua phan so
{
    return (long double)iTu/iMau;
}
PhanSo PhanSo::operator+(const PhanSo& ps) // Cong phan so
{
    return PhanSo(iTu*ps.iMau + iMau*ps.iTu, iMau*ps.iMau).RutGon();
}
PhanSo PhanSo::operator-(const PhanSo& ps) //  Tru phan so
{
    return PhanSo(iTu*ps.iMau - iMau*ps.iTu, iMau*ps.iMau).RutGon();
}
PhanSo PhanSo::operator*(const PhanSo& ps) // Nhan phan so
{
    return PhanSo(iTu*ps.iTu, iMau*ps.iMau).RutGon();
}
PhanSo PhanSo::operator/(const PhanSo& ps) // Chia phan so
{
    return PhanSo(iTu*ps.iMau, iMau*ps.iTu).RutGon();
}
bool PhanSo::operator>(const PhanSo& ps) // So sanh phan so lon hon
{
    return this->Value() > ps.Value();
}
bool PhanSo::operator<=(const PhanSo& ps) // So sanh phan so nho hon hoac bang
{
    return !(*this > ps);
}
bool PhanSo::operator<(const PhanSo& ps) // So sanh phan so nho hon
{
    return this->Value() < ps.Value();
}
bool PhanSo::operator>=(const PhanSo& ps) // So sanh phan so lon hon hoac bang
{
    return !(*this < ps);
}
bool PhanSo::operator==(const PhanSo& ps) // So sanh phan so bang nhau
{
    return this->iTu * ps.iMau == this->iMau * ps.iTu;
}
bool PhanSo::operator!=(const PhanSo& ps) // So sanh phan so khac nhau
{
    return !(*this == ps);
}
std::istream& operator>>(std::istream& is, PhanSo& ps) // Thao tac nhap
{
    std::cout << "Nhap tu so va mau so: "; 
    is >> ps.iTu >> ps.iMau;
    return is;
}
std::ostream& operator<<(std::ostream& os, const PhanSo& ps) // Thao tac xuat
{
    os << ps.iTu << "/" << ps.iMau;
    return os;
}