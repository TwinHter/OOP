#include<iostream>
using namespace std;

class PhanSo 
{
private:
    int tuSo;
    int mauSo;
public:
    PhanSo();
    PhanSo(int, int);
    ~PhanSo() {}
    void RutGon();
    PhanSo operator+(const PhanSo&);
    PhanSo operator-(const PhanSo&);
    friend ostream& operator<<(ostream& os, const PhanSo& ps);
    friend istream& operator>>(istream& is, PhanSo& ps);
};