#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
    int i = 0;
    int flag = 1;                //假设这一趟有序
    for (i = 0; i < sz - 1; i++) //确定趟数
    {
        for (int j = 0; j < sz - 1 - i; j++)
        {
            int tmp = 0;
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
                flag = 0; //本趟排序不完全有序
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}
int main()
{
    int i = 0;
    int sz = 0;
    int arr[] = {9, 1, 2, 3, 4, 5, 6, 7, 8, 0};
    sz = sizeof(arr) / sizeof(arr[0]); //在函数外计算好arr长度
    bubble_sort(arr, sz);              // arr是数组，对arr传参实际上传递的是首元素地址 &arr[0]=arr
                                        //&数组名，取出的是整个数组地址 &arr
    for (i = 0; i < sz; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}