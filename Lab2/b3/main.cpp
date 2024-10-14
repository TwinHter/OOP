#include "DaGiac.h"
#include <iostream>

using namespace std;

int main() {
    DaGiac dg;
    dg.Nhap();
    cout << "Da giac la: "; dg.Xuat();
    // Tinh tien da giac theo (-2, -1)
    dg.TinhTien(-2, -1);
    cout << "Da giac sau khi tinh tien (-2, -1): "; dg.Xuat();
    // Phong to da giac theo k = 2
    dg.PhongTo(2);
    cout << "Da giac sau khi phong to 2 lan: "; dg.Xuat();
    // Thu nho da giac  k = 4
    dg.ThuNho(4);
    cout << "Da giac sau khi thu nho 4 lan: "; dg.Xuat();
    // Quay da giac theo goc 90 do
    dg.Quay(90);
    cout << "Da giac sau khi quay 90 do: " ; dg.Xuat();
    return 0;
}