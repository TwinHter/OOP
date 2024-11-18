#include "Deluxe.h"
#include<iostream>
Deluxe::Deluxe() {
    SoDem = 0;
    HeSo = 0;
    DoanhThuPhong = 0;
    PhiDichVu = 0;
    PhiPhucVu = 0;
}
Deluxe::Deluxe(int SoDem, int PhiDichVu, int PhiPhucVu) {
    this->SoDem = SoDem;
    HeSo = 750000;
    this->PhiDichVu = PhiDichVu;
    this->PhiPhucVu = PhiPhucVu;
}
long long Deluxe::TinhTien() {
    DoanhThuPhong = SoDem * HeSo + PhiDichVu + PhiPhucVu;
    return DoanhThuPhong;
}
void Deluxe::Xuat() {
    std::cout << "Thong tin phong Deluxe" << std::endl;
    std::cout << "So dem: " << SoDem << " | " << "He so: " << HeSo << std::endl;
    std::cout << "Phi dich vu: " << PhiDichVu << " | " << "Phi phuc vu: " << PhiPhucVu << std::endl;
    std::cout << "Doanh thu phong: " << DoanhThuPhong << std::endl;
}