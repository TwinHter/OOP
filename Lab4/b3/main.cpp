#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int slBo, slCuu, slDe;
    cout << "Nhap so luong bo: "; cin >> slBo;
    cout << "Nhap so luong cuu: "; cin >> slCuu;
    cout << "Nhap so luong de: "; cin >> slDe;
    Bo bo(slBo);
    De de(slDe);
    Cuu cuu(slCuu);

    cout << "Dan suc vat dang bi doi !!!" << endl;
    bo.Keu();
    de.Keu();
    cuu.Keu();

    cout << "Thong tin gia suc: " << endl;
    bo.Xuat();
    de.Xuat();
    cuu.Xuat();

    return 0;
}