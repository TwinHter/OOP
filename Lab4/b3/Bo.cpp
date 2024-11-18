#include "Bo.h"
#include<iostream>
#include<string>
#include<random>
using namespace std;

Bo::Bo() : GiaSuc()
{
    TiengKeu = "Booooo";
}
Bo::Bo(int sl) : GiaSuc(sl)
{
    TiengKeu = "Booooo";
    SoCon = rand() % 100;
    SoLitSua = rand() % 20;
}
void Bo::Keu()
{
    cout << "Bo keu: " << TiengKeu << endl;
}
void Bo::Xuat()
{
    cout << "Bo: " << endl;
    GiaSuc::Xuat();
}
Bo::~Bo(){}
