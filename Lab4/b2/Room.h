#ifndef ROOM_H
#define ROOM_H
#include <iostream>
class Room {
protected:
    int SoDem;
    int HeSo;
    long long DoanhThuPhong;
public:
    Room();
    Room(int);
    virtual void Xuat();
    long long GetDoanhThuPhong() {
        return DoanhThuPhong;
    }
};
#endif