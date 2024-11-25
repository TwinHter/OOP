#ifndef OTHERBOY_H
#define OTHERBOY_H
#include "Friend.h"
#include <iostream>
#include <string>
using namespace std;
class OtherBoy : public Friend {
private:
    double attractiveness;
public:
    OtherBoy();
    OtherBoy(string name, int age, double attractiveness);
    void Xuat();
    // void TinhThoiGian();
    void TinhThoiGian(int x);
    ~OtherBoy();
};
#endif