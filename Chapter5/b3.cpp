#include<bits/stdc++.h>
using namespace std;

class DaThuc {
private:
    vector<double> heso;
public:
    DaThuc(int bac = 0) {
        heso.resize(bac+1);
    }
    double Value(double x) {
        double res = 0;
        for(int i=0; i<heso.size(); i++) {
            res += heso[i] * pow(x, i);
        }
        return res;
    }
    DaThuc operator+(const DaThuc& b) const {
        DaThuc c(max(heso.size(), b.heso.size())-1);
        for(int i=0; i<c.heso.size(); i++) {
            c.heso[i] = (i < heso.size() ? heso[i] : 0) + (i < b.heso.size() ? b.heso[i] : 0);
        }
        return c;
    }
    DaThuc operator-(const DaThuc& b) const {
        DaThuc c(max(heso.size(), b.heso.size())-1);
        for(int i=0; i<c.heso.size(); i++) {
            c.heso[i] = (i < heso.size() ? heso[i] : 0) - (i < b.heso.size() ? b.heso[i] : 0);
        }
        return c;
    }
    friend ostream& operator<<(ostream& os, const DaThuc& b) {
        for(int i=b.heso.size()-1; i>=0; i--) {
            if(b.heso[i] != 0) {
                if(i == 0) {
                    os << b.heso[i];
                } else {
                    os << b.heso[i] << "x^" << i << " + ";
                }
            }
            else {
                if(i == 0) os << b.heso[i];
            }
        }
        return os;
    }
    friend istream& operator>>(istream& is, DaThuc& b) {
        cout << "Nhap bac cua da thuc: ";
        int bac; is >> bac;
        b.heso.resize(bac+1);
        for(int i=0; i<=bac; i++) {
            cout << "Nhap he so bac " << i << ": ";
            is >> b.heso[i];
        }
        return is;
    }
};
int main() {
    DaThuc a, b;
    cout << "Nhap da thuc a. "; cin >> a;
    cout << "Nhap da thuc b. "; cin >> b; 
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "a+b=" << a + b << endl;
    cout << "a-b=" << a - b << endl;
    double x; cout << "Nhap x: "; cin >> x;
    cout << "a:" << a.Value(x) << endl;
    cout << "b:" << b.Value(x) << endl;
    return 0;
}