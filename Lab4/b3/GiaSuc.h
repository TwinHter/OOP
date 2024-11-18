#ifndef GIASUC_H
#define GIASUC_H
#include <iostream>
#include <string>
class GiaSuc
{
protected:
    int SoLuong;
    int SoLitSua;
    int SoCon;
    std::string TiengKeu;
public:
    GiaSuc();
    GiaSuc(int);
    int SoConSau1Lua();
    int SoLitSuaSau1Lua();
    virtual void Xuat();
    ~GiaSuc();
};
#endif