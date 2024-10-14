#include "Diem.h"
#include <iostream>
using namespace std;

int main() {
    Diem A, B, C;
    // Nhap du lieu
    A.Nhap(); B.Nhap(); C.Nhap();
    float goc, d;
    cin >> goc >> d;
    // Tinh tien tam giac
    A.TinhTien(goc, d);
    B.TinhTien(goc, d);
    C.TinhTien(goc, d);

    // XUat ket qua
    A.Xuat(); B.Xuat(); C.Xuat();
    return 0;
}