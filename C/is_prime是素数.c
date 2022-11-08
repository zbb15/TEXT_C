#include<math.h>
#include<stdio.h>
int is_prime(int i)
{
    int j = 0;
    // 小于等于开平方i
    for(j=2; j<sqrt(i); j++)
    {
        if(i%j == 0)
        {
            return 0;
        }
    }
    return 1;
}






int main()
{
    int i = 0;
    for(i=100; i<=200; i++)
    {
        if(is_prime(i) == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}