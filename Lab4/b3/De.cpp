#include "De.h"
#include<iostream>
#include<string>
using namespace std;

De::De() : GiaSuc()
{
    TiengKeu = "Meeee";
}
De::De(int sl) : GiaSuc(sl)
{
    TiengKeu = "Meeee";
    SoCon = rand() % 100;
    SoLitSua = rand() % 10;
}
void De::Keu()
{
    cout << "De keu: " << TiengKeu << endl;
}
void De::Xuat()
{
    cout << "De: " << endl;
    GiaSuc::Xuat();
}
De::~De(){}