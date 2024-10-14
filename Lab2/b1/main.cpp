#include "diem.h"
#include <iostream>
using namespace std;

int main() {
    Diem A; // Constructor khong tham so
    Diem B(1, 2); // Constructor co tham so
    Diem C(B); // Constructor sao chep
    A.Xuat();
    B.Xuat();
    C.Xuat();

    // Thay doi toa do diem A
    A.SetHoanhDo(3);
    A.SetTungDo(4);
    // Lay hoanh do va tung do cua A
    cout << "Hoanh do cua A: " << A.GetHoanhDo() << endl;
    cout << "Tung do cua A: " << A.GetTungDo() << endl;
    // Tinh tien diem A len (+2, +2)
    A.TinhTien(2, 2);
    A.Xuat();    
    return 0;
}