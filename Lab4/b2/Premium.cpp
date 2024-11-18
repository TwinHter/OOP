#include "Premium.h"
#include<iostream>
Premium::Premium() {
    SoDem = 0;
    HeSo = 0;
    PhiDichVu = 0;
}
Premium::Premium(int SoDem, int PhiDichVu): Room(SoDem) {
    HeSo = 500000;
    this->PhiDichVu = PhiDichVu;
    if(PhiDichVu < 0) {
        throw new std::invalid_argument("Phi dich vu phai lon hon 0");
    }
    TinhTien();
}
long long Premium::TinhTien() {
    DoanhThuPhong = SoDem * HeSo + PhiDichVu;
    if(PhiDichVu < 0 || SoDem < 0) {
        DoanhThuPhong = -1;
    }
    return DoanhThuPhong;
}
void Premium::Xuat() {
    std::cout << "Thong tin phong Premium" << std::endl;
    std::cout << "Phi dich vu: " << PhiDichVu << std::endl;
    Room::Xuat();
}