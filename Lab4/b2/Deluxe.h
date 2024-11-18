#ifndef DELUXE_H
#define DELUXE_H
#include "Room.h"
class Deluxe : public Room {
private:
    int PhiDichVu;
    int PhiPhucVu;
public:
    Deluxe();
    Deluxe(int, int, int);
    long long TinhTien();
    void Xuat();
};
#endif