#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char ch,filename[10];
	printf("������Ҫд����ļ���");
	scanf("%s", filename);
	getchar();//����س�
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("can not open file\n");
		exit(0);
	}
	printf("������Ҫд����ַ�����#��β");
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