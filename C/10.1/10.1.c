#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()
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
	ch = getchar();
	while (1)
	{
		
		if (ch != '#')
		{
			fputc(ch, fp);
			putchar(ch);
			ch = getchar();
			
		}
		break;
	}
	fclose(fp);
	fp = NULL;
	return 0;

}