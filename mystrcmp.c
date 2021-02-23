#include "mystring.h"

int mystrcmp(char s1[], char s3[])
{
    int t=0,i=0;
    while(s1[i] !='\0' && s3[i] != '\0')
    {
        if(s1[i] !=s3[i])
        {
            t=1;
            break;
        }
        i++;
    }

    if (t==0)
        return 0;
    else
        return 1;    
}
