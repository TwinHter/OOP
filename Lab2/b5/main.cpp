#include "Diem.h"
#include <iostream>
using namespace std;
int main() {
    Diem d;
    cout << "Nhap toa do cua diem: " << endl;
    d.Nhap();

    int n;
    cout << "Nhap so luong chi thi: "; cin >> n;

    // Xử lý n chỉ thị
    for (int i = 0; i < n; i++) {
        cout << "Nhap chi thi: ";
        int x; cin >> x;

        switch (x)
        {
        case 1:
            d.NhanDoi();
            break;
        case 2:
            d.VeGocToaDo();
            break;
        case 3:
            int k; float x;
            cout << "Nhap k va x:"; cin >> k >> x;
            d.TinhTien(k, x);
            break;
        default:
            break;
        }
    }

    // Xuất thông tin điểm sau khi thực hiện các chỉ thị
    cout << "Toa do diem cuoi cung: ";
    d.Xuat();

    return 0;
}