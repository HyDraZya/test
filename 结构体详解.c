// #include <stdio.h>
// //声明一个结构体类型
// //声明一个学生类型，是想通过学生类型来创建学生变量(对象)
// //描述学生：属性 - 名字+性别+年龄+电话号码
// struct Stu
// {
//     char name[20]; //名字
//     char sex[10];  //性别
//     int age;       //年龄
//     char phone[12];//电话
// }; //记住这里要加分号

// struct Stu s3;//全局变量

// int main()
// {
//     //创建的结构体变量
//     struct Stu s1;
//     struct Stu s2;
//     return 0;
// }

// //匿名结构体类型
// struct
// {
//     int a;
//     char c;
// }sa;

// struct
// {
//     int a;
//     char c;
// }* psa;//匿名结构体指针类型

// int main()
// {
//     psa = &sa;
//     //当两个匿名结构体类型内部的内容一样时，仍然是两个不同结构体类型
//     return 0;
// }


// //代码2
// struct Node
// {
//     int data;
//     struct Node* next;
// };

// //代码3
// typedef struct
// {
//     int data;
//     Node* next;
// }Node;

// struct Point
// {
//     int x;
//     int y;
// }p1;                //声明类型的同时定义变量p1
// struct Point p2;    //定义结构体变量p2


// #include <stdio.h>
// struct T
// {
//     double weight;//体重
//     double height;//身高
// }p;

// struct S //类型声明
// {
//     char name;//姓名
//     struct T p;
//     short age;//年龄
//     char sex[5];//性别
// };

// int main()
// {
//     struct S s = {'A', {63.5, 182.5}, 20, "boy"};
//     printf("%c %lf %lf %d %s\n", s.name, s.p.weight, s.p.height, s.age, s.sex);
//     return 0;
// }

// #include<stdio.h>
// 	struct s1
// {
// 	char c1;
// 	int i;
// 	char c2;
// };

// int main()
// {
// 	printf("%d\n", sizeof(struct s1));
// 	return 0;
// }

// #include<stdio.h>
// struct s2
// {
// 	char c1;
// 	char c2;
// 	int i;
// };
// int main()
// {
// 	printf("%d\n", sizeof(struct s2));
// 	return 0;
// }

// #include<stdio.h>
// struct s3
// {
// 	double d;
// 	char c;
// 	int i;
// };
// int main()
// {
// 	printf("%d\n", sizeof(struct s3));
// 	return 0;
// }

// #include<stdio.h>
// struct s3
// {
// 	double d;
// 	char c;
// 	int i;
// };
// struct s4
// {
// 	char c1;
// 	struct s3 s3;
// 	double d;
// };
// int main()
// {
// 	printf("%d\n", sizeof(struct s4));
// 	return 0;
// }

// #include <stdio.h>
// #pragma pack(8)//设置默认对齐数为8
// struct s1
// {
// 	char c1;
// 	int i;
// 	char c2;
// };
// #pragma pack()//取消设置的默认对齐数，还原为默认

// #pragma pack(1)//设置默认对齐数为1
// struct s2
// {
// 	char c1;
// 	int i;
// 	char c2;
// };
// #pragma pack()//取消设置的默认对齐数，还原为默认
// int main()
// {
// 	printf("%d\n", sizeof(struct s1));
// 	printf("%d\n", sizeof(struct s2));
// 	return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// struct s2
// {
// 	char c1;
// 	int i;
// 	char c2;
// };
// int main()
// {
// 	printf("%d\n", offsetof(struct s2, c1));
// 	printf("%d\n", offsetof(struct s2, i));
// 	printf("%d\n", offsetof(struct s2, c2));
// 	return 0;
// }

#include<stdio.h>
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
