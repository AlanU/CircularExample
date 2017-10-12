#pragma once
#include "base.h"
class Derived2;
class Derived : public Base
{
public:
    Derived();
    Derived(int t);
    Derived2 create();
    virtual void dummy() override;

};
