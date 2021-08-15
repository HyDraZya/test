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
//    //数组名是首元素地址,是没有办法直接进行两个数组的元素交换的
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
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
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
    //VC6.0环境下   <= 10 就死循环了
    //gcc 编译器    <= 11 就死循环了
    //Visual Studio <= 12 就死循环了
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
    assert(dest != NULL);//断言
    assert(src != NULL);
    //把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
    while (*dest++ = *src++)
    {
        ;
    }
}

//当我们使用指针的时候，必须要判断指针的有效性
int main()
{
    //strcpy:字符串拷贝
    char arr1[] = "################";
    char arr2[] = "bit";
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);

    const int num = 10;
    int* const p = &num;
    *p = 20;//error
    //const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p(num)的值
    //const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
    int n = 100;
    p = &n;
    printf("%d\n", num);

    system("pause");
    return 0;
}