#include "BoyFriend.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

BoyFriend::BoyFriend() : Friend()
{
    income = 0;
}
BoyFriend::BoyFriend(string name, int age, double income): Friend(name, age)
{
    this->income = income;
}
void BoyFriend::Xuat()
{
    cout << "Ten: " << name << ", Tuoi: " << age << ", ";
    cout << "Thu nhap: " << fixed << setprecision(2) << income << endl;
}
void BoyFriend::TinhThoiGian()
{
    thoiGian = 5 * income / 10000000.0;
}
BoyFriend::~BoyFriend(){delete this;}