#include<bits/stdc++.h>
using namespace std;

class cArray {
private:
    int *arr;
    int sz;
public:
    cArray(int sz) {
        this->sz = sz;
        arr = new int[sz];
        for(int i=0; i<sz; i++) {
            arr[i] = rand() % 100;
        }
    }
    void Show() {
        for(int i=0; i<sz; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    int Count(int x) {
        int d = 0;
        for(int i=0; i<sz; i++) d += (arr[i] == x ? 1 : 0);
        return d;
    }
    bool IsDecreasing() {
        for(int i=1; i<sz; i++) {
            if(arr[i] > arr[i-1]) return false;
        }
        return true;
    }
    void SortIncreasing() {
        sort(arr, arr+sz);
    }
};
int main() {
    int n; 
    cout << "Nhap so phan tu: "; cin >> n;
    cArray a(n);
    a.Show();

    int x;
    cout << "Nhap phan tu muon xem so lan xuat hien: "; cin >> x;
    cout << a.Count(x) << '\n';

    cout << "Mang giam dan: " << (a.IsDecreasing()?"True":"False") << '\n';
    a.SortIncreasing();
    cout << "Sap xep tang dan: ";
    a.Show();
}