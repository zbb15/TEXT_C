#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int a = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //  0  1  2  3  4  5  6  7  8  9
    int right = 0;
    int left = 0;
    right = (sizeof(arr) / sizeof(arr[0]) - 1);
    while (left<=right)
    {
        int md = ((left + right) / 2);
        if (arr[md] < a)
        {
            left = md + 1;
        }
        else if (arr[md] > a)
        {
            right = md - 1;
        }
        else
        {
            printf("找到了，下标是：%d\n", md);
            printf("a=%d\n,md=%d\n,right=%d\n,left=%d\n", a, md, right, left);
            break;
        }
    }
    if (left>right)
    {
        printf("没有找到");
    }
    return 0;
}
