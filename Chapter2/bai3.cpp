#include<bits/stdc++.h>
using namespace std;

class Matrix {
private:
    int n, m;
    vector<vector<int>> a;
public :
    Matrix(int n, int m): n(n), m(m) {
        a.resize(n, vector<int>(m));
    }
    void Show() {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cout << a[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    void Input() {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> a[i][j];
            }
        }
    }
    Matrix operator+(const Matrix& that) {
        Matrix res(n, m);
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                res.a[i][j] = a[i][j] + that.a[i][j];
            }
        }
        return res;
    }
    Matrix operator-(const Matrix& that) {
        Matrix res(n, m);
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                res.a[i][j] = a[i][j] - that.a[i][j];
            }
        }
        return res;
    }
    Matrix operator*(const Matrix &that) {
        if(m != that.n) {
            throw invalid_argument("Khong the nhan hai ma tran nay");
        }
        Matrix res(n, that.m);
        for(int i=0; i<n; i++) {
            for(int j=0; j<that.m; j++) {
                for(int k=0; k<m; k++) {
                    res.a[i][j] += a[i][k] * that.a[k][j];
                }
            }
        }
        return res;
    }
};
Matrix Nhap() {
    int n, m; cin >> n >> m;
    Matrix res(n, m);
    res.Input();
    return res;
}
int main() {
    cout << "Nhap so hang va so cot cua ma tran 1 va cac gia tri: ";
    Matrix mt1 = Nhap();
    cout << "Nhap so hang va so cot cua ma tran 2 va cac gia tri: ";
    Matrix mt2 = Nhap();  

    Matrix tong = mt1 + mt2, hieu = mt1 - mt2, tich = mt1 * mt2;
    cout << "Tong la: \n"; tong.Show();
    cout << "Hieu la: \n"; hieu.Show();
    cout << "Tich la: \n"; tich.Show();
}