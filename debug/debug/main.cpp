#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//    int arr1[] = { 1,3,5,7,9 };
//    int arr2[] = { 0,2,4,6,8 };
//    int tmp = 0;
//    int i = 0;
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    for (i = 0; i < sz; i++)
//    {
//        tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//    //����������Ԫ�ص�ַ,��û�а취ֱ�ӽ������������Ԫ�ؽ�����
//    system("pause");
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//		for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	system("pause");
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//    printf("%p\n", arr);
//    printf("%p\n", &i);
    //VC6.0������   <= 10 ����ѭ����
    //gcc ������    <= 11 ����ѭ����
    //Visual Studio <= 12 ����ѭ����
    //for (i = 0; i <= 12; i++)
    //{
    //    printf("hehe\n");
    //    arr[i] = 0;
    //}
//    return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//    while (*src != '\0')
//    {
//        *dest = *src;
//        src++;
//        dest++;
//    }
//    *dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//    if (dest != NULL && src != NULL)
//    {
//        while (*dest++ = *src++)
//        {
//            ;
//        }
//    }
//}

void my_strcpy(char* dest, const char* src)
{
    assert(dest != NULL);//����
    assert(src != NULL);
    //��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
    while (*dest++ = *src++)
    {
        ;
    }
}

//������ʹ��ָ���ʱ�򣬱���Ҫ�ж�ָ�����Ч��
int main()
{
    //strcpy:�ַ�������
    char arr1[] = "################";
    char arr2[] = "bit";
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);

    const int num = 10;
    int* const p = &num;
    *p = 20;//error
    //const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
    //const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
    int n = 100;
    p = &n;
    printf("%d\n", num);

    system("pause");
    return 0;
}