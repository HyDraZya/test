// #include <stdio.h>
// //����һ���ṹ������
// //����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������(����)
// //����ѧ�������� - ����+�Ա�+����+�绰����
// struct Stu
// {
//     char name[20]; //����
//     char sex[10];  //�Ա�
//     int age;       //����
//     char phone[12];//�绰
// }; //��ס����Ҫ�ӷֺ�

// struct Stu s3;//ȫ�ֱ���

// int main()
// {
//     //�����Ľṹ�����
//     struct Stu s1;
//     struct Stu s2;
//     return 0;
// }

// //�����ṹ������
// struct
// {
//     int a;
//     char c;
// }sa;

// struct
// {
//     int a;
//     char c;
// }* psa;//�����ṹ��ָ������

// int main()
// {
//     psa = &sa;
//     //�����������ṹ�������ڲ�������һ��ʱ����Ȼ��������ͬ�ṹ������
//     return 0;
// }


// //����2
// struct Node
// {
//     int data;
//     struct Node* next;
// };

// //����3
// typedef struct
// {
//     int data;
//     Node* next;
// }Node;

// struct Point
// {
//     int x;
//     int y;
// }p1;                //�������͵�ͬʱ�������p1
// struct Point p2;    //����ṹ�����p2


// #include <stdio.h>
// struct T
// {
//     double weight;//����
//     double height;//���
// }p;

// struct S //��������
// {
//     char name;//����
//     struct T p;
//     short age;//����
//     char sex[5];//�Ա�
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
// #pragma pack(8)//����Ĭ�϶�����Ϊ8
// struct s1
// {
// 	char c1;
// 	int i;
// 	char c2;
// };
// #pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��

// #pragma pack(1)//����Ĭ�϶�����Ϊ1
// struct s2
// {
// 	char c1;
// 	int i;
// 	char c2;
// };
// #pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
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
