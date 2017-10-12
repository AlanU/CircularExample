#ifndef DERIVED_H
#define DERIVED_H
#include "base.h"
class Derived2;

class Derived : public Base
{
public:
    Derived():Base(){}
    Derived(int t):Base(t){}
    Derived2 create();
    virtual void dummy() override;

};
#endif // DERIVED_H
