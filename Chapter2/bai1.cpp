#include<bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    int tu, mau;
public:
    PhanSo(int tu, int mau): tu(tu), mau(mau) {
        if(mau == 0) {
            throw invalid_argument("Mau so khong the bang 0");
        }
        RutGon();
    }
    void RutGon() {
        int g = gcd(tu, mau);
        tu /= g; mau /= g;
        if(mau < 0) tu = -tu, mau = -mau;
    }
    string Show() {
        return to_string(tu) + "/" + to_string(mau);
    }
    PhanSo operator+(const PhanSo& that) {
        int ntu = tu*that.mau + mau*that.tu, nmau = mau*that.mau;
        return PhanSo(ntu, nmau);
    }
    PhanSo operator-(const PhanSo& that) {
        int ntu = tu*that.mau - mau*that.tu, nmau = mau*that.mau;
        return PhanSo(ntu, nmau);
    }
    PhanSo operator*(const PhanSo& that) {
        int ntu = tu*that.tu, nmau = mau*that.mau;
        return PhanSo(ntu, nmau);
    }
    PhanSo operator/(const PhanSo& that) {
        int ntu = tu*that.mau, nmau = mau*that.tu;
        return PhanSo(ntu, nmau);
    }
};
PhanSo Nhap() {
    int u, v; cin >> u >> v;
    return PhanSo(u, v);
}
int main() {
    cout << "Nhap phan so thu nhat: ";
    PhanSo ps1 = Nhap();
    cout << "Nhap phan so thu hai: ";
    PhanSo ps2 = Nhap();
    
    PhanSo tong = ps1+ps2;
    cout << "Tong la: " << tong.Show() << '\n';
    PhanSo hieu = ps1-ps2;
    cout << "Hieu la: " << hieu.Show() << '\n';
    PhanSo tich = ps1*ps2;
    cout << "Tich la: " << tich.Show() << '\n';
    PhanSo thuong = ps1/ps2;
    cout << "Thuong la: " << thuong.Show() << '\n';
}