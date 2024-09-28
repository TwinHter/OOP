#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
    int tu, mau;
};
double val(PhanSo a) { // Chuyen doi phan so ve dang so thuc
    return (double)a.tu/a.mau;
}
int main() {
    PhanSo a, b;
    cout << "Nhap phan so thu 1: "; cin >> a.tu >> a.mau;
    cout << "Nhap phan so thu 2: "; cin >> b.tu >> b.mau;   
    if(a.mau == 0 || b.mau == 0) {
        cout << "Mau so khong the bang 0";
        return 0;
    }
    if(val(a) > val(b)) {
        cout << "Phan so a lon hon phan so b";
    }
    else {
        if(val(b) > val(a)) {
            cout << "Phan so a nho hon phan so b";
        }
        else {
            cout << "Phan so a bang phan so b";
        }
    }
}