#ifndef BUSINESS_H
#define BUSINESS_H
#include "Room.h"
class Business : public Room {
private:
public:
    Business();
    Business(int);
    long long TinhTien();
    void Xuat();
};
#endif