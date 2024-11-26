#include "NhanVat.h"
#include<bits/stdc++.h>
using namespace std;

NhanVat::NhanVat() : ThucThe(), monPhai("cai bang") {}
NhanVat::~NhanVat() {}
void NhanVat::Nhap() 
{
    ThucThe::Nhap();
    cout << "Nhap mon phai(Thieu Lam, Thien Vuong bang, ...): "; 
    cin.ignore();
    getline(cin, monPhai);
    SetNguyenTo();
}
void NhanVat::SetNguyenTo() 
{
    string monphaiLower = monPhai;
    for(char &c : monphaiLower) c = tolower(c);

    if (monphaiLower == "thieu lam" || monphaiLower == "thien vuong bang") {
        nguyenTo = "Kim";
    } else if (monphaiLower == "ngu doc giao" || monphaiLower == "duong mon") {
        nguyenTo = "Moc";
    } else if (monphaiLower == "nga my" || monphaiLower == "thuy yen mon") {
        nguyenTo = "Thuy";
    } else if (monphaiLower == "cai bang" || monphaiLower == "thien nhan giao") {
        nguyenTo = "Hoa";
    } else {
        nguyenTo = "Tho";
    }
}
int NhanVat::GayDame() 
{
    return level * 5;
}