#ifndef DERIVED2_H
#define DERIVED2_H
#include "base.h"
#include "derived.h"
class Derived2 : public Base
{
public:
    Derived2():Base(){}
    Derived2(int t):Base(t){}
    Derived create();
    virtual void dummy() override;
};
#endif // DERIVED2_H
