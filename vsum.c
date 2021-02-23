#include "myutils.h"
#include "stdarg.h"

double vsum(int number,...)
{
    va_list valist;
    double sum=0;
    va_start(valist,number);
    for(int i=0;i<number;i++)
    {
        sum+=va_arg(valist,int);
    }
    va_end(valist);
    return sum;
}