#include<bits/stdc++.h>
using namespace std;
class cPhanSo {
private:
    int tu, mau;
public:
    cPhanSo(int tu, int mau): tu(tu), mau(mau) {}
    void Show() {
        cout << tu << "/" << mau << endl;
    }
    double GiaTri() {
        return (double)tu / mau;
    }
    cPhanSo operator+(cPhanSo b) {
        cPhanSo c(0, 1);
        c.tu = tu * b.mau + b.tu * mau;
        c.mau = mau * b.mau;
        int g = gcd(c.tu, c.mau);
        c.tu /= g; c.mau /= g;
        return c;
    }
};
int main() {
    int tu1, tu2, mau1, mau2;
    cout << "Nhap tu so, mau so cua phan so thu 1: "; cin >> tu1 >> mau1;
    cout << "Nhap tu so, mau so cua phan so thu 2: "; cin >> tu2 >> mau2;

    if(mau1 == 0 || mau2 == 0) {
        cout << "Mau so phai khac 0" << endl;
        return 0;
    }
    cPhanSo a(tu1, mau1), b(tu2, mau2), c = a+b;
    cout << "Tong cua 2 phan so la: "; c.Show();
}