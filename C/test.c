#include<stdio.h>
int main()
{
    int a = 1;
    FILE* fp = fopen("test.txt", "w");
    fwrite(&a, 4, 1, fp);
    fclose(fp);
    fp = NULL;
    return 0;
}