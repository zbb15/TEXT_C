#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* src)//const放在*左边修饰*p，不能通过p改变*p//strcpy函数默认返回char*类型
{                                           //const放在*右边修饰p，不能改p
    char* ret = dest;
    assert(src != NULL);//断言
    assert(dest != NULL);
    while (*dest++ = *src++)//把src指向的字符串拷贝到dest包含'\n'
    {
        ;
    }
    return ret;
    
}
int main()
{
    char arr[]="##############";
    char arr2[]="bit";
    
    printf("arr=%s\n", my_strcpy(arr,arr2));
    return 0;
}