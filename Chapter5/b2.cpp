#include<bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    int tuso;
    int mauso;
public:
    PhanSo(int t=0, int m=1) {
        tuso = t;
        mauso = m;
    }
    PhanSo(const PhanSo& p) {
        tuso = p.tuso;
        mauso = p.mauso;
    }
    int LayTu() {
        return tuso;
    }
    int LayMau() {
        return mauso;
    }
    void GanTu(int t) {
        tuso = t;
    }
    void GanMau(int m) {
        mauso = m;
    }
    void Nhap() {
        cout << "Nhap tu so va mau so: ";
        cin >> tuso >> mauso;
    }
    void Xuat() {
        cout << tuso << "/" << mauso;
    }
    bool operator>(const PhanSo& p) const {
        return 1.0*tuso/mauso > 1.0*p.tuso/p.mauso;
    }
    PhanSo operator+(const PhanSo& p) const {
        PhanSo kq;
        kq.tuso = tuso*p.mauso + mauso*p.tuso;
        kq.mauso = mauso*p.mauso;
        return kq;
    }
    PhanSo operator-(const PhanSo& p) const {
        PhanSo kq;
        kq.tuso = tuso*p.mauso - mauso*p.tuso;
        kq.mauso = mauso*p.mauso;
        return kq;
    }
};
class DSPhanSo {
private:
    vector<PhanSo> ds;
public:
    DSPhanSo(int n = 0) {
        ds.resize(n);
        for(int i=0; i<n; i++) {
            ds[i].Nhap();
        }
    }
    PhanSo maximum() {
        if(ds.size() == 0) {
            cout << "Danh sach rong" << endl;
            return PhanSo();
        }
        PhanSo maxx = ds[0];
        for(int i=1; i<ds.size(); i++) {
            if(ds[i] > maxx) {
                maxx = ds[i];
            }
        }
        return maxx;
    }
    PhanSo Sum() {
        PhanSo ans(0, 1);
        for(int i=0; i<ds.size(); i++) {
            ans = ans + ds[i];
        }
        return ans;
    }
};
int main() {
    int n; 
    cout << "Nhap so luong phan so: "; cin >> n;

    DSPhanSo ds(n);
    cout << "Phan so lon nhat: "; ds.maximum().Xuat(); cout << endl;
    cout << "Tong cac phan so: "; ds.Sum().Xuat(); cout << endl;
}