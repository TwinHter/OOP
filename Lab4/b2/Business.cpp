#include "Business.h"
#include<iostream>
Business::Business() {
    SoDem = 0;
    HeSo = 0;
    DoanhThuPhong = 0;
}
Business::Business(int SoDem): Room(SoDem) {
    HeSo = 300000;
    TinhTien();
}
long long Business::TinhTien() {
    DoanhThuPhong = SoDem * HeSo;
    if(SoDem < 0) {
        DoanhThuPhong = -1;
    }
    return DoanhThuPhong;
}
void Business::Xuat() {
    std::cout << "Thong tin phong Business" << std::endl;
    std::cout << "So dem: " << SoDem << " | " << "He so: " << HeSo << std::endl;
    Room::Xuat();
}