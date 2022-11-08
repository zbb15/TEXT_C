#include<stdio.h>
#include<stddef.h>//offsetof//宏
typedef struct Stu//描述一个学生
{
    char name[20];
    short age;
    char tel[12];
    char sex[5];
}Stu;

// void Print1(Stu tmp)
// {
//     printf("name=%s\n", tmp.name);
//     printf("name=%d\n", tmp.age);
//     printf("name=%s\n", tmp.tel);
//     printf("name=%s\n", tmp.sex);
// }

// void Print2(Stu* ps)
// {
//     printf("name=%s\n", ps->name);
//     printf("name=%d\n", ps->age);
//     printf("name=%s\n", ps->tel);
//     printf("name=%s\n", ps->sex);
// }


// int main()
// {
//     Stu s1 = {"神宫寺", 20, "1532876656", "女"};
//     Stu s2 = {"北野未奈", 20, "187463738374", "女"};
//     Print1(s1);
//     Print2(&s2);
//     return 0;
// }
int main()//电话号码位数过多时会重复打印性别
{
    Stu s[] = {{"北野未奈", 20, "1874637383", "女"}, {"神宫寺", 20, "1532876656", "女"}};
    struct Stu* p = s;
    for(p=s; p<&s[2]; p++)
    {
        printf("%s,%d,%s,%s\n", p->name, p->age, p->tel, p->sex);
    }
    printf("%d\n", offsetof(Stu, name));
}
    