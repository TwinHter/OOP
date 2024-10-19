#include "SoPhuc.h"
#include <iostream>
SoPhuc::SoPhuc(): dThuc(0), dAo(0) {}
SoPhuc::SoPhuc(int a, int b): dThuc(a), dAo(b) {}
SoPhuc SoPhuc::operator+(const SoPhuc& sp)
{
    return SoPhuc(dThuc + sp.dThuc, dAo + sp.dAo);
}
SoPhuc SoPhuc::operator-(const SoPhuc& sp)
{
    return SoPhuc(dThuc - sp.dThuc, dAo - sp.dAo);
}
SoPhuc SoPhuc::operator*(const SoPhuc& sp)
{
    return SoPhuc(dThuc * sp.dThuc - dAo * sp.dAo, dThuc * sp.dAo + dAo * sp.dThuc); 
}
SoPhuc SoPhuc::operator/(const SoPhuc& sp)
{
    double chia = sp.dThuc * sp.dThuc + sp.dAo * sp.dAo;
    return SoPhuc((dThuc * sp.dThuc + dAo * sp.dAo) / chia, (dAo * sp.dThuc - dThuc * sp.dAo) / chia);
}
bool SoPhuc::operator==(const SoPhuc& sp)
{
    return dThuc == sp.dThuc && dAo == sp.dAo;
}
bool SoPhuc::operator!=(const SoPhuc& sp)
{
    return dThuc != sp.dThuc || dAo != sp.dAo;
}
std::istream& operator>>(std::istream &is, SoPhuc& sp)
{
    std::cout << "Nhap phan thuc va phan ao: ";
    is >> sp.dThuc >> sp.dAo;
    return is;
}
std::ostream& operator<<(std::ostream &os, const SoPhuc& sp)
{
    if(sp.dAo >= 0) os << sp.dThuc << " + " << sp.dAo << "i";
    else os << sp.dThuc << " - " << -sp.dAo << "i";
    return os;
}