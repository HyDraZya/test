#include <stdio.h>
#include <windows.h>

typedef struct Stu
{
    //????
    char name[20];
    short age;
    char phone[12];
    char sex[4];
}Stu;//??

void Print1(Stu tmp)
{
    printf("name:  %s\n", tmp.name);
    printf("age:   %d\n", tmp.age);
    printf("phone: %s\n", tmp.phone);
    printf("sex:   %s\n", tmp.sex);
}

void Print2(Stu *ps)
{
    printf("name:  %s\n", ps->name);
    printf("age:   %d\n", ps->age);
    printf("phone: %s\n", ps->phone);
    printf("sex:   %s\n", ps->sex);
}

int main()
{
    Stu s = { "??", 40, "15701983221","boy"};
    //???????
    Print1(s);
    Print2(&s);
    system("pause");
    return 0;
}

//struct????????Stu???????struct Stu??????
// struct Stu
// {
//     //????
//     char name[20];
//     short age;
//     char phone[12];
//     char sex[4];
// }s1,s2,s3;
//s1?s2?s3???????????

// typedef struct Stu
// {
//     //????
//     char name[20];
//     short age;
//     char phone[12];
//     char sex[4];
// }Stu;//??

// int main()
// {
//      Stu s1 = {"??",20,"15701984331","boy"};//????????
//      struct Stu s2 = {"??",18,"157130284312","girl"};
//     struct Stu s2;
//     system("pause");
//     return 0;
// }

// struct S//????
// {
//     int a;
//     char c;
//     char arr[20];
//     double d;
// };

// struct T//????
// {
//     char ch[10];
//     struct S s;
//     char *pc;
// };

// int main()
// {
//     char arr[] = "hello bit\n";
//     struct T t = {"hehe", {100 ,'w' , "hello world", 3.14}, arr};//????????
//     printf("%s\n",t.ch);
//     printf("%s\n",t.s.arr);
//     printf("%lf\n",t.s.d);
//     printf("%s\n", t.pc);
//     system("pause");
//     return 0;
// }