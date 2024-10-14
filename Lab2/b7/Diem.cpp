#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
};
Diem::Diem(float iHoanh, float iTung) {
    this->iHoanh = iHoanh;
    this->iTung = iTung;
};
Diem::Diem(const Diem&x) {
    this->iHoanh = x.iHoanh;
    this->iTung = x.iTung;
};
void Diem::Xuat() {
    cout << "Toa do diem: (" << iHoanh << "," << iTung << ")" << endl;
}
void Diem::Nhap() {
    cout << "Nhap hoanh do va tung do: " ; cin >> iHoanh >> iTung;
}
float Diem::GetTungDo() {
    return iTung;
}
float Diem::GetHoanhDo() {
    return iHoanh;
}
void Diem::SetTungDo(float iTung) {
    this->iTung = iTung;
}
void Diem::SetHoanhDo(float iHoanh) {
    this->iHoanh = iHoanh;
}