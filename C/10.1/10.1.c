#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()//本程序实现从键盘读取字符串写入到文件file.txt直到#
{
	FILE* fp;
	char ch,filename[10];
	printf("请输入要写入的文件名");
	scanf("%s", filename);
	getchar();//清除回车
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("can not open file\n");
		exit(0);
	}
	printf("请输入要写入的字符串以#结尾");
	//书上错误版本//好像也没有错，应该是之前哪里输错了
	ch = getchar();
	while (ch != '#')//
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	/*getch与getchar基本功能相同，
	差别是getch直接从键盘获取键值，
	不等待用户按回车，只要用户按一个键，
	getch就立刻返回*/
	/*当程序调用getchar时.程序就等着用户按键。
	用户输入的字符被存放在键盘缓冲区中。
	直到用户按回车为止（回车字符也放在缓冲区中）。
	当用户键入回车之后，getchar才开始从stdin流中每次读入一个字符*/
	//getch版本
	/*ch = getch();
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getch();
	}*/
	//改进版
	/*while ((ch = getchar()) != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		
			
	}*/
		
	
	fclose(fp);
	fp = NULL;
	return 0;

}