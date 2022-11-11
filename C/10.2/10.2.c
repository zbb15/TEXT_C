#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()//本程序实现从文件file.txt读取数据到file2.txt
{
	FILE* in, *out;
	char ch, infile[10], outfile[10];
	printf("输入要读取的文件名");
	scanf("%s", infile);
	printf("输入要写入的文件名");
	scanf("%s", outfile);
	if ((in = fopen(infile,"r")) ==NULL)
	{
		printf("can not open file");
		exit(0);
	}
	if ((out= fopen(outfile, "w")) == NULL)
	{
		printf("can not open file");
		exit(0);
	}
	ch = fgetc(in);
	while (!feof(in))
	{
		fputc(ch, out);
		putchar(ch);
		ch = fgetc(in);
	}
	fclose(in);
	fclose(out);
	
	return 0;
}