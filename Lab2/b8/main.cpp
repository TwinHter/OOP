#include "List.h"
#include<iostream>
using namespace std;
int main() {
    List lst;
    lst.Nhap();
    cout << "List: "; lst.Xuat();

    bool isStop = false;
    while(!isStop) {
        int n; 
        cout << "Nhap chi thi: "; cin >> n;
        switch (n)
        {
            double x; int idx;
            case -1:
                isStop = true;
                break;
            case 0:
                cout << "Nhap x: "; cin >> x;
                lst.add(x);
                break;
            case 1:
                cout << "Nhap x: "; cin >> x;
                lst.remove_first(x);
                break;
            case 2:
                cout << "Nhap x: "; cin >> x;
                lst.remove_all(x);
                break;
            case 3:
                cout << "Nhap x va y: "; cin >> idx >> x;
                lst.replace(idx, x);
                break;
            
            default:
                break;
        } 
    }
    cout << "List sau khi thuc hien chi thi: " ; lst.Xuat();
}