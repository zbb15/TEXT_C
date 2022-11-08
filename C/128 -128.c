#include<stdio.h>
int main()
{
    char a = 128;
    char b = -128;
    printf("%d\n", a);  
    printf("%d=%u\n", a, a);
    printf("%d=%u\n", b, b);
    return 0;
}