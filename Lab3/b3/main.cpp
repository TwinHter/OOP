#include "ThoiGian.h"
#include <iostream>
using namespace std;

int main() 
{
    ThoiGian t1, t2;
    cout << "Nhap thoi diem thu 1:" << endl;
    cin >> t1;
    cout << "Nhap thoi diem thu 2:" << endl;
    cin >> t2;

    cout << "Thoi diem thu 1 = " << t1 << endl;
    cout << "Thoi diem thu 2 = " << t2 << endl;
    cout << "t1 + 1 (t1++) = " << t1++ << endl;
    cout << "t2 - 1 (t1--) = " << t2-- << endl;
    cout << "t1 + t2 = " << t1 + t2 << endl;
    cout << "t1 - t2 = " << t1 - t2 << endl;
    cout << "t1 > t2 = " << (t1 > t2 ? "True" : "False") << endl;
    cout << "t1 < t2 = " << (t1 < t2 ? "True" : "False") << endl;
    cout << "t1 >= t2 = " << (t1 >= t2 ? "True" : "False") << endl;
    cout << "t1 <= t2 = " << (t1 <= t2 ? "True" : "False") << endl;
    cout << "t1 == t2 = " << (t1 == t2 ? "True" : "False") << endl;
    cout << "t1 != t2 = " << (t1 != t2 ? "True" : "False") << endl;

    int fGiay, bGiay;
    cout << "Nhap so giay muon tinh tien va lui lai:" << endl;
    cin >> fGiay >> bGiay;
    cout << "t1 + " << fGiay << " = " << t1 + fGiay << endl;
    cout << "t1 - " << bGiay << " = " << t1 - bGiay << endl;
    cout << "t2 + " << fGiay << " = " << t2 + fGiay << endl;
    cout << "t2 - " << bGiay << " = " << t2 - bGiay << endl;
    return 0;
}
