#include<stdio.h>
#include<stdlib.h>
#include<string.h>//strerror
#include<errno.h>//errno
int main()
{
    // //向内存申请10个整形空间不初始化快速
    // int* p = (int*)malloc(10*sizeof(int));
    // if(p == NULL)
    // {
    //     //打印错误原因
    //     printf("%s\n", strerror(errno));
    // }
    
    // else
    // {
    //     //正常使用
    //     int i = 0;
    //     for(i=0; i<10;i++)
    //     {
    //         *(p+i) = i;
    //     }
    //     for(i=0; i<10;i++)
    //     {
    //         printf("%d ", *(p+i));
    //     }
    // }
    //申请10个空间初始化为0
    // int* p = (int*)calloc(10, sizeof(int));
    // if(p == NULL)
    // {
    //     //打印错误原因
    //     printf("%s\n", strerror(errno));
    // }
    
    // else
    // {
    //     //正常使用
    //     int i = 0;
    //     for(i=0; i<10;i++)
    //     {
    //         printf("%d ", *(p+i));
    //     }
    // }
    // //如果p指向的空间之后有足够的内存可以追加则直接追加返回p
    // //如果没有，则会找一块新的区域开辟满足需求的空间把原来数据拷贝过来释放旧的空间最后返回新的地址
    // //得使用新的变量接受realloc返回值
    // int* ptr = (int*)realloc(p, INT_MAX);
    // if(p != NULL)
    // {
        
    //     p = ptr;
    // }
    
    // else
    // {
    //     //正常使用
    //     int i = 0;
    //     for(i=0; i<10;i++)
    //     {
    //         printf("%d ", *(p+i));
    //     }
    // }
    // //当动态申请的空间不再使用应还给操作系统
    // free(p);
    // p = NULL;
    
    return 0;
}