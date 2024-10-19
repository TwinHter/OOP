#include "SoPhuc.h"
#include <iostream>
using namespace std;
int main()
{
    SoPhuc a, b;
    cout << "Nhap so phuc a." << endl;
    cin >> a;
    cout << "Nhap so phuc b." << endl;
    cin >> b;

    cout << "a + b = " << a + b << endl;   
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a == b: " << (a == b ? "True" : "False") << endl;
    cout << "a != b: " << (a != b ? "True" : "False") << endl;
    return 0;
}