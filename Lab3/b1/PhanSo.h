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
    PhanSo RutGon();
    PhanSo operator+(const PhanSo&);
    PhanSo operator-(const PhanSo&);
    PhanSo operator*(const PhanSo&);
    PhanSo operator/(const PhanSo&);
    long double Value() const;
    bool operator>(const PhanSo&);
    bool operator<(const PhanSo&);
    bool operator==(const PhanSo&);
    bool operator>=(const PhanSo&);
    bool operator<=(const PhanSo&);
    bool operator!=(const PhanSo&);
    friend std::istream& operator>>(std::istream&, PhanSo&);
    friend std::ostream& operator<<(std::ostream&, const PhanSo&);
};
#endif