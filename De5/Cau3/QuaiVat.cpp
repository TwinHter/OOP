#include "QuaiVat.h"
#include<bits/stdc++.h>
using namespace std;

QuaiVat::QuaiVat() : ThucThe(), loai("Thong Thuong") {}
QuaiVat::~QuaiVat() {}
void QuaiVat::Nhap() 
{
    ThucThe::Nhap();
    cout << "Nhap loai quai vat(Thong Thuong, Dau Linh): "; cin.ignore(); 
    getline(cin, loai);
    cout << "Nhap nguyen to(Hoa, Tho, Kim, Thuy, Moc): "; cin >> nguyenTo;
}
int QuaiVat::GayDame() 
{
    string loaiLower = loai;
    for(char &c : loaiLower) c = tolower(c);
    if(loaiLower == "thong thuong") return level * 3;
    return level * 7;
}