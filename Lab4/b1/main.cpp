#include "QuanLy.h"
#include "KySu.h"
#include <iostream>
using namespace std;
int main() 
{
    cout << "Nhap thong tin cua Quan Ly: " << endl;
    QuanLy ql;
    ql.Nhap();
    cout << "Nhap thong tin cua Ky Su: " << endl;
    KySu ks;
    ks.Nhap();

    cout << "Thong tin cua Quan Ly: " << endl;
    ql.Xuat();
    cout << "Thong tin cua Ky Su: " << endl;
    ks.Xuat();
}