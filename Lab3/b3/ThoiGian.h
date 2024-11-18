#ifndef THOIGIAN_H
#define THOIGIAN_H
#include <iostream>
class ThoiGian
{
private:
    int iGio;
    int iPhut;
    int iGiay;
public:
    ThoiGian();
    ThoiGian(int, int, int);
    int TinhGiay() const; // Tính số giây tương ứng với thời gian
    static ThoiGian TinhLaiGio(int giay)  // Tính thời gian tương ứng với số giây
    {
        ThoiGian ans;
        ans.iGio = giay / 3600;
        ans.iPhut = (giay % 3600) / 60;
        ans.iGiay = giay % 60;
<<<<<<< HEAD
=======
        ans.iGio %= 24;
>>>>>>> c03f776 (.)
        return ans;
    }
    ThoiGian operator+(const int&) const; // Cộng thời gian với số giây
    ThoiGian operator-(const int&) const; // Trừ thời gian với số giây
    ThoiGian operator+(const ThoiGian&) const; // Cộng 2 thời gian
    ThoiGian operator-(const ThoiGian&) const; // Trừ 2 thời gian
    ThoiGian& operator++(int); // Tăng thời gian 1 giây
    ThoiGian& operator--(int); // Giảm thời gian 1 giây
    bool operator==(const ThoiGian&) const; // So sánh bằng
    bool operator!=(const ThoiGian&) const; // So sánh khác nhau
    bool operator>(const ThoiGian&) const; // So sánh lớn hơn
    bool operator<(const ThoiGian&) const; // So sánh nhỏ hơn
    bool operator>=(const ThoiGian&) const; // So sánh lớn hơn hoặc bằng
    bool operator<=(const ThoiGian&) const; // So sánh nhỏ hơn hoặc bằng
    friend std::istream& operator>>(std::istream&, ThoiGian&); // Nhập thời gian
    friend std::ostream& operator<<(std::ostream&, const ThoiGian&); // Xuất thời gian
};
#endif