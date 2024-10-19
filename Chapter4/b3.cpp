#include<bits/stdc++.h>
using namespace std;

class DonThuc {
private:
    int bac;
    int hs;
public:
    DonThuc(int bac=0, int hs=0): bac(bac), hs(hs) {};
    void Nhap() {
        cout << "Nhap bac: "; cin >> bac;
        cout << "Nhap he so: "; cin >> hs;
    }
    void Xuat() {
        cout << hs << "x^" << bac << endl;
    }
    int GiaTri(int x) {
        return hs*pow(x, bac);
    }
    DonThuc DaoHam() {
        DonThuc res(bac-1, hs*bac);
        return res;
    }
    DonThuc operator+(DonThuc &dt) {
        if(bac != dt.bac) {
            cout << "Khong the cong 2 don thuc khac bac" << endl;
            return DonThuc();
        }
        return DonThuc(bac, hs+dt.hs);
    }
};
int main() {
    DonThuc dt1, dt2;
    cout << "Nhap don thuc 1: " << endl;
    dt1.Nhap();
    cout << "Nhap don thuc 2: " << endl;
    dt2.Nhap();
    cout << "Don thuc 1: "; dt1.Xuat();
    cout << "Don thuc 2: "; dt2.Xuat();
    int x; 
    cout << "Nhap x cua don thuc 1: "; cin >> x;
    cout << "Gia tri don thuc 1 tai x = " << x << "la: " << dt1.GiaTri(2) << endl;
    cout << "Dao ham cua don thuc 1: "; dt1.DaoHam().Xuat();

    cout << "Nhap x cua don thuc 2: "; cin >> x;
    cout << "Gia tri don thuc 2 tai x = " << x << "la: " << dt2.GiaTri(2) << endl;
    cout << "Dao ham cua don thuc 2: "; dt2.DaoHam().Xuat();

    DonThuc tong = dt1+dt2;
    cout << "Tong 2 don thuc: "; tong.Xuat();
    return 0;
}