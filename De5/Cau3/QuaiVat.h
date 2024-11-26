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
