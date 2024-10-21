#include "NgayThangNam.h"
#include <iostream>

NgayThangNam::NgayThangNam(): iNgay(1), iThang(1), iNam(1) {
    if(IsNhuan(iNam)) NgaysInThang[2] = 29;
}
NgayThangNam::NgayThangNam(int ngay, int thang, int nam): iNgay(ngay), iThang(thang), iNam(nam) {
    if(IsNhuan(iNam)) NgaysInThang[2] = 29;
}
int NgayThangNam::TinhNgay() const // Tính thứ tự của ngày trong năm
{
    int ans = 0;
    for(int i=1; i<iThang; i++) ans += NgaysInThang[i];
    ans += iNgay;
    return ans;
}
NgayThangNam NgayThangNam::operator+(const int& ngay) const // Cộng thêm số ngày
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
NgayThangNam NgayThangNam::operator-(const int& ngay) const // Trừ đi số ngày
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
int NgayThangNam::operator-(const NgayThangNam& ngay) const // Trừ 2 ngày tháng năm -> ngay
{
    int ans = 0;
    if(iNam < ngay.iNam) {
        for(int i=iNam; i<ngay.iNam; i++) if(IsNhuan(i)) ans -= 366;
        else ans -= 365;
        ans += ngay.TinhNgay() - TinhNgay();
        return ans;
    }
    for(int i=ngay.iNam; i<iNam; i++) if(IsNhuan(i)) ans += 366;
    else ans += 365;
    ans += TinhNgay() - ngay.TinhNgay();
    return ans;
}
NgayThangNam& NgayThangNam::operator++(int) // Tăng 1 ngày
{
    *this = *this + 1;
    return *this;
}
NgayThangNam& NgayThangNam::operator--(int) // Giảm 1 ngày
{
    *this = *this - 1;
    return *this;
}
bool NgayThangNam::operator==(const NgayThangNam& ngay) const // So sánh bằng 
{
    return this->iNgay == ngay.iNgay && this->iThang == ngay.iThang && this->iNam == ngay.iNam;
}
bool NgayThangNam::operator!=(const NgayThangNam& ngay) const // So sánh khác nhau
{  
    return !(*this == ngay);
}
bool NgayThangNam::operator>(const NgayThangNam& ngay) const // So sánh lớn hơn
{
    return this->iNam > ngay.iNam || (this->iNam == ngay.iNam && this->TinhNgay() > ngay.TinhNgay());
}
bool NgayThangNam::operator<(const NgayThangNam& ngay) const // So sánh nhỏ hơn
{
    return this->iNam < ngay.iNam || (this->iNam == ngay.iNam && this->TinhNgay() < ngay.TinhNgay());
}
bool NgayThangNam::operator>=(const NgayThangNam& ngay) const // So sánh lớn hơn hoặc bằng
{
    return !(*this < ngay);
}
bool NgayThangNam::operator<=(const NgayThangNam& ngay) const // So sánh nhỏ hơn hoặc bằng
{
    return !(*this > ngay);
}
std::istream& operator>>(std::istream& is, NgayThangNam& ngay) // Nhập ngày tháng năm
{
    std::cout << "Nhap ngay thang nam (dd mm yyyy): ";
    is >> ngay.iNgay >> ngay.iThang >> ngay.iNam;
    return is;
}
std::ostream& operator<<(std::ostream& os, const NgayThangNam& ngay) // Xuất ngày tháng năm
{
    os << ngay.iNgay << "/" << ngay.iThang << "/" << ngay.iNam;
    return os;
}



