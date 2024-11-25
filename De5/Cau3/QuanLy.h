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
QuanLy::QuanLy() : n(0) {}
QuanLy::~QuanLy() {}
void QuanLy::Nhap() 
{
    cout << "Nhap so luong thuc the: "; cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cout << "Chon thuc the thu " << i+1 << "(1. Nhan vat, 2. Quai vat): ";
        int choice; cin >> choice;
        ThucThe *tt;
        if(choice == 1) tt = new NhanVat();
        else tt = new QuaiVat();
        tt->Nhap();
        thucThe.push_back(tt);
    }
}
void QuanLy::DameLonNhat() 
{
    ThucThe* ret = thucThe[0];
    for(int i = 1; i < n; i++) 
    {
        if(thucThe[i]->GayDame() > ret->GayDame()) ret = thucThe[i];
    }
    cout << "Thuc the co sat thuong lon nhat la: " << ret->GetName() << " voi muc sat thuong " << ret->GayDame() << endl;
}
void QuanLy::DanhNhau() 
{
    cout << "Chon 2 thuc the de danh nhau(nhap theo so thu tu): " << endl;
    int a, b; cin >> a >> b; 
    a -= 1; b -= 1;
    int ret = thucThe[a]->DanhNhau(*thucThe[b]);
    if(ret == 1) cout << thucThe[a]->GetName() << " thang.\n";
    else if(ret == 0) cout << thucThe[b]->GetName() << " thang.\n";
    else cout << "Hoa.\n";
}
