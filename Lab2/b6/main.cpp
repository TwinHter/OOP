#include "Diem.h"
#include <iostream>
using namespace std;

int main() {
    Diem A, B, C;
    cout << "Nhap toa do cua tam giac (x1 y1 x2 y2 x3 y3):";
    A.Nhap(); B.Nhap(); C.Nhap();
    
    // Tinh tien tam giac
    float goc, d;
    cout << "Nhap huong va do dai tinh tien: "; cin >> goc >> d;
    A.TinhTien(goc, d);
    B.TinhTien(goc, d);
    C.TinhTien(goc, d);

    cout << "Toa do tam giac sau khi tinh tien: " << endl;
    A.Xuat(); B.Xuat(); C.Xuat();
    return 0;
}