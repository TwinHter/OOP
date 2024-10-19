#include "NgayThangNam.h"
#include <iostream>

NgayThangNam::NgayThangNam(): iNgay(1), iThang(1), iNam(1) {
    if(IsNhuan(iNam)) NgaysInThang[2] = 29;
}
NgayThangNam::NgayThangNam(int ngay, int thang, int nam): iNgay(ngay), iThang(thang), iNam(nam) {
    if(IsNhuan(iNam)) NgaysInThang[2] = 29;
}
int NgayThangNam::TinhNgay() const
{
    int ans = 0;
    for(int i=1; i<iThang; i++) ans += NgaysInThang[i];
    ans += iNgay;
    return ans;
}
NgayThangNam NgayThangNam::operator+(const int& ngay) const 
{
    NgayThangNam ans = *this;
    ans.iNgay += ngay;
    while(ans.iNgay > ans.NgaysInThang[iThang]) {
        ans.iNgay -= ans.NgaysInThang[iThang];
        ans.iThang += 1;
        if(ans.iThang > 12) {
            ans.iThang = 1;
            ans.iNam += 1;
            if(NgayThangNam::IsNhuan(ans.iNam)) ans.NgaysInThang[2] = 29;
            else ans.NgaysInThang[2] = 28;
        }
    }
    return ans;
}
NgayThangNam NgayThangNam::operator-(const int& ngay) const 
{
    NgayThangNam ans = *this;
    ans.iNgay -= ngay;
    while(ans.iNgay < 1) {
        ans.iThang -= 1;
        if(ans.iThang < 1) {
            ans.iThang = 12;
            ans.iNam -= 1;
            if(NgayThangNam::IsNhuan(ans.iNam)) ans.NgaysInThang[2] = 29;
            else ans.NgaysInThang[2] = 28;
        }
        ans.iNgay += NgaysInThang[ans.iThang];
    }
    return ans;
}
NgayThangNam NgayThangNam::operator+(const NgayThangNam& ngay) const 
{
    NgayThangNam ans = *this;
    ans.iNgay += ngay.iNgay; 
    ans.iThang += ngay.iThang;
    ans.iNam += ngay.iNam;
    ans.iNam += ans.iThang / 12;
    ans.iThang %= 12;
    if(ans.iThang == 0) {
        ans.iThang = 12;
        ans.iNam--;
    }
   while(ans.iNgay > ans.NgaysInThang[iThang]) {
        ans.iNgay -= ans.NgaysInThang[iThang];
        ans.iThang += 1;
        if(ans.iThang > 12) {
            ans.iThang = 1;
            ans.iNam += 1;
            if(NgayThangNam::IsNhuan(ans.iNam)) ans.NgaysInThang[2] = 29;
            else ans.NgaysInThang[2] = 28;
        }
    }
    return ans;
}
NgayThangNam NgayThangNam::operator-(const NgayThangNam& ngay) const 
{
    NgayThangNam ans = *this;
    ans.iNgay -= ngay.iNgay; 
    ans.iThang -= ngay.iThang;
    ans.iNam -= ngay.iNam;
    ans.iNam += ans.iThang / 12;
    ans.iThang %= 12;
    if(ans.iThang <= 0) {
        ans.iThang += 12; 
        ans.iNam--;
    }
    
    while(ans.iNgay < 1) {
        ans.iThang -= 1;
        if(ans.iThang < 1) {
            ans.iThang = 12;
            ans.iNam -= 1;
            if(NgayThangNam::IsNhuan(ans.iNam)) ans.NgaysInThang[2] = 29;
            else ans.NgaysInThang[2] = 28;
        }
        ans.iNgay += NgaysInThang[ans.iThang];
    }
    return ans;
}
NgayThangNam& NgayThangNam::operator++(int) 
{
    *this = *this + 1;
    return *this;
}
NgayThangNam& NgayThangNam::operator--(int) 
{
    *this = *this - 1;
    return *this;
}
bool NgayThangNam::operator==(const NgayThangNam& ngay) const 
{
    return this->iNgay == ngay.iNgay && this->iThang == ngay.iThang && this->iNam == ngay.iNam;
}
bool NgayThangNam::operator!=(const NgayThangNam& ngay) const 
{  
    return !(*this == ngay);
}
bool NgayThangNam::operator>(const NgayThangNam& ngay) const 
{
    return this->iNam > ngay.iNam || (this->iNam == ngay.iNam && this->TinhNgay() > ngay.TinhNgay());
}
bool NgayThangNam::operator<(const NgayThangNam& ngay) const 
{
    return this->iNam < ngay.iNam || (this->iNam == ngay.iNam && this->TinhNgay() < ngay.TinhNgay());
}
bool NgayThangNam::operator>=(const NgayThangNam& ngay) const 
{
    return !(*this < ngay);
}
bool NgayThangNam::operator<=(const NgayThangNam& ngay) const 
{
    return !(*this > ngay);
}
std::istream& operator>>(std::istream& is, NgayThangNam& ngay) 
{
    std::cout << "Nhap ngay thang nam (dd mm yyyy): ";
    is >> ngay.iNgay >> ngay.iThang >> ngay.iNam;
    return is;
}
std::ostream& operator<<(std::ostream& os, const NgayThangNam& ngay) 
{
    os << ngay.iNgay << "/" << ngay.iThang << "/" << ngay.iNam;
    return os;
}



