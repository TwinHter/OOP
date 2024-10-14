#include "Diem.h"
#include <iostream>
using namespace std;
int main() {
    Diem d;
    d.Nhap();

    int n; cin >> n;

    // Xử lý n chỉ thị
    for (int i = 0; i < n; i++) {
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
            cin >> k >> x;
            d.TinhTien(k, x);
            break;
        default:
            break;
        }
    }

    // Xuất thông tin điểm sau khi thực hiện các chỉ thị
    d.Xuat();

    return 0;
}