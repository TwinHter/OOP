#include "DaGiac.h"
#include <iostream>
#include <cmath>
using namespace std;

DaGiac::DaGiac() {
    n = 0;
    Dinh = NULL;
}
DaGiac::DaGiac(int n) {
    this->n = n;
    Dinh = new Diem[n];
    for(int i = 0; i < n; i++) {
        cout << "Nhap dinh thu " << i + 1 << endl;
        Dinh[i].Nhap();
    }
}
DaGiac::DaGiac(const DaGiac& x) {
    n = x.n;
    Dinh = new Diem[n];
    for(int i = 0; i < n; i++) {
        Dinh[i] = x.Dinh[i];
    }
}
void DaGiac::Nhap() {
    cin >> n;
    Dinh = new Diem[n];
    for(int i = 0; i < n; i++) {
        Dinh[i].Nhap();
    }
}
void DaGiac::Xuat() {
    for(int i = 0; i < n; i++) {
        Dinh[i].Xuat();
    }
    cout << endl;
}
float DaGiac::DienTich() {
    float s = 0;
    for(int i = 0; i < n; i++) {
        s += Dinh[i].iHoanh * Dinh[(i + 1) % n].iTung - Dinh[i].iTung * Dinh[(i + 1) % n].iHoanh;
    }
    return abs(s) / 2.0; // Dien tich la so duong
}
