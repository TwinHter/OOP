#ifndef SOPHUC_H
#define SOPHUC_H
#include <iostream>
class SoPhuc
{
private:
    int dThuc;
    int dAo;
public:
    SoPhuc();
    SoPhuc(int, int);
    SoPhuc operator+(const SoPhuc&);
    SoPhuc operator-(const SoPhuc&);
    SoPhuc operator*(const SoPhuc&);
    SoPhuc operator/(const SoPhuc&);
    bool operator==(const SoPhuc&);
    bool operator!=(const SoPhuc&);
    friend std::istream& operator>>(std::istream&, SoPhuc&);
    friend std::ostream& operator<<(std::ostream&, const SoPhuc&);
};
#endif