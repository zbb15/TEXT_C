#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()//������ʵ�ִӼ��̶�ȡ�ַ���д�뵽�ļ�file.txtֱ��#
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
	//���ϴ���汾//����Ҳû�д�Ӧ����֮ǰ���������
	ch = getchar();
	while (ch != '#')//
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	/*getch��getchar����������ͬ��
	�����getchֱ�ӴӼ��̻�ȡ��ֵ��
	���ȴ��û����س���ֻҪ�û���һ������
	getch�����̷���*/
	/*���������getcharʱ.����͵����û�������
	�û�������ַ�������ڼ��̻������С�
	ֱ���û����س�Ϊֹ���س��ַ�Ҳ���ڻ������У���
	���û�����س�֮��getchar�ſ�ʼ��stdin����ÿ�ζ���һ���ַ�*/
	//getch�汾
	/*ch = getch();
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getch();
	}*/
	//�Ľ���
	/*while ((ch = getchar()) != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		
			
	}*/
		
	
	fclose(fp);
	fp = NULL;
	return 0;

}