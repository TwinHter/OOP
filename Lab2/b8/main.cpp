#include "List.h"
#include<iostream>
using namespace std;
int main() {
    List lst;
    lst.Nhap();

    bool isStop = false;
    while(!isStop) {
        int n; cin >> n;
        switch (n)
        {
            double x; int idx;
            case -1:
                isStop = true;
                break;
            case 0:
                cin >> x;
                lst.add(x);
                break;
            case 1:
                cin >> x;
                lst.remove_first(x);
                break;
            case 2:
                cin >> x;
                lst.remove_all(x);
                break;
            case 3:
                cin >> idx >> x;
                lst.replace(idx, x);
                break;
            
            default:
                break;
        } 
    }
    lst.Xuat();
}