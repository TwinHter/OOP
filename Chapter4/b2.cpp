#include<bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    int tu, mau;
    friend class arrPhanSo;
public:
    PhanSo(int tu=0, int mau=1): tu(tu), mau(mau) {};
    static PhanSo Nhap() {
        int tu, mau;
        tu = rand()%100+1;
        mau = rand()%100+1;
        return PhanSo(tu, mau);
    }
    static void Xuat(PhanSo ps) {
        cout << ps.tu << "/" << ps.mau << endl;
    }
    bool checkTuSNT() {
        for(int i=2; i*i<=tu; i++) {
            if(tu % i == 0) return false;
        }
        return true;
    }
    bool operator>(PhanSo &ps) const {
        return this->tu*ps.mau > this->mau*ps.tu;
    }
    bool operator<(PhanSo &ps) const {
        return this->tu*ps.mau < this->mau*ps.tu;
    }
};
class arrPhanSo {
private:
    vector<PhanSo> arr;
    int n;
public:
    arrPhanSo(int n=0): n(n) {
        arr.resize(n);
        for (int i = 0; i < n; i++)
            arr[i] = PhanSo::Nhap();
    }
    void Xuat() {
        for (int i = 0; i < n; i++) {
            PhanSo::Xuat(arr[i]);
        }
    }

    PhanSo maxPS() {
        PhanSo maxx = arr[0];
        for (int i = 1; i < n; i++) {
            if(arr[i] > maxx) maxx = arr[i];
        }
        return maxx;
    }
    int countTuSNT() {
        int res = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i].checkTuSNT()) res++;
        }
        return res;
    }
    void Sort() {
        sort(arr.begin(), arr.end(), [](PhanSo a, PhanSo b) {
            return a < b;
        });
    }
};
int main() {
    int n;
    cout << "Nhap n: "; cin >> n;
    arrPhanSo arr(n);

    arr.Xuat();
    cout << "Phan so lon nhat la: "; PhanSo::Xuat(arr.maxPS());
    cout << "So luong phan so co tu so la so nguyen to: " << arr.countTuSNT() << endl;
    cout << "Cac phan so sau khi sap xep: " << endl;
    arr.Sort();
    arr.Xuat();

}