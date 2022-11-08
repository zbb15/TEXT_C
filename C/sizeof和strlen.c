#include<stdio.h>
#include<string.h>
int main()
{
    //一维数组
    // int a[] = {1, 2, 3, 4};
    // printf("%d\n", sizeof(a));//16
    // printf("%d\n", sizeof(a+0));//4/8
    // printf("%d\n", sizeof(*a));//4
    // printf("%d\n", sizeof(a+1));//4/8
    // printf("%d\n", sizeof(a[1]));//4
    // printf("%d\n", sizeof(&a));//4/8
    // printf("%d\n", sizeof(*&a));//16
    // printf("%d\n", sizeof(&a+1));//4/8
    // printf("%d\n", sizeof(&a[0]));//4/8
    // printf("%d\n", sizeof(&a[0]+1));//4/8

//my-strlen(const char* str)//类型是char*
//&arr--类型是char(*)[7]

    //字符数组
    // char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    // printf("%d\n", sizeof(arr));//6
    // printf("%d\n", sizeof(arr+0));//4/8
    // printf("%d\n", sizeof(*arr));//1
    // printf("%d\n", sizeof(arr[1]));//1
    // printf("%d\n", sizeof(&arr));//4/8
    // printf("%d\n", sizeof(&arr+1));//4/8
    // printf("%d\n", sizeof(&arr[0]+1));//4/8

    // printf("%d\n", strlen(arr));//随机
    // printf("%d\n", strlen(arr+0));//随机
    // // printf("%d\n", strlen(*arr));//段错误
    // // printf("%d\n", strlen(arr[1]));//段错误

    // printf("%d\n", strlen(&arr));//随机
    // printf("%d\n", strlen(&arr+1));//随机-6
    // printf("%d\n", strlen(&arr[0]+1));//随机-1






    // char arr[] = "abcdef";
    //  printf("%d\n", sizeof(arr));//7
    // printf("%d\n", sizeof(arr+0));//4/8
    // printf("%d\n", sizeof(*arr));//1
    // printf("%d\n", sizeof(arr[1]));//1
    // printf("%d\n", sizeof(&arr));//4/8
    // printf("%d\n", sizeof(&arr+1));//4/8
    // printf("%d\n", sizeof(&arr[0]+1));//4/8

    // printf("%d\n", strlen(arr));//6
    // printf("%d\n", strlen(arr+0));//6
    // printf("%d\n", strlen(*arr));//段错误
    // printf("%d\n", strlen(arr[1]));//段错误

    // printf("%d\n", strlen(&arr));//6
    // printf("%d\n", strlen(&arr+1));//随机
    // printf("%d\n", strlen(&arr[0]+1));//5






    // char* p = "abcdef";
    // printf("%d\n", sizeof(p));//4/8
    // printf("%d\n", sizeof(p+0));//4/8
    // printf("%d\n", sizeof(*p));//1
    // printf("%d\n", sizeof(p[0]));//1
    // printf("%d\n", sizeof(&p));//4/8
    // printf("%d\n", sizeof(&p+1));//4/8
    // printf("%d\n", sizeof(&p[0]+1));//4/8

    // printf("%d\n", strlen(p));//6
    // printf("%d\n", strlen(p+1));//5
    // printf("%d\n", strlen(*p));//段错误
    // printf("%d\n", strlen(p[0]));//段错误

    // printf("%d\n", strlen(&p));//随机
    // printf("%d\n", strlen(&p+1));//随机
    // printf("%d\n", strlen(&p[0]+1));//5






    //二维数组
    int a[3][4] = {0};
    // printf("%d\n", sizeof(a));//48
    // printf("%d\n", sizeof(a[0][0]));//4
    // printf("%d\n", sizeof(a[0]));//16
    // printf("%d\n", sizeof(a[0]+1));//4/8
    // 
    // printf("%d\n", sizeof(a+1));//4/8
    // printf("%d\n", sizeof(*(a+1)));//16
    // printf("%d\n", sizeof(&a[0]+1));//4/8
    // printf("%d\n", sizeof(*(&a[0]+1)));//16
    // printf("%d\n", sizeof(*a));//16
    // printf("%d\n", sizeof(a[3]));//16
    return 0;
}
