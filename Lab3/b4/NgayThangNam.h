#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H
#include <iostream>
class NgayThangNam
{
private:
    int iNgay;
    int iThang;
    int iNam;
    int NgaysInThang[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
public:
    NgayThangNam();
    NgayThangNam(int, int, int);
    int TinhNgay() const;
    static bool IsNhuan(int nam) {
        return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
    }
    NgayThangNam operator+(const int&) const;
    NgayThangNam operator-(const int&) const;
    NgayThangNam operator+(const NgayThangNam&) const;
    NgayThangNam operator-(const NgayThangNam&) const;
    NgayThangNam& operator++(int) ;
    NgayThangNam& operator--(int) ;
    bool operator==(const NgayThangNam&) const;
    bool operator!=(const NgayThangNam&) const;
    bool operator>(const NgayThangNam&) const;
    bool operator<(const NgayThangNam&) const;
    bool operator>=(const NgayThangNam&) const;
    bool operator<=(const NgayThangNam&) const;
    friend std::istream& operator>>(std::istream&, NgayThangNam&); 
    friend std::ostream& operator<<(std::ostream&, const NgayThangNam&);
};
#endif