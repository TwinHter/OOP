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
    std::cout << "So dem: " << SoDem << " | " << "He so: " << HeSo << " | ";
    if(DoanhThuPhong >= 0) std::cout << "Doanh thu phong: " << DoanhThuPhong << std::endl;
    if(DoanhThuPhong < 0) std::cout << "So dem, phi dich vu, phi phuc vu phai lon hon hoac bang 0" << std::endl;    
}