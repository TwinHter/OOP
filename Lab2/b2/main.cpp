#include "TamGiac.h"
#include <iostream>
using namespace std;

int main() {
    TamGiac T1; // Constructor khong doi so
    TamGiac T2(Diem(0, 0), Diem(0, 2), Diem(2, 0)); // Constructor co doi so
    TamGiac T3(T2); // Constructor sao chep
    cout << "Nhap du lieu cho tam giac T1." ;
    T1.Nhap();

    cout << "Tam giac T1: "; T1.Xuat();
    cout << endl;
    cout << "Tam giac T2: "; T2.Xuat();
    cout << endl;
    cout << "Tam giac T3: "; T3.Xuat();
    cout << endl;

    cout << "Tinh tien len 2:"; T1.TinhTien(2, 2); 
    T1.Xuat(); cout << endl;
    cout << "Quay 90 do:"; T1.Quay(90); 
    T1.Xuat(); cout << endl;
    cout << "Phong to 2 lan:"; T1.PhongTo(2); 
    T1.Xuat(); cout << endl;
    cout << "Thu nho 4 lan:"; T1.ThuNho(4); 
    T1.Xuat(); cout << endl;
}