#include "DaGiac.h"
#include <iostream>
using namespace std;

int main() {
    DaGiac dagiac;
    dagiac.Nhap();
    dagiac.Xuat();
    cout << "Dien tich: " << dagiac.DienTich() << endl;
    return 0;
}