#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// int main()
// {
// 	//1.通过动态开辟申请10个int类型的空间
// 	//根据实际使用强制类型转换为想要的类型
// 	int *p = (int*)malloc(10 * sizeof(int));
// 	//2.malloc有可能申请空间失败，所以需要判断一下
// 	if(p == NULL)//判断p指针是否为空
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
// 	//当动态申请的空间不再使用的时候，就应该还给操作系统
// 	free(p);//释放p所指向的动态内存
// 	p = NULL;//是否有必要
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
// 	//free函数用来释放动态开辟的空间
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
// 	//上方仅仅只是在使用malloc开辟的20个字节空间
// 	//假设这里，20个字节空间不能满足我们的需求了
// 	//希望能够有40个字节的空间
// 	//这里就可以使用realloc来调整动态开辟的内存

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
// 	//释放动态开辟的内存空间
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

// //1，对NULL的解引用操作
// int main()
// {	
// 	int *p = (int*)malloc(40);
// 	//万一malloc失败了，p就会被赋值为NULL
// 	//*p = 0;//error
// 	int i = 0;
// 	for(i = 0; i < 10; i++)
// 	{
// 		*(p+i) = i;//非法访问
// 	}
// 	free(p);
// 	p = NULL;
// 	return 0;
// }


//2.对动态开辟空间的越界访问
// int main()
// {
// 	int *p = (int*)malloc(5 * sizeof(int));//只有5个元素
// 	if( p == NULL)
// 	{
// 		return 0;
// 	}
// 	else
// 	{
// 		int i = 0;
// 		for(i = 0; i < 10; i++)//只有5个元素，循环10次，会造成越界访问
// 		{
// 			*(p+i) = i;
// 		}
// 	}
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

// 3.对非动态开辟内存的free
// int main()
// {
// 	int a = 10;
// 	int *p = &a;
// 	*p = 20;
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

//4.使用free释放动态开辟内存的一部分
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
// 	//此时p指向的不是动态开辟出的起始位置了
// 	//而free只能释放动态开辟出的起始位置

// 	//回收空间
// 	free(p);
// 	p = NULL;
// 	return 0;
// }

//5.对同一块动态内存的多次释放
// int main()
// {
// 	int *p = (int*)malloc(40);
// 	if(p == NULL)
// 	{
// 		return 0;
// 	}
// 	//使用
// 	//释放
// 	free(p);
// 	//p = NULL 需要定义为空指针才能引用下面的free
// 	free(p);
// }

//6.动态开辟内存忘记释放
// int main()
// {
// 	while(1)
// 	{
// 		malloc(1);//开辟完空间后一直没有释放
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
	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
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