#include<bits/stdc++.h>
using namespace std;

class MaTran {
private:
    int n, m;
    vector<vector<int>> a;
public:
    MaTran(int n=0, int m=0):n(n), m(m) {
        a.resize(n, vector<int>(m));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                a[i][j] = rand() % 100;
            }
        }
    }
    MaTran operator+(const MaTran& b) const {
        if(n != b.n || m != b.m) {
            cout << "Khong the cong 2 ma tran" << endl;
            return MaTran(0, 0);
        }
        MaTran c(n, m);
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                c.a[i][j] = a[i][j] + b.a[i][j];
            }
        }
        return c;
    }
    MaTran operator-(const MaTran& b) const {
        if(n != b.n || m != b.m) {
            cout << "Khong the tru 2 ma tran" << endl;
            return MaTran(0, 0);
        }
        MaTran c(n, m);
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                c.a[i][j] = a[i][j] - b.a[i][j];
            }
        }
        return c;
    }
    friend istream& operator>>(istream& is, MaTran& b) {
        cout << "Nhap so hang va so cot: ";
        is >> b.n >> b.m;
        b.a.resize(b.n, vector<int>(b.m));
        for(int i=0; i<b.n; i++) {
            for(int j=0; j<b.m; j++) {
                cout << "Nhap phan tu a[" << i+1 << "][" << j+1 << "]: ";
                is >> b.a[i][j];
            }
        }
        return is;
    }
    friend ostream& operator<<(ostream& os, const MaTran& b) {
        for(int i=0; i<b.n; i++) {
            for(int j=0; j<b.m; j++) {
                os << b.a[i][j] << " "; //<< i << " " << j << " ";
            }
            os << endl;
        }
        return os;
    }
};
int main() {
    MaTran a, b;
    cout << "Nhap ma tran a. " << endl; cin >> a;
    cout << "Nhap ma tran b. " << endl; cin >> b;
    cout << "a=" << endl << a;
    cout << "b=" << endl << b;
    cout << "a+b=" << endl << a + b;
    cout << "a-b=" << endl << a - b;
}