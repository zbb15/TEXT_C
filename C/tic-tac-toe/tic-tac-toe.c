#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void catalogue()
{
	printf('*' * 40);
	printf("*************1.play****************\n");
	printf("*************2.return**************\n");
	printf('*' * 40);
}
int main()
{
	int i = 0;
	do
	{	
		catalogue();
	    //scanf("%d", &i);
		switch (i)
		{
		case1:
			printf("��Ϸ");
			break;
		case2:
			printf("�˳�");
			break;
		default:
			printf("����������");

		}
	} while (i);
	return 0;
}