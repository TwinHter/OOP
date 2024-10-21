#include "PhanSo.h"
#include<iostream>
using namespace std;

int main() {
    PhanSo a, b;
    cout << "Nhap phan so a." << endl;
    cin >> a;
    cout << "Nhap phan so b." << endl;
    cin >> b;
    if(a.GetMauSo() == 0 || b.GetMauSo() == 0) {
        cout << "Mau so khong the bang 0." << endl;
        return 0;
    }
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    if(b.Value() == 0) {
        cout << "Khong the chia cho 0." << endl;
    }
    else {
        cout << "a / b = " << a / b << endl;
    }
    cout << "a > b: " << (a > b ? "True" : "False") << endl;
    cout << "a < b: " << (a < b ? "True" : "False") << endl;
    cout << "a == b: " << (a == b ? "True" : "False") << endl;
    cout << "a >= b: " << (a >= b ? "True" : "False") << endl;
    cout << "a <= b: " << (a <= b ? "True" : "False") << endl;
    cout << "a != b: " << (a != b ? "True" : "False") << endl;
    return 0;
}