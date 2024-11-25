#ifndef BOYFRIEND_H
#define BOYFRIEND_H
#include "Friend.h"
#include <iostream>
#include <string>
using namespace std;

class BoyFriend : public Friend {
private:
    double income;
public:
    BoyFriend();
    BoyFriend(string name, int age, double income);
    void Xuat();
    void TinhThoiGian();
    ~BoyFriend();
};
#endif