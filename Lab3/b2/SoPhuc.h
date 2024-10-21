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
    bool IsZero(); // Kiem tra so phuc co bang 0
    SoPhuc operator+(const SoPhuc&); // Cong 2 so phuc
    SoPhuc operator-(const SoPhuc&); // Tru 2 so phuc
    SoPhuc operator*(const SoPhuc&); // Nhan 2 so phuc
    SoPhuc operator/(const SoPhuc&); // Chia 2 so phuc
    bool operator==(const SoPhuc&); // So sanh bang nhau
    bool operator!=(const SoPhuc&); // So sanh khac nhau
    friend std::istream& operator>>(std::istream&, SoPhuc&); // Thao tac nhap
    friend std::ostream& operator<<(std::ostream&, const SoPhuc&); // Thao tac xuat
};
#endif