#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()//������ʵ�ִ��ļ�file.txt��ȡ���ݵ�file2.txt
{
	FILE* in, *out;
	char ch, infile[10], outfile[10];
	printf("����Ҫ��ȡ���ļ���");
	scanf("%s", infile);
	printf("����Ҫд����ļ���");
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