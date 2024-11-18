#include "Cuu.h"
#include<iostream>
#include<string>
using namespace std;

Cuu::Cuu() : GiaSuc()
{
    TiengKeu = "Beeee";
}
Cuu::Cuu(int sl) : GiaSuc(sl)
{
    TiengKeu = "Beeee";
    SoCon = rand() % 100;
    SoLitSua = rand() % 5;
}
void Cuu::Keu()
{
    cout << "Cuu keu: " << TiengKeu << endl;
}
void Cuu::Xuat()
{
    cout << "Cuu: " << endl;
    GiaSuc::Xuat();
}
Cuu::~Cuu(){}