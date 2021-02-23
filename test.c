#include "mystring.h"
#include "bitmask.h"
#include "myutils.h"

int main()
{
    char s1[20]="Check-string";
    char s2[20];
    char s3[20]="Check-string";
    int a=7;
    int number=121;
    int n;
    int k;
    int num;
    int num1;
    int bit;
    int flippedNumber;
    printf(" String length =%d\n",mystrlen(s1));
    printf("String s1 : %s String s2=%s\n" ,s1,mystrcpy(s1,s2));
    printf("String s2 =%s, String s2=%s\n" ,s2,mystrcat(s1,s2));
    printf("Checking.... %d\n",mystrcmp(s1,s3));

    printf("Factorial of %d =%d\n",n,fact(n));

    printf("0-> not prime 1-> prime\n");
    printf("%d",check_prime(a));

    printf("0-> palindrome 1-> not palindrome");
    printf("%d",checkPalindrome(number));
    
    printf("Vsum of 2 numbers =%d",vsum(2,10,20));

    printf("Set %d =%d",n,setBit(n,k));
    printf("Reset %d =%d",num1,reset(num1,bit));
    printf("Flip %d =%d",num,flip(num,flippedNumber));






    
}