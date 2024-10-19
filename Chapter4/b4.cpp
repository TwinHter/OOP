#include<bits/stdc++.h>
using namespace std;
class DaThuc {
private:
    int bac;
    vector<int> hs;
public:
    DaThuc(int bac=0): bac(bac) {
        hs.resize(bac+1);
    }
    void Nhap() {
        for (int i = 0; i <= bac; i++) {
            cout << "Nhap he so bac " << i << ": "; cin >> hs[i];
        }
    }
    void Xuat() {
        for (int i = 0; i <= bac; i++) {
            if(hs[i] == 0) continue;
            if(hs[i] > 0 && i > 0) cout << "+";
            cout << hs[i] << "x^" << i;
        }
        cout << endl;
    }
    long long GiaTri(int x) {
        long long res = 0;
        for (int i = 0; i <= bac; i++) {
            res += hs[i]*pow(x, i);
        }
        return res;
    }
    DaThuc operator+(DaThuc &dt) {
        DaThuc res(max(bac, dt.bac));
        for (int i = 0; i <= res.bac; i++) {
            int a = 0, b = 0;
            if(i <= bac) a = hs[i];
            if(i <= dt.bac) b = dt.hs[i];
            res.hs[i] = hs[i] + dt.hs[i];
        }
        return res;
    }
    DaThuc operator-(DaThuc &dt) {
        DaThuc res(max(bac, dt.bac));
        for (int i = 0; i <= res.bac; i++) {
            int a = 0, b = 0;
            if(i <= bac) a = hs[i];
            if(i <= dt.bac) b = dt.hs[i];
            res.hs[i] = hs[i] - dt.hs[i];
        }
        return res;
    }
};
int main() {
    int bac1, bac2;
    DaThuc dt1, dt2;
    cout << "Nhap bac cua da thuc 1: "; cin >> bac1;
    dt1 = DaThuc(bac1);
    dt1.Nhap();

    cout << "Nhap bac cua da thuc 2: "; cin >> bac2;
    dt2 = DaThuc(bac2);
    dt2.Nhap();

    cout << "Da thuc 1: "; dt1.Xuat();
    cout << "Da thuc 2: "; dt2.Xuat();

    int x;
    cout << "Nhap gia tri x cho da thuc 1: "; cin >> x;
    cout << "Gia tri cua da thuc 1 tai x = " << x << " la: " << dt1.GiaTri(x) << endl;

    cout << "Nhap gia tri x cho da thuc 2: "; cin >> x;
    cout << "Gia tri cua da thuc 2 tai x = " << x << " la: " << dt2.GiaTri(x) << endl;

    DaThuc tong = dt1 + dt2;
    cout << "Tong cua 2 da thuc: "; tong.Xuat();
}