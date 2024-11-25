#include "ThucThe.h"
#include<bits/stdc++.h>
using namespace std;

class QuaiVat : public ThucThe
{
private:
    string loai;
public:
    QuaiVat();
    ~QuaiVat();
    void Nhap() override;
    int GayDame() override;
};
QuaiVat::QuaiVat() : ThucThe(), loai("Thong Thuong") {}
QuaiVat::~QuaiVat() {}
void QuaiVat::Nhap() 
{
    ThucThe::Nhap();
    cout << "Nhap loai quai vat(Thong Thuong, Dau Linh): "; cin >> loai;
}
int QuaiVat::GayDame() 
{
    string loaiLower = loai;
    for(char &c : loaiLower) c = tolower(c);
    if(loaiLower == "thong thuong") return level * 3;
    return level * 7;
}