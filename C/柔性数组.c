#include<stdlib.h>
#include<stdio.h>
// typedef struct S//柔性数组方式
// {
//     int n;
//     int arr[];
// }S;
// int main()//开辟连续空间减少内存碎片提高访问速度 一次malloc方便内存释放
// {
//     S* p = (S*)malloc(sizeof(S)+5*sizeof(int));
//     if(p != NULL)
//     {
//         p->n = 100;
//         for(int a=0; a<5; a++)
//         {
//             p->arr[a] = a;
//         }
//         for(int i=0; i<5; i++)
//         {
//             printf("%d", p->arr[i]);
//         }
        
//     }
//     S* ptr = (S*)realloc(p, 10);
//     if(p != NULL)
//     {
//         p = ptr;
//         for(int i=0; i<10; i++)
//         {
//             p->arr[i] = i;
//         }
//         for(int j=0; j<10; j++)
//         {
//             printf("%d", p->arr[j]);
//         }
//     }
//     free(p);
//     p = NULL;
//     return 0;
// }
typedef struct S
{
    int n;
    int* arr;
}S;
int main()
{
    S* p = (S*)malloc(sizeof(S));
    p->arr = (int*)malloc(5*sizeof(int));
    if(p != NULL&& p->arr != NULL)
    {
        for(int i=0; i<5; i++)
        {
            p->arr[i] = i;
        }
        for(int j=0; j<5; j++)
        {
            printf("%d", p->arr[j]);
        }
    }
    int* ptr = (int*)realloc(p->arr, 10*sizeof(int));
    if(ptr != NULL)
    {
        p->arr = ptr;
        for(int a=5; a<10; a++)
        {
            p->arr[a] = a;
        }
        for(int b=0; b<10; b++)
        {
            printf("%d", p->arr[b]);
        }
    }
    free(p->arr);
    p->arr = NULL;
    free(p);
    p = NULL;
    return 0;
}