#include "GiaSuc.h"
#include <iostream>
#include <string>
#include <random>
GiaSuc::GiaSuc()
{
    SoLuong = 0;
    SoLitSua = 0;
    SoCon = 0;
    TiengKeu = "";
}
GiaSuc::GiaSuc(int sl)
{
    SoLuong = sl;
    SoLitSua = 0;
    SoCon = 0;
    TiengKeu = "";
}
int GiaSuc::SoConSau1Lua()
{
    if(SoLuong < 0)
    {
        return 0;
    }
    return SoCon * SoLuong;
}
int GiaSuc::SoLitSuaSau1Lua()
{
    if(SoLuong < 0)
    {
        return 0;
    }
    return SoLitSua * SoLuong;
}
void GiaSuc::Xuat()
{
    std::cout << "So luong gia suc: " << SoLuong << std::endl;
    std::cout << "So con cua 1 con: " << SoCon << " |";
    std::cout << "So lit sua cua 1 con: " << SoLitSua << std::endl;
    std::cout << "So con sau 1 lua: " << SoConSau1Lua() << " | ";
    std::cout << "So lit sua sau 1 lua: " << SoLitSuaSau1Lua() << std::endl;
    std::cout << "Tieng keu: " << TiengKeu << std::endl;
    if(SoLuong < 0)
        std::cout << "So luong gia suc phai lon hon hoac bang 0" << std::endl;
}
GiaSuc::~GiaSuc(){}