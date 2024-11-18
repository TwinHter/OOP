#include "Premium.h"
#include<iostream>
Premium::Premium() {
    SoDem = 0;
    HeSo = 0;
    PhiDichVu = 0;
}
Premium::Premium(int SoDem, int PhiDichVu) {
    this->SoDem = SoDem;
    HeSo = 500000;
    this->PhiDichVu = PhiDichVu;
}
long long Premium::TinhTien() {
    DoanhThuPhong = SoDem * HeSo + PhiDichVu;
    return DoanhThuPhong;
}
void Premium::Xuat() {
    std::cout << "Thong tin phong Premium" << std::endl;
    std::cout << "So dem: " << SoDem << " | " << "He so: " << HeSo << std::endl;
    std::cout << "Phi dich vu: " << PhiDichVu << std::endl;
    std::cout << "Doanh thu phong: " << DoanhThuPhong << std::endl;
}