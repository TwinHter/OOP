#include "ThiSinh.h"
#include <iostream>

using namespace std;

ThiSinh::ThiSinh(string name, string MSSV, int iNgay, int iThang, int iNam, float fToan, float fVan, float fAnh) {
    this->name = name;
    this->MSSV = MSSV;
    this->iNgay = iNgay;
    this->iThang = iThang;
    this->iNam = iNam;
    this->fToan = fToan;
    this->fVan = fVan;
    this->fAnh = fAnh;
}
void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: "; 
    cin.ignore(); getline(cin, name);
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;
    cout << "Nhap diem mon Toan: ";
    cin >> fToan;
    cout << "Nhap diem mon Van: ";
    cin >> fVan;
    cout << "Nhap diem mon Anh: ";
    cin >> fAnh;
}
void ThiSinh::Xuat() {
    cout << "Ten: " << name << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem Toan: " << fToan << " ";
    cout << "Diem Van: " << fVan << " ";
    cout << "Diem Anh: " << fAnh << " ";
    cout << "Tong diem: " << Tong() << endl;
}
float ThiSinh::Tong() {
    return fToan + fVan + fAnh;
}