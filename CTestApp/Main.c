#include "../libMathCpp/MathNerdWrpr.hpp"
#include "stdio.h"

void main(void)
{
    printf("Value init=16\n");
    MathNerd o = new_MathNerd(16);
    int i = MathNerd_Val(o);
    printf("check init value=%i\n", i);
    MathNerd_Add(o, 6);
    i = MathNerd_Val(o);
    printf("After addition+6 =%i\n", i);


} 