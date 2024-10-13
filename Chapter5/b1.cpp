#include<bits/stdc++.h>
using namespace std;

class SoPhuc {
private:
    double thuc, ao;
public:
    SoPhuc() {
        Set(0, 0);
    }
    SoPhuc(double thuc, double ao) {
        Set(thuc, ao);
    }
    SoPhuc(double thuc) {
        Set(thuc, 0);
    }
    SoPhuc Set(double thuc, double ao) {
        this->thuc = thuc;
        this->ao = ao;
        return *this;
    }
    SoPhuc operator+(const SoPhuc& b) const {
        SoPhuc c;
        c.thuc = thuc + b.thuc;
        c.ao = ao + b.ao;
        return c;
    }
    SoPhuc operator-(const SoPhuc& b) const {
        SoPhuc c;
        c.thuc = thuc - b.thuc;
        c.ao = ao - b.ao;
        return c;
    }
    SoPhuc operator*(const SoPhuc& b) const {
        SoPhuc c;
        c.thuc = thuc * b.thuc - ao * b.ao;
        c.ao = thuc * b.ao + ao * b.thuc;
        return c;
    }
    SoPhuc operator/(const SoPhuc& b) const {
        if(b.thuc == 0 && b.ao == 0) {
            cout << "Khong the chia cho 0" << endl;
            return SoPhuc();
        }
        SoPhuc c;
        c.thuc = (thuc * b.thuc + ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
        c.ao = (ao * b.thuc - thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
        return c;
    }
    bool operator==(const SoPhuc& b) {
        return thuc == b.thuc && ao == b.ao;
    }
    friend ostream& operator<<(ostream& os, const SoPhuc& b) {
        os << b.thuc << "+" << b.ao << "i";
        return os;
    }
    friend istream& operator>>(istream& is, SoPhuc& b) {
        cout << "Nhap phan thuc: ";
        is >> b.thuc;
        cout << "Nhap phan ao: ";
        is >> b.ao;
        return is;
    }
};
int main() {
    SoPhuc a, b;
    cout << "Nhap so phuc a: " << endl;
    cin >> a;
    cout << "Nhap so phuc b: " << endl;
    cin >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a == b: " << (a == b ? "True" : "False") << endl;
    return 0;
}