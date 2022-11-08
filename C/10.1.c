#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fp;
    char ch,filename[10];
    printf("请输入文件名：");
    scanf("%s", filename);
    getchar();
    if((fp=fopen(filename, "w"))==NULL)
    {
        printf("cannot open the file");
        exit(0);

    }
    printf("请准备一个输入到磁盘的字符：（以#结束）");
    ch = getchar();
    while(ch!='#');
    {
        fputc(ch, fp);
        putchar(ch);
        ch = getchar();
        printf("1");
    }
    fclose(fp);
    putchar(10);
    return 0;
}