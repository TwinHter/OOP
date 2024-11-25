#include "Friend.h"
#include <iostream>
#include <string>
using namespace std;

Friend::Friend()
{
    name = "";
    age = 0;
    TinhThoiGian();
}
Friend::Friend(string name, int age)
{
    this->name = name;
    this->age = age;
    TinhThoiGian();
}
double Friend::GetThoiGian()
{
    return thoiGian;
}
void Friend::Xuat(){}
void Friend::TinhThoiGian(){thoiGian = 0;}
void Friend::TinhThoiGian(int x){thoiGian = 0;}
Friend::~Friend(){delete this;}