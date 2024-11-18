#include "Business.h"
#include<iostream>
Business::Business() {
    SoDem = 0;
    HeSo = 0;
    DoanhThuPhong = 0;
}
Business::Business(int SoDem) {
    this->SoDem = SoDem;
    HeSo = 300000;
}
long long Business::TinhTien() {
    DoanhThuPhong = SoDem * HeSo;
    return DoanhThuPhong;
}
void Business::Xuat() {
    std::cout << "Thong tin phong Business" << std::endl;
    std::cout << "So dem: " << SoDem << " | " << "He so: " << HeSo << std::endl;
    std::cout << "Doanh thu phong: " << DoanhThuPhong << std::endl;
}