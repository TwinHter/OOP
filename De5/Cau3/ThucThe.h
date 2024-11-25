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
ThucThe::ThucThe() : name(""), level(0), nguyenTo("Hoa") {}
ThucThe::~ThucThe() {}
string ThucThe::GetName()
{
    return name;
}
void ThucThe::Nhap() 
{
    cout << "Nhap ten thuc the: "; cin >> name;
    cout << "Nhap level: "; cin >> level;
}
int ThucThe::DanhNhau(ThucThe& other) 
{
    map<string, string> tuongSinh = {
        {"Hoa", "Tho"}, {"Tho", "Kim"}, {"Kim", "Thuy"}, {"Thuy", "Moc"}, {"Moc", "Hoa"}
    };
    
    map<string, string> tuongKhac = { 
        {"Hoa", "Kim"}, {"Kim", "Moc"}, {"Moc", "Tho"}, {"Tho", "Thuy"}, {"Thuy", "Hoa"}
    };

    double dameA = this->GayDame();
    double dameB = other.GayDame();

    // Tương sinh
    if (tuongSinh[this->nguyenTo] == other.nguyenTo) dameA += dameA * 0.1; 
    if (tuongSinh[other.nguyenTo] == this->nguyenTo) dameB += dameB * 0.1; 

    // Tương khắc
    if (tuongKhac[this->nguyenTo] == other.nguyenTo) {
        dameA += dameA * 0.2; 
        dameB -= dameB * 0.2; 
    }
    if (tuongKhac[other.nguyenTo] == this->nguyenTo) {
        dameB += dameB * 0.2; 
        dameA -= dameA * 0.2; 
    }
    if (dameA > dameB) return 1;
    if (dameA < dameB) return 0;
    return 2; // Hòa
}
