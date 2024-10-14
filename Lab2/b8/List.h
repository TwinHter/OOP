#ifndef LIST_H
#define LIST_H
#include <vector>
class List {
private:
    int n;
    std::vector<double> elements;
public:
    List(int n = 0);
    List(const List& lst);
    void Xuat();
    void Nhap();
    void add(double x);
    void remove_first(double x);
    void remove_all(double x);
    void replace(int x, double y);
};
#endif