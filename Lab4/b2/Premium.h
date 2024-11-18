#ifndef PREMIUM_H
#define PREMIUM_H
#include "Room.h"
class Premium : public Room {
private:
    int PhiDichVu;
public:
    Premium();
    Premium(int, int);
    long long TinhTien();
    void Xuat();
};
#endif