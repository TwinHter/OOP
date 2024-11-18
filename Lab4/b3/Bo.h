#ifndef BO_H
#define BO_H
#include "GiaSuc.h"
#include <iostream>
#include <string>
using namespace std;
class Bo : public GiaSuc
{
private:
public:
    Bo();
    Bo(int);
    void Keu();
    void Xuat();
    ~Bo();
};

#endif