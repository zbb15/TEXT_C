#include <stdio.h>

// void print(int i)//将输入字符串一个一个输出
// {
//     if(i>9)
//     {
//         print(i/10);
//     }
//     printf("%d\n", (i%10));
// }

// int main()
// {
//     unsigned int num = 1;
//     scanf("%d", &num);
//     print(num);
//     return 0;
// }

// int my_fig(int n)//循环求n阶乘
// {
//     int ret = 1;
//     for (int a = 1; a <= n; a++)
//     {
//         ret *= a;
//     }
//     return ret;
// }
// int main()
// {
//     int i = 0;
//     int ret = 0;
//     scanf("%d", &i);
//     ret = my_fig(i);
//     printf("%d\n", ret);
//     return 0;
// }
// int my_fig2(int i)//递归
// {
//     if(i>=1)
//     return i*my_fig2(i-1);
//     else
//     return 1;
// }
// int main()
// {
//     int i = 0;
//     int ret = 0;
//     scanf("%d", &i);
//     ret = my_fig2(i);
//     printf("%d\n", ret);
//     return 0;
// }
// int fb_naq(int n) //递归斐波那契
// {
//     if (n <= 2)
//         return 1;
//     else
//         return fb_naq(n - 1) + fb_naq(n - 2);
// }
// int main()
// {
//     int n = 0;
//     int ret = 0;
//     scanf("%d", &n);
//     ret = fb_naq(n);
//     printf("%d\n", ret);
//     return 0;
// }

// int fb_naq(int n)//循环斐波那契
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;
//     int i = 0;
//     if (n > 2)

// while (n > 2)
// {
//     c = a + b;
//     a = b;
//     b = c;
//     i--;
// }
// return 1;


// int main()
// {
//     int n = 0;
//     int ret = 0;
//     scanf("%d", &n);
//     ret = fb_naq(n);
//     printf("%d\n", ret);
//     return 0;
// }