#include<stdio.h>
int main()
{
    int a = 9;
    printf("int a = 9;\n");
    printf("a = %d\n", a);
    printf("a = %f\n", a);
    float* p = (float*)&a;
    printf("float* p = (float*)&a;\n");
    printf("a = %d\n", a);
    printf("p = %f\n", p);
    printf("*p = %f\n", *p);
    *p = 8.0;
    printf("*p = 8.0;\n");
    printf("a = %d\n", a);
    printf("p = %f\n", p);
    printf("*p = %f\n", *p);
    return 0;
}