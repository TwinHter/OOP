#include "OtherBoy.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

OtherBoy::OtherBoy() : Friend()
{
    attractiveness = 0;
}
OtherBoy::OtherBoy(string name, int age, double attractiveness): Friend(name, age)
{
    this->attractiveness = attractiveness;
}
void OtherBoy::Xuat()
{
    cout << "Ten: " << name << ", tuoi: " << age << ", ";
    cout << "do hap dan: " << fixed << setprecision(2) << attractiveness << endl;
}
void OtherBoy::TinhThoiGian(int x)
{
    thoiGian = 20 * attractiveness / x;
}
// void OtherBoy::TinhThoiGian()
// {
//     thoiGian = 20 * attractiveness;
// }
OtherBoy::~OtherBoy(){delete this;}