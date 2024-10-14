#include<iostream>
#include<vector>
#include "List.h"
using namespace std;
List::List(int n) {
    this->n = n;
    elements.resize(n);
}
List::List(const List& lst) {
    this->n = lst.n;
    this->elements = lst.elements;
}
void List::Xuat() {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << elements[i];
        if(i != n - 1) cout << ",";
    }
    cout << "]";
    cout << endl;
}
void List::Nhap() {
    cin >> n;
    elements.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> elements[i];
    }
}
void List::add(double x) {
    elements.push_back(x);
    n++;
}
void List::remove_first(double x) {
    vector<double>::iterator it = find(elements.begin(), elements.end(), x);
    if(it != elements.end()) {
        elements.erase(find(elements.begin(), elements.end(), x));
        n = elements.size();
    }
}
void List::remove_all(double x) {
    elements.erase(remove(elements.begin(), elements.end(), x), elements.end());
    n = elements.size();
}
void List::replace(int x, double y) {
    if(x > n) {
        cout << "x vuot qua gioi han List" << endl;
        return;
    }
    elements[x] = y;
}