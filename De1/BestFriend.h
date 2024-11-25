#ifndef BESTFRIEND_H
#define BESTFRIEND_H
#include "Friend.h"
#include <iostream>
#include <string>
using namespace std;
class BestFriend : public Friend {
private:
    string phone;
public:
    BestFriend();
    BestFriend(string name, int age, string phone);
    void Xuat();
    void TinhThoiGian();
    ~BestFriend();
};
#endif