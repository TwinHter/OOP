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
    int TinhNgay() const; // Tính thứ tự của ngày trong năm
    static bool IsNhuan(int nam) // Kiểm tra năm nhuận
    {
        return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
    }
    NgayThangNam operator+(const int&) const; // Cộng thêm số ngày
    NgayThangNam operator-(const int&) const; // Trừ đi số ngày
    int operator-(const NgayThangNam&) const; // Trừ 2 ngày tháng năm -> ngày
    NgayThangNam& operator++(int) ; // Tăng 1 ngày
    NgayThangNam& operator--(int) ; // Giảm 1 ngày
    bool operator==(const NgayThangNam&) const; // So sánh bằng
    bool operator!=(const NgayThangNam&) const; // So sánh khác nhau
    bool operator>(const NgayThangNam&) const; // So sánh lớn hơn
    bool operator<(const NgayThangNam&) const; // So sánh nhỏ hơn
    bool operator>=(const NgayThangNam&) const; // So sánh lớn hơn hoặc bằng
    bool operator<=(const NgayThangNam&) const; // So sánh nhỏ hơn hoặc bằng
    friend std::istream& operator>>(std::istream&, NgayThangNam&); // Nhập ngày tháng năm
    friend std::ostream& operator<<(std::ostream&, const NgayThangNam&); // Xuất ngày tháng năm
};
#endif