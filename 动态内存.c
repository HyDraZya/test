#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// int main()
// {
// 	//1.ͨ����̬��������10��int���͵Ŀռ�
// 	//����ʵ��ʹ��ǿ������ת��Ϊ��Ҫ������
// 	int *p = (int*)malloc(10 * sizeof(int));
// 	//2.malloc�п�������ռ�ʧ�ܣ�������Ҫ�ж�һ��
// 	if(p == NULL)//�ж�pָ���Ƿ�Ϊ��
// 	{
// 		printf("%s\n", strerror(errno));
// 	}
// 	else
// 	{
// 		int i = 0;
// 		for(i = 0; i < 10; i++)
// 		{
// 			*(p+i) = 0;
// 		}
// 		for(i = 0; i < 10; i++)
// 		{
// 			printf("%d ", *(p+i));
// 		}
// 	}
// 	//����̬����Ŀռ䲻��ʹ�õ�ʱ�򣬾�Ӧ�û�������ϵͳ
// 	free(p);//�ͷ�p��ָ��Ķ�̬�ڴ�
// 	p = NULL;//�Ƿ��б�Ҫ
// 	system("pause");
// 	return 0;
// }

// int main()
// {
// 	int *p = (int*)calloc(10, sizeof(int));
// 	if(p == NULL)
// 	{
// 		printf("%s\n", strerror(errno));
// 	}
// 	else
// 	{
// 		int i = 0;
// 		for(i = 0; i < 10; i++)
// 		{
// 			printf("%d ", *(p + i));
// 		}
// 	}
// 	//free���������ͷŶ�̬���ٵĿռ�
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

// int main()
// {
// 	int *p =(int*)malloc(20);
// 	if(p == NULL)
// 	{
// 		printf("%s\n", strerror(errno));
// 	}
// 	else
// 	{
// 		int i = 0;
// 		for(i = 0; i < 10; i++)
// 		{
// 			printf("%d ", *(p + i));
// 		}
// 	}
// 	//�Ϸ�����ֻ����ʹ��malloc���ٵ�20���ֽڿռ�
// 	//�������20���ֽڿռ䲻���������ǵ�������
// 	//ϣ���ܹ���40���ֽڵĿռ�
// 	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�

// 	int *ptr = realloc(p, INT_MAX);
// 	if(ptr != NULL)
// 	{
// 		int i = 0;
// 		for(i = 5; i < 10; i++)
// 		{
// 			*(p+i) = i;
// 		}
// 		for(i = 0; i < 10; i++)
// 		{
// 			printf("%d ", *(p + i));
// 		}
// 	}
// 	//�ͷŶ�̬���ٵ��ڴ�ռ�
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

// //1����NULL�Ľ����ò���
// int main()
// {	
// 	int *p = (int*)malloc(40);
// 	//��һmallocʧ���ˣ�p�ͻᱻ��ֵΪNULL
// 	//*p = 0;//error
// 	int i = 0;
// 	for(i = 0; i < 10; i++)
// 	{
// 		*(p+i) = i;//�Ƿ�����
// 	}
// 	free(p);
// 	p = NULL;
// 	return 0;
// }


//2.�Զ�̬���ٿռ��Խ�����
// int main()
// {
// 	int *p = (int*)malloc(5 * sizeof(int));//ֻ��5��Ԫ��
// 	if( p == NULL)
// 	{
// 		return 0;
// 	}
// 	else
// 	{
// 		int i = 0;
// 		for(i = 0; i < 10; i++)//ֻ��5��Ԫ�أ�ѭ��10�Σ������Խ�����
// 		{
// 			*(p+i) = i;
// 		}
// 	}
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

// 3.�ԷǶ�̬�����ڴ��free
// int main()
// {
// 	int a = 10;
// 	int *p = &a;
// 	*p = 20;
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
// int main()
// {
// 	int *p = (int*)malloc(40);
// 	if(p = NULL)
// 	{
// 		return 0;
// 	}
// 	int i = 0;
// 	for(i = 0; i < 10; i++)
// 	{
// 		*p++ = i;
// 	}
// 	//��ʱpָ��Ĳ��Ƕ�̬���ٳ�����ʼλ����
// 	//��freeֻ���ͷŶ�̬���ٳ�����ʼλ��

// 	//���տռ�
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
// int main()
// {
// 	int *p = (int*)malloc(40);
// 	if(p == NULL)
// 	{
// 		return 0;
// 	}
// 	//ʹ��
// 	//�ͷ�
// 	free(p);
// 	//p = NULL ��Ҫ����Ϊ��ָ��������������free
// 	free(p);
// }

//6.��̬�����ڴ������ͷ�
// int main()
// {
// 	while(1)
// 	{
// 		malloc(1);//������ռ��һֱû���ͷ�
// 	}

// 	return 0;
// }

// int globalVar = 1;
// static int staticGlobalVar = 1;

// void Test()
// {
// 	static int staticVar = 1;
// 	int localVar = 1;
// 	int num1[10] = {1,2,3,4};
// 	char char2[] = "abcd";
// 	char *pChar3 = "abcd";
// 	int *ptr1 = (int*)malloc(sizeof(int)*4);
// 	int *ptr2 = (int*)calloc(4, sizeof(int));
// 	int *ptr3 = (int*)realloc(ptr2, sizeof(int)*4);

// 	free(ptr1);
// 	free(ptr3);
// }

typedef struct S
{
	int n;
	int arr[0];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
}S;

int main()
{
	struct S s;
	// printf("%d\n", sizeof(s));
	struct S *ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
	ps->n = 100;
	int i = 0;
	for(i = 0; i <5; i++)
	{
		ps->arr[i] = i;//0 1 2 3 4 
	}
	struct S *ptr = realloc(ps, 44);
	if(ptr != NULL)
	{
		ps = ptr;
	}
	for(i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	free(ps);
	ps = NULL;
	return 0;
}