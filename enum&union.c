// #include <stdio.h>
//ö������
// enum Sex//�Ա�
// {
//     //ö�ٵĿ���ȡֵ-����
// 	MALE = 2,
// 	FEMALE = 4,
// 	SECRET = 8
//     //����Ϊ��������һ����ʼֵ
// };

// enum Day//����
// {
// 	Mon,
// 	Tues,
// 	Wed,
// 	Thur,
// 	Fri,
// 	Sat,
// 	sun
// };

// enum Color//��ɫ--��ԭɫ rgb
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

//����-������-������
// #include <stdio.h>
// union Un
// {
//     char c;//1
//     int i;//4
// };//5���ֽ�

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
//     //����1����ʾС��
//     //����0����ʾ���
//     return u.c;
// }
// int main()
// {
//     //int a = 0x11 22 33 44;
//     //�͵�ַ������������������������������������>�ߵ�ַ
//     //...[][][][][11][22][33][44][][][][]...  ����ֽ���洢ģʽ
//     //...[][][][][44][33][22][11][][][][]...  С���ֽ���洢ģʽ
//     //����һ�����ݷ����ڴ��д�ŵ��ֽ�˳��(��С���ֽ�������)
//     int a = 1;
//     int ret = check_system();
//     if(1 == ret)
//         printf("С��\n");
//     else
//         printf("���\n");

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
    int a;//4 ��������8 Ĭ�϶�����4
    char arr[5];//5 1 ��������8 Ĭ�϶�����1
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