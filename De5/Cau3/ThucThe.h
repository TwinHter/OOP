#pragma once
#include<bits/stdc++.h>
using namespace std;

class ThucThe
{ 
protected:
    string name;
    int level;
    string nguyenTo;
public:
    ThucThe();
    ~ThucThe();
    virtual void Nhap();
    virtual int GayDame() = 0;
    int DanhNhau(ThucThe& other);
    string GetName() ;
};

