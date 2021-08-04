#include <stdio.h>
#include <windows.h>

// int fun()
// {
//      static int count = 1;
//      return ++count;
// }
// int main()
// {
//      int answer;
//      answer = fun() - fun() * fun();
//      printf( "%d\n", answer);//输出多少？
// 	 system("pause");
//      return 0;
// }


// int main()	
// {
	// int i = 10;
 	// i = i-- - --i * ( i = -3 ) * i++ + ++i;
 	// printf("i = %d\n", i);
	// int c = 1;
	// c = c + --c;
	//-- 的优先级是大于 + 
	//--c = 1-0
	//0 1
 	// printf("%d\n",c);
	// int a = 1;
	// int b = 2;
	// int c = 3;
	// int d = 4;
	// int e = 5;
	// int f = 6;
	// int i = a*b + c*d + e*f;
	// a*b - 2
	// c*d - 12
	// a*b + c*d - 14
	// e*f - 30
	// a*b + c*d + e*f - 44

	// a*b - 2
	// c*d - 12
	// e*f - 30
	// a*b + c*d - 14
	// a*b + c*d + e*f - 44
	// printf("%d\n", i);


	// char c = 1;
	// printf("%u\n", sizeof(c));
	// printf("%u\n", sizeof(+c));
	// printf("%u\n", sizeof(!c));

	// char a = 0xb6;
	// short b = 0xb600;
	// int c = 0xb6000000;
	// if(a==0xb6)
	// 	printf("a");
	// if(b==0xb600)
	// 	printf("b");
	// if(c==0xb6000000)
	// 	printf("c");
// 	system("pause");
// 	return 0;
// }


// int main()
// {
// 	char a = 3;
// 	//0 0000 0011
// 	char b = 137;
// 	//0 0111 1111
// 	char c = a + b;  
// 	//0000 0000 0000 0000 0000 0000 1000 1100 
// 	//1111 1111 1111 1111 1111 1111 1000 1100
// 	//1000 0000 0000 0000 0000 0000 0111 0011
// 	//1000 0000 0000 0000 0000 0000 0111 0100
// 	printf("%d\n", c); //-126
// 	system("pause");
// 	return 0;
// }


// //创建一个结构体类型-struct-Stu
// struct Stu
// {
// 	//成员变量
// 	char name[10];
// 	int age;
// 	char id[20];
// };

// int main()
// {
// 	int a = 10;
// 	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
// 	struct Stu s1 = {"张三", 20, "202100001"};
// 	struct Stu *ps = &s1;
	
// 	printf("%s\n", ps->name);
// 	printf("%s\n", ps->age);
// 	//结构体指针->

// 	// printf("%s\n", (*ps).age);
// 	// printf("%s\n", (*ps).name);
// 	// printf("%s\n", s1.name);
// 	// printf("%s\n", s1.age);
// 	// printf("%s\n", s1.id);
// 	//结构体变量.成员名
// 	system("pause");
// 	return 0;
// }
