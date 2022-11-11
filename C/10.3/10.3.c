#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char str[3][10], temp[10],filename[100];
	int i, j, k, n = 3;
	printf("Enter string\n");
	for (i = 0; i < n; i++)
	{
		gets(str[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i+1; j < n; j++)
			if (strcmp(str[k], str[j])>0)//比较两个字符串是否相等
				k = j;
		if (k != i)
		{
			strcpy(temp, str[i]);
			strcpy(str[i], str[k]);
			strcpy(str[k], temp);
		}
	}
	printf("输入写入文件名\n");
	scanf("%s", filename);
	getchar();
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("can not open file");
		exit(0);
	}
	for (i = 0; i < n; i++)
	{
		fputs(str[i], fp);
		fputs("\n", fp);
		printf("%s\n", str[i]);
	}
	return 0;
}