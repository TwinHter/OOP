#include "ThucThe.h"
#include<bits/stdc++.h>
using namespace std;

class NhanVat : public ThucThe
{
private:
    string monPhai;
public:
    NhanVat();
    ~NhanVat();
    void Nhap() override;
    void SetNguyenTo();
    int GayDame() override;
};

