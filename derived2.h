#pragma once
#include "base.h"
#include "derived.h"
class Derived2 : public Base
{
public:
    Derived2();
    Derived2(int t);
    Derived create();
    virtual void dummy() override;
};
