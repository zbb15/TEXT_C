#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp1;
	FILE* fp2;
	char ch;
	fp1 = open("file1.txt", "w+");
	fp2 = open("file2.txt", "w");
	/*if (() == NULL)
	{
		printf("can not open file");
		exit(0);
	}
	if (()==NULL)
	{
		printf("can not open file");
		exit(0);
	}*/
	ch = getc(fp1);
	while (!feof(fp1))
	{
		putchar(ch);
		ch = getc(fp1);
	}
	rewind(fp1);
	ch = getc(fp1);
	while (!feof(fp1))
	{
		fputc(ch,fp2);
		ch = fgetc(fp1);

	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}