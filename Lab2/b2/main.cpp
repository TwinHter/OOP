#include "TamGiac.h"
#include <iostream>
using namespace std;

int main() {
    TamGiac T1; // Constructor khong doi so
    TamGiac T2(Diem(0, 0), Diem(0, 2), Diem(2, 0)); // Constructor co doi so
    TamGiac T3(T2); // Constructor sao chep
    cout << "Nhap du lieu cho tam giac T1." << endl;
    T1.Nhap();

    cout << "Tam giac T1: " << endl; T1.Xuat();
    cout << endl;
    cout << "Tam giac T2 tu constructor co doi so: " << endl; T2.Xuat();
    cout << endl;
    cout << "Tam giac T3 constructor tu T2: " << endl; T3.Xuat();
    cout << endl;

    cout << "Tinh tien T1 len (2, 2):"; T1.TinhTien(2, 2); 
    T1.Xuat(); cout << endl;
    cout << "Quay T1 90 do:" << endl; T1.Quay(90); 
    T1.Xuat(); cout << endl;
    cout << "Phong to T1 len 2 lan:" << endl; T1.PhongTo(2); 
    T1.Xuat(); cout << endl;
    cout << "Thu nho T1 di 4 lan:" << endl; T1.ThuNho(4); 
    T1.Xuat(); cout << endl;
}