#ifndef FRIEND_H
#define FRIEND_H
#include<iostream>
#include<string>
using namespace std;
class Friend {
protected:
    string name;
    int age;
    double thoiGian;
public:
    Friend();
    Friend(string name, int age);
    double GetThoiGian();
    virtual void Xuat();
    virtual void TinhThoiGian();
    virtual void TinhThoiGian(int x);
    ~Friend();
};
#endif