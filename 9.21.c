#include <stdio.h>
#include <windows.h>
// int Print_Table(int n)
// {
//     int i = 0;
//     int j = 0;
//     for(i = 1; i <= n; i++)
//     {
//         for(j = 1; j <= i; j++)
//         {
//             printf("%d*%d=%d\t", i, j, i*j);
//         }
//     printf("\n");
//     }
// }

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     Print_Table(n);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     for(i = 1; i < 10; i++)
//     {
//         int j = 0;
//         for(j = 1; j <= i; j++)
//         {
//             printf("%d*%d=%d\t", i, j, i*j);
//         }
//     printf("\n");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int year = 0;
//     int count = 0;
//     for(year = 1000; year <= 2000; year++)
//     {
//         if((year%4 == 0 && year %100 != 0) || year%400 == 0)
//         {
//             printf("%d ", year);
//             count++;
//         }
//     }
//     printf("\ncount = %d\n", count);
//     system("pause");
//     return 0;
// }

// int is_leap_year(int y)
// {
//     if((y%4 == 0 && y %100 !=0) || y %400 == 0)
//         return 1;
//     else
//         return 0;
// }

// int main()
// {
//     int year = 0;
//     int count = 0;
//     for(year = 1000; year <= 2000; year++)
//     {
//         if(is_leap_year(year) == 1)
//         {
//             printf("%d ", year);
//             count++;
//         }
//     }
//     printf("\ncount = %d\n", count);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int tmp = 0;
//     printf("before a = %d\n", a);
//     printf("before b = %d\n", b);
//     tmp = a;
//     a = b;
//     b = tmp;
//     printf("after a = %d\n", a);
//     printf("after b = %d\n", b);
//     system("Pause");
//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("before a = %d\n", a);
//     printf("before b = %d\n", b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("after a = %d\n", a);
//     printf("after b = %d\n", b);
//     system("Pause");
//     return 0;
// }

// int main()
// {
//     int a = 10;
//     //0000 1010
//     int b = 20;
//     //0001 0100
//     printf("before a = %d\n", a);
//     printf("before b = %d\n", b);
//     a = a^b;
//     //0001 1110
//     b = a^b;
//     //0000 1010
//     a = a^b;
//     //0001 0100
//     printf("after a = %d\n", a);
//     printf("after b = %d\n", b);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int max = 0;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int i = 0;
//     max = arr[0];
//     for(i = 1; i < sz; i++)
//     {
//         if(arr[i] > max)
//         max = arr[i];
//     }
//     printf("max = %d\n", max);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, c = 0;
//     scanf("%d %d %d", &a, &b, &c);
//     if(a < b)
//     {
//         int tmp = a;
//         a = b;
//         b = tmp;
//     }
//     if(a < c)
//     {
//         int tmp = a;
//         a = c;
//         c = tmp;
//     }
//     if(b < c)
//     {
//         int tmp = b;
//         b = c;
//         c = tmp;
//     }
//     printf("%d %d %d\n", a, b, c);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", __FILE__);
// 	printf("%d\n", __LINE__);
// 	printf("%s\n", __DATE__);
// 	printf("%s\n", __TIME__);
// 	printf("%s\n", __FUNCTION__);
// 	//printf("%d\n", __STDC__);
// 	//因为VS2019不遵循ANSI C，该符号未定义，所以进行了注释
// 	return 0;
// }

// int main()
// {
// 	int i = 0;
// 	int arr[10] = {"log.txt", "w"};
// 	FILE *pf = fopen("log.txt", "w");
// 	for(i = 0; i < 10; i++)
// 	{
// 		arr[i] = i;
// 		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
// 	}
// 	fclose(pf);
// 	pf = NULL;
// 	for(i = 0; i < 10; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #define SQUARE(x) x*x//求x的平方
// int main()
// {
// 	int ret = SQUARE(5);
// 	//相当于int ret = 5*5;
// 	printf("%d\n", ret);//结果为25
// 	return 0;
// }

// #include <stdio.h>
// #define SQUARE(x) ((x)*(x)*100)
// int main()
// {
// 	int ret = SQUARE(3);
// 	printf("%d\n", ret);
// 	return 0;
// }

// #include <stdio.h>
// #define CAT(x,y) x##y
// int main()
// {
// 	int workhard = 100;
// 	printf("%d\n", CAT(work, hard));//打印100
// 	return 0;
// }

// #include <stdio.h>
// #define print(data,format) printf("The value of "#data" is "format"\n",data)
// int main()
// {
// 	int age = 10;
// 	print(age, "%d");
// 	double pi = 3.14;
// 	print(pi, "%f");
// 	int* p = &age;
// 	print(p, "%p");
// 	return 0;
// }

// #include <stdio.h>
// #define MIN 10
// int main()
// {
//     #if !defined(MAX)
//     #ifdef MIN
// 	printf("hello\n");
//     #else
// 	printf("world\n");
//     #endif
//     #endif
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d\n", i);
// #if 0
// 		printf("hello world!\n");
// #endif
// 	}
// 	return 0;
// }

#ifndef __ADD_H__
#define __ADD_H__

//头文件内容

#endif

#pragma once

//头文件内容

