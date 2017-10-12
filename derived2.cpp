#include "derived2.h"
#include "derived.h"
Derived2::Derived2():Base()
{

}

Derived2::Derived2(int t):Base(t)
{

}

void Derived2::dummy()
{

}

Derived Derived2::create()
{
    Derived temp;
    return temp;
}
