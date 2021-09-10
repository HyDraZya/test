#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("eg.dat", "w");
//	//fopen 打开名为test.txt的文件 
//	//wb 以二进制的形式写入文件
//	fwrite(&a, 4, 1, pf);//写一个四个字节的数据放到以pf维护的文件中去
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//int main()
//{
//	//打开文件mysize.txt
//	//相对路径
//	//..表示上一级路径
//	//fopen("../../mysize.txt", "r");
//	//.表示当前路径
//	FILE* pf = fopen("eg.dat", "w");//相对路径
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//打开成功
//	//读文件
//	printf("file open success.\n");
//	fclose(pf);//关闭文件
//	return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//int main()
//{
//	FILE* pf = fopen("mysize.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	写文件
//	关闭文件
//	fputc('H', pf);//stdout 标准输出流
//	fputc('y', pf);
//	fputc('D', pf);
//	fputc('r', pf);
//	fputc('a', pf);
//	fclose(pf);
//
//	return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//int main()
//{
//	FILE *pf = fopen("mysize.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE *pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{	
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//从标准输入流读取
//	fputs(buf, stdout);
//	//上面两种写法等价于下面两种写法
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int n;
//	float f;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 520, 13.14f, "HSS" };
//	FILE* pf = fopen("mysize.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.f, s.arr);
//	fclose(pf);//关闭文件
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int n;
//	float f;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.f), s.arr);
//	printf("%d %f %s\n", s.n, s.f, s.arr);
//	fclose(pf);//关闭文件
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int n;
//	float f;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 520, 13.14f, "HSS" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串存储到buffer
//	sprintf(buf, "%d %f %s", s.n, s.f, s.arr);
//	//从buffer中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.f), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.f, tmp.arr);
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	int height;
//};
//int main()
//{
//	struct S s = {"HyDra", 18, 185};
//	FILE* pf = fopen("mysize.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	int height;
//};
//int main()
//{
//	struct S tmp = { 0 };
//	FILE *pf = fopen("mysize.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %d\n", tmp.name, tmp.age, tmp.height);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, 2, SEEK_CUR);
//	//2，读取文件
//	int tmp = fgetc(pf);
//	printf("%c\n", tmp);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//2，读取文件
//	int eg = ftell(pf);
//	printf("%d\n", eg);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	int as = fgetc(pf);
//	printf("%c\n", as);
//
//	rewind(pf);
//	as = fgetc(pf);
//	printf("%c\n", as);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//feof(); EOF - end of file - 文件结束标志
//	FILE *pf = fopen("eg.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int size = fgetc(pf);
//	printf("%d\n", size);//-1
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include <stdio.h>
int main()
{
	FILE *pf = fopen("mysize.txt", "r");
	if (pf == NULL)
	{
		perror("open file eg.txt");
		return 0;
	}
	//读文件
	int ag = 0;
	while ((ag = fgetc(pf)) != EOF)
	{
		putchar(ag);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf(" end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}


