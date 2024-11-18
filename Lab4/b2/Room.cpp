#include "Room.h"

Room::Room() {
    SoDem = 0;
    HeSo = 0;
    DoanhThuPhong = 0;
}
Room::Room(int SoDem) {
    this->SoDem = SoDem;
    HeSo = 0;
    DoanhThuPhong = 0;
}
void Room::Xuat() {
    std::cout << "So dem: " << SoDem << " | " << "He so: " << HeSo << std::endl;
    std::cout << "Doanh thu phong: " << DoanhThuPhong << std::endl;
}