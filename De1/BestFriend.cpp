#include <iostream>
#include <string>
#include "BestFriend.h"
using namespace std;

BestFriend::BestFriend() : Friend()
{
    phone = "";
}
BestFriend::BestFriend(string name, int age, string phone): Friend(name, age)
{
    this->phone = phone;
}
void BestFriend::Xuat()
{
    cout << "Ten: " << name << ", Tuoi: " << age << ", SDT: " << phone << endl;
}
void BestFriend::TinhThoiGian()
{
    thoiGian = 5;
}
BestFriend::~BestFriend(){delete this;}
