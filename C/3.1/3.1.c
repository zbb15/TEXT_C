#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	float c, f;
	f = 64.0;
	c = (5.0 / 9) * (f - 32);
	printf("f=%f\nc=%f\n", f, c);
	return 0;
}