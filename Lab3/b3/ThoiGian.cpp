#include "ThoiGian.h"
#include <iostream>
#include <string>

ThoiGian::ThoiGian(): iGio(0), iPhut(0), iGiay(0) {}
ThoiGian::ThoiGian(int gio, int phut, int giay): iGio(gio), iPhut(phut), iGiay(giay) {}
int ThoiGian::TinhGiay() const
{
    return this->iGio * 3600 + this->iPhut * 60 + this->iGiay;
}
ThoiGian ThoiGian::operator+(const int& giay) const
{
    ThoiGian ans = *this;
    ans.iGiay += giay;
    ans.iPhut += ans.iGiay / 60;
    ans.iGiay %= 60;
    ans.iGio += ans.iPhut / 60;
    ans.iPhut %= 60;
    ans.iGio %= 24;
    return ans;
}
ThoiGian ThoiGian::operator-(const int& giay) const
{
    ThoiGian ans = *this;
    ans.iGiay -= giay;
    ans.iPhut += ans.iGiay / 60;
    ans.iGiay = ans.iGiay % 60;
    if(ans.iGiay < 0)
    {
        ans.iGiay += 60;
        ans.iPhut--;
    }
    ans.iGio += ans.iPhut / 60;
    ans.iPhut = ans.iPhut % 60;
    if(ans.iPhut < 0)
    {
        ans.iPhut += 60;
        ans.iGio--;
    }
    ans.iGio %= 24;
    if(ans.iGio < 0) ans.iGio += 24;
    return ans;
}
ThoiGian& ThoiGian::operator++(int)
{
    *this = *this + 1;
    return *this;
}
ThoiGian& ThoiGian::operator--(int)
{
    *this = *this - 1;
    return *this;
}

ThoiGian ThoiGian::operator+(const ThoiGian& t) const
{
    ThoiGian ans = *this;
    return ans + t.TinhGiay();
}
ThoiGian ThoiGian::operator-(const ThoiGian& t) const
{
    ThoiGian ans = *this;
    return ans - t.TinhGiay();
}
bool ThoiGian::operator==(const ThoiGian& t) const
{
    return this->TinhGiay() == t.TinhGiay();
}
bool ThoiGian::operator!=(const ThoiGian& t) const
{
    return this->TinhGiay() != t.TinhGiay();
}
bool ThoiGian::operator>(const ThoiGian& t) const
{
    return this->TinhGiay() > t.TinhGiay();
}
bool ThoiGian::operator<(const ThoiGian& t) const
{
    return this->TinhGiay() < t.TinhGiay();
}
bool ThoiGian::operator>=(const ThoiGian& t) const
{
    return this->TinhGiay() >= t.TinhGiay();
}
bool ThoiGian::operator<=(const ThoiGian& t) const
{
    return this->TinhGiay() <= t.TinhGiay();
}
std::istream& operator>>(std::istream& is, ThoiGian& t)
{
    std::cout << "Nhap gio, phut, giay (gio phut giay): ";
    is >> t.iGio >> t.iPhut >> t.iGiay;
    return is;
}
std::ostream& operator<<(std::ostream& os, const ThoiGian& t)
{
    std::string gio = std::to_string(t.iGio);
    std::string phut = std::to_string(t.iPhut);
    std::string giay = std::to_string(t.iGiay);
    if(t.iGio < 10) gio = "0" + gio;
    if(t.iPhut < 10) phut = "0" + phut;
    if(t.iGiay < 10) giay = "0" + giay;
    os << gio << ":" << phut << ":" << giay;
    return os;
}

