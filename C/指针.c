
#include <stdio.h>
void test(int (*p)[6], int x, int y)
{
    int i = 0;
    
    for(i=0; i<x; i++)
    {
        int j = 0;
        for(j=0; j<y; j++)
        {
            printf("%d", p[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[2][6]= {{1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}};
    // int (*p)[] = &arr;
    test(arr, 2, 6);





    //指针数组
    int* arr[10];
    //数组指针
    int* (*arr)[10] =&arr;
    //函数 指针
    int (*add)(int, int) = add;
    //函数指针数组
    int* (*parr[])(int, int) = {};
    //指向函数指针数组的指针
    int (*(*pparr)[])(int, int)  = &parr;
    //函数指针
    // (*(void(*)()0))()把0强制转换成函数指针类型，该类型无参数无返回值，当0为地址时对它进行解引用操作，调用以0为地址的该函数
    // typedef void(*pfun_t)(int);//把函数指针类型重命名为pfun_t
    // void(* signal(int, void(*)(int)))(int);== pfun_t signal(int, pfun_t);
    //signal是一个函数声明
    //该signal函数的参数是int和函数指针，该函数指针指向的函数参数是int返回类型是void
    //signal函数返回类型是函数指针该函数指针指向的函数参数是int返回类型是void
    // char*(pf)(char*, const char*) = my_strcpy;
    // char*(pfArr[4])(char*, const char*) = {my_strcpy, my_strcpy, my_strcpy, my_strcpy};
    
    // int arr[5] = {9, 29, 3, 4, 5};
    // int* vp = arr;
    //*vp = 3;
    // vp++;
    // //*vp++;//*vp++ = 0到底是*vp=0后*vp++还是vp++,结果好像是一样的//
    // printf("%d\n", *vp);

    //    int arr1[] = {1, 2, 3, 4};
    //    int arr2[] = {2, 3, 4, 5};
    //    int arr3[] = {3, 4, 5, 6};
    //    int* parr[] = {arr1, arr2, arr3};
    //    for(int i=0; i<3; i++)
    //    {
    //     for(int a=0; a<4; a++)
    //     {
    //         printf("%d", *(parr[i]+a));

    //     }
    //     printf("\n");
    //    }

    // char arr[][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    // char(*p)[5] = &arr; //数组指针//&arr是数组的地址
    // // for (int i = 0; i < 5; i++)
    // // {

    // //     printf("%d", *(*p + i));
    // // }
    // printf("arr=%d\n", arr);//53
    // printf("arr+1=%d\n", arr+1);//58
    // printf("&arr=%d\n", &arr);//53
    // printf("&arr+1=%d\n", &arr+1);//68
    // printf("*p=%d\n", *p);//53
    // printf("*p+1=%d\n", *p+1);//54//p=arr数组名是(一行)数组地址//&arr整个数组地址//*p一个
    // printf("p=%d\n", p);//53   
    // printf("p+1=%d\n", p+1);//58

    return 0;
}