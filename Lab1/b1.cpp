#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
    int tu, mau;
};
PhanSo RutGon(PhanSo& a) { // Chuyen doi phan so ve dang so thuc
    int ucln = gcd(a.tu, a.mau);
    a.tu /= ucln;
    a.mau /= ucln;
    if(a.mau < 0) {
        a.tu *= -1;
        a.mau *= -1;
    }
    return a;
}
int main() {
    PhanSo a;
    cout << "Nhap phan so: "; cin >> a.tu >> a.mau;
    if(a.mau == 0) {
        cout << "Mau so khong the bang 0";
        return 0;
    }
    RutGon(a);
    cout << "Phan so toi gian: " << a.tu << "/" << a.mau;
}