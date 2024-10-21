#include "SoPhuc.h"
#include <iostream>
SoPhuc::SoPhuc(): dThuc(0), dAo(0) {}
SoPhuc::SoPhuc(int a, int b): dThuc(a), dAo(b) {}
bool SoPhuc::IsZero() // Kiem tra so phuc co bang 0
{
    return dThuc == 0 && dAo == 0;
}
SoPhuc SoPhuc::operator+(const SoPhuc& sp) // Cong 2 so phuc
{
    return SoPhuc(dThuc + sp.dThuc, dAo + sp.dAo);
}
SoPhuc SoPhuc::operator-(const SoPhuc& sp) // Tru 2 so phuc
{
    return SoPhuc(dThuc - sp.dThuc, dAo - sp.dAo);
}
SoPhuc SoPhuc::operator*(const SoPhuc& sp) // Nhan 2 so phuc
{
    return SoPhuc(dThuc * sp.dThuc - dAo * sp.dAo, dThuc * sp.dAo + dAo * sp.dThuc); 
}
SoPhuc SoPhuc::operator/(const SoPhuc& sp) // Chia 2 so phuc
{
    double chia = sp.dThuc * sp.dThuc + sp.dAo * sp.dAo;
    return SoPhuc((dThuc * sp.dThuc + dAo * sp.dAo) / chia, (dAo * sp.dThuc - dThuc * sp.dAo) / chia);
}
bool SoPhuc::operator==(const SoPhuc& sp) // So sanh bang
{
    return dThuc == sp.dThuc && dAo == sp.dAo;
}
bool SoPhuc::operator!=(const SoPhuc& sp) // So sanh khac nhau
{
    return dThuc != sp.dThuc || dAo != sp.dAo;
}
std::istream& operator>>(std::istream &is, SoPhuc& sp) // Thao tac nhap
{
    std::cout << "Nhap phan thuc va phan ao: ";
    is >> sp.dThuc >> sp.dAo;
    return is;
}
std::ostream& operator<<(std::ostream &os, const SoPhuc& sp) // Thao tac xuat
{
    if(sp.dAo >= 0) os << sp.dThuc << " + " << sp.dAo << "i";
    else os << sp.dThuc << " - " << -sp.dAo << "i";
    return os;
}