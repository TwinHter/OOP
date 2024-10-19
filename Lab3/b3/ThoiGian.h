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
    int TinhGiay() const;
    static ThoiGian TinhLaiGio(int giay) 
    {
        ThoiGian ans;
        ans.iGio = giay / 3600;
        ans.iPhut = (giay % 3600) / 60;
        ans.iGiay = giay % 60;
        return ans;
    }
    ThoiGian operator+(const int&) const;
    ThoiGian operator-(const int&) const;
    ThoiGian operator+(const ThoiGian&) const;
    ThoiGian operator-(const ThoiGian&) const;
    ThoiGian& operator++(int);
    ThoiGian& operator--(int);
    bool operator==(const ThoiGian&) const;
    bool operator!=(const ThoiGian&) const;
    bool operator>(const ThoiGian&) const;
    bool operator<(const ThoiGian&) const;
    bool operator>=(const ThoiGian&) const;
    bool operator<=(const ThoiGian&) const;
    friend std::istream& operator>>(std::istream&, ThoiGian&);
    friend std::ostream& operator<<(std::ostream&, const ThoiGian&);
};
#endif