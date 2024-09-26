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
    void maximize(const PhanSo& that) {
        PhanSo hieu = *this - that;
        if(hieu.tu < 0) tu = that.tu, mau = that.mau;
    }
};
PhanSo Nhap() {
    int u, v; cin >> u >> v;
    return PhanSo(u, v);
}
int main() {
    vector<PhanSo> dayPs;
    int n; 
    cout << "Nhap so luong phan so: "; cin >> n;
    for(int i=1; i<=n; i++) {
        cout << "Nhap phan so thu " << i << ": ";
        dayPs.push_back(Nhap());
    }

    PhanSo maxx = dayPs[0], sum = dayPs[0];
    for(int i=1; i<n; i++) {
        maxx.maximize(dayPs[i]);
        sum = sum + dayPs[i];
    }

    cout << "Phan so lon nhat la: " << maxx.Show() << '\n';
    cout << "Tong cac phan so la: " << sum.Show();

}