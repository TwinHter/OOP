#ifndef PHANSO_H
#define PHANSO_H
#include <iostream>
class PhanSo
{
private:
    int iTu, iMau;
public:
    PhanSo();
    PhanSo(int, int);
    PhanSo RutGon(); // Rut gon phan so
    int GetMauSo() const; // Lay mau so
    PhanSo operator+(const PhanSo&); // Cong phan so
    PhanSo operator-(const PhanSo&); // Tru phan so
    PhanSo operator*(const PhanSo&); // Nhan phan so
    PhanSo operator/(const PhanSo&); // Chia phan so
    long double Value() const; // Gia tri thuc cua phan so
    bool operator>(const PhanSo&); // So sanh lon hon
    bool operator<(const PhanSo&); // So sanh nho hon
    bool operator==(const PhanSo&); // So sanh bang
    bool operator>=(const PhanSo&); // So sanh lon hon hoac bang
    bool operator<=(const PhanSo&); // So sanh nho hon hoac bang
    bool operator!=(const PhanSo&); // So sanh khac
    friend std::istream& operator>>(std::istream&, PhanSo&); // Thao tac nhap
    friend std::ostream& operator<<(std::ostream&, const PhanSo&); // Thao tac xuat
};
#endif