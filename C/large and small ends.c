#include<stdio.h>
int check_sys()
{
    int a = 1;
    return (*(char *)&a);
}
int main()
{
    int ret = check_sys();
    if(ret == 1)
    {
        printf("小端");
    }
        if(ret == 0)
    {
        printf("大端");
    }
    return 0;
}