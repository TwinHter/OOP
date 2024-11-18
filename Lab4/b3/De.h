#ifndef DE_H
#define DE_H
#include "GiaSuc.h"
#include <iostream>
#include <string>
using namespace std;

class De : public GiaSuc
{
private:
public:
    De();
    De(int);
    void Keu();
    void Xuat();
    ~De();
};
#endif