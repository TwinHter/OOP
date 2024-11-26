#include "NhanVat.h"
#include "QuaiVat.h"
#include "ThucThe.h"
#include<bits/stdc++.h>
using namespace std;
class QuanLy
{
private:
    vector<ThucThe*> thucThe;
    int n;
public:
    QuanLy();
    ~QuanLy();
    void Nhap();
    void DameLonNhat();
    void DanhNhau();
};
