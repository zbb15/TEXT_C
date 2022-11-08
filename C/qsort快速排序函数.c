#include<stdio.h>
#include<stdlib.h>//qsort头文件
#include<string.h>//strcmp头文件
struct Stu
{
    char name[20];
    int age;
};

int cmp_int(const void* e1, const void* e2)//整形比较函数
{
    return *(int*)e1 - *(int*)e2;
}



void test_int()//比较整形
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 1;
    for(i=0; i<sz; i++)
    {
        printf("%d", arr[i]);
    }
}

int cmp_float(const void* e1, const void* e2)//双精度浮点型比较函数
{
    return ((int)(*(float*)e1 - *(float*)e2));
}

void test_float()//比较浮点型
{
    float f[] = {9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
    int sz = sizeof(f) / sizeof(f[0]);
    qsort(f, sz, sizeof(f[0]), cmp_float);
    int j = 0;
    for(j=0; j<sz; j++)
    {
        printf("%f ", f[j]);
    }
}

int cmp_struct_by_age(const void* e1, const void* e2)//比较结构体年龄函数
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_struct_by_name(const void* e1, const void* e2)//比较结构体名字函数
{
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test_struct()//比较结构体
{
    struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
    int sz = sizeof(s) / sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_struct_by_age);
    struct Stu* p = s;
    for(p=s; p<&s[3]; p++)
    {
        printf("%s,%d\n", (*p).name, (*p).age);
    }
}

void Swap(char* buf1, char*buf2, int width)
{
    int i = 0;
    for(i=0; i<width;i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}
void bubble_sort(void* s, int sz, int width, int (*cmp)(const void*e1, const void*e2))
{
    int i = 0;
    for(i=0; i<sz-1;i++)
    {
        int j = 0;
        //每一趟对数
        for(j=0; j<sz-1-j; j++)
        {
            //比较
            if(cmp((char*)s+j*width, (char*)s+(j+1)*width) > 0)
            {
                //交换
                Swap((char*)s+j*width, (char*)s+(j+1)*width, width);
            }
        }
    }
}
void bubble_cmp_struct()
{
    struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
    int sz = sizeof(s) / sizeof(s[0]);
    bubble_sort(s, sz, sizeof(s[0]), cmp_struct_by_age);
    struct Stu* p = s;
    for(p=s; p<&s[3]; p++)
    {
        printf("%s,%d\n", (*p).name, (*p).age);
    }
}
int main()
{
    // test_int();
    // test_float();
    // test_struct();
    bubble_cmp_struct();
    return 0;
}