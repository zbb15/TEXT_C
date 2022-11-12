#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
struct Student
{
	int num;
	char name[10];
	int age;
}stud[SIZE];
void save()
{
	int i;
	FILE* fp;
	if ((fp = fopen("file.txt", "wb")) == NULL)
	{
		printf("can not open file");
		return;
	}
	for (i = 0; i < SIZE; i++)
	{
		if(fwrite(&stud[i], sizeof(struct Student), 1, fp) != 1)
			printf("file write error");
		
	}
	fclose(fp);
	
}
int main()
{
	int i;
	printf("please enter data of student\n");
	for (i = 0; i < SIZE; i++)
		scanf("%d%s%d", stud[i].num, stud[i].name, stud[i].age);//输入整型时出错，字符串无误
	save();
	return 0;s

}