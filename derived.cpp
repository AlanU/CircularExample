#include "derived.h"
#include "derived2.h"
Derived::Derived()
{

}

Derived::Derived(int t)
{

}

void Derived::dummy()
{

}

Derived2 Derived::create()
{
    Derived2 temp;
    return temp;
}
