#include "Deluxe.h"
#include<iostream>
Deluxe::Deluxe() {
    SoDem = 0;
    HeSo = 0;
    DoanhThuPhong = 0;
    PhiDichVu = 0;
    PhiPhucVu = 0;
}
Deluxe::Deluxe(int SoDem, int PhiDichVu, int PhiPhucVu): Room(SoDem) {
    HeSo = 750000;
    this->PhiDichVu = PhiDichVu;
    this->PhiPhucVu = PhiPhucVu;
    TinhTien();
}
long long Deluxe::TinhTien() {
    DoanhThuPhong = SoDem * HeSo + PhiDichVu + PhiPhucVu;
    if(PhiDichVu < 0 || PhiPhucVu < 0 || SoDem < 0) {
        DoanhThuPhong = -1;
    }
    return DoanhThuPhong;
}
void Deluxe::Xuat() {
    std::cout << "Thong tin phong Deluxe" << std::endl;
    std::cout << "Phi dich vu: " << PhiDichVu << " | " << "Phi phuc vu: " << PhiPhucVu << std::endl;
    Room::Xuat();
}