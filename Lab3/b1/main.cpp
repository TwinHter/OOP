#include "PhanSo.h"
#include<iostream>
using namespace std;

int main() {
    PhanSo a, b;
    cout << "Nhap phan so a." << endl;
    cin >> a;
    cout << "Nhap phan so b." << endl;
    cin >> b;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a > b: " << (a > b ? "True" : "False") << endl;
    cout << "a < b: " << (a < b ? "True" : "False") << endl;
    cout << "a == b: " << (a == b ? "True" : "False") << endl;
    cout << "a >= b: " << (a >= b ? "True" : "False") << endl;
    cout << "a <= b: " << (a <= b ? "True" : "False") << endl;
    cout << "a != b: " << (a != b ? "True" : "False") << endl;
    return 0;
}