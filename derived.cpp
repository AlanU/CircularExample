#include "derived.h"
#include "derived2.h"
void Derived::dummy()
{

}

Derived2 Derived::create()
{
    Derived2 temp;
    return temp;
}
