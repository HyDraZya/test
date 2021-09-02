// #include <stdio.h>
//枚举类型
// enum Sex//性别
// {
//     //枚举的可能取值-常量
// 	MALE = 2,
// 	FEMALE = 4,
// 	SECRET = 8
//     //以上为给常量赋一个初始值
// };

// enum Day//星期
// {
// 	Mon,
// 	Tues,
// 	Wed,
// 	Thur,
// 	Fri,
// 	Sat,
// 	sun
// };

// enum Color//颜色--三原色 rgb
// {
// 	RED,//0
// 	GREEN,//1
// 	BLUE//2
// };

// int main()
// {
//     //enum Sex s = MALE;
//     //enum Color c = BLUE;
//     printf("%d %d %d\n", RED, GREEN, BLUE);
//     printf("%d %d %d\n", MALE, FEMALE, SECRET);
//     system("pause");
//     return 0;
// }

// #define RED 0
// #define GREEN 1
// #define BLUE 2

// int main()
// {
//     int color = RED;
//     return 0;
// }

// enum Color
// {
//     Red,
//     Blue = 3,
//     Green
// };

// int main()
// {
//     enum Color r = Red;
//     enum Color b = Blue;
//     enum Color g = Green;

//     printf("%d\n", r);
//     printf("%d\n", b);
//     printf("%d\n", g);
//     return 0;
// }

//联合-联合体-共用体
// #include <stdio.h>
// union Un
// {
//     char c;//1
//     int i;//4
// };//5个字节

// int main()
// {
//     union Un u;
//     printf("%d\n", sizeof(u));
//     printf("%d\n", sizeof(u.c));
//     printf("%d\n", sizeof(u.i));

//     printf("%p\n", &u);
//     printf("%p\n", &(u.c));
//     printf("%p\n", &(u.i));

//     return 0;
// }

// #include <stdio.h>
// check_system()
// {
//     int a = 1;
//     return *(char*)&a;
// }
// check_system()
// {
//     union
//     {
//         char c;
//         int i;
//     }u;
//     u.i = 1;
//     //返回1，表示小端
//     //返回0，表示大端
//     return u.c;
// }
// int main()
// {
//     //int a = 0x11 22 33 44;
//     //低地址——————————————————>高地址
//     //...[][][][][11][22][33][44][][][][]...  大端字节序存储模式
//     //...[][][][][44][33][22][11][][][][]...  小端字节序存储模式
//     //讨论一个数据放在内存中存放的字节顺序(大小端字节序问题)
//     int a = 1;
//     int ret = check_system();
//     if(1 == ret)
//         printf("小端\n");
//     else
//         printf("大端\n");

//     return 0;
// }

// #include <stdio.h>
// enum Sex
// {
//     MALE,
//     FEMALE,
//     SECRET
// };

// int main()
// {
//     enum Sex s = MALE;
//     printf("%d\n", sizeof(s));
//     return 0;
// }

#include <stdio.h>
union U1
{
    int a;//4 最大对齐数8 默认对齐数4
    char arr[5];//5 1 最大对齐数8 默认对齐数1
};
union U2
{
    short s[7];
	int b;
};

int main()
{
    union U1 u1;
    union U2 u2;
    printf("%d\n", sizeof(u1));
    printf("%d\n", sizeof(u2));
    return 0;
}