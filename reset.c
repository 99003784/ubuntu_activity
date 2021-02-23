#include"bitmask.h"

int reset(int num1,int bit)
{
    return(num1 & (~(1 << bit)));
}