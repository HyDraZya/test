#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int a[5] = { 1,2,3,4,5 };
//    int* ptr = (int*)(&a + 1);
//    //&a表示取出数组a的地址，&a+1表示跳过该数组，指向数组后面的地址
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    //此时a表示首元素地址，a+1表示第二个元素地址， (a + 1)表示第二个元素---2
//    //ptr表示数组后面的地址，ptr - 1表示数组末尾的地址， (ptr - 1)表示数组最后一个元素---5
//    //程序的结果是什么?
//    return 0;
//}


//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//    p = (struct Test*)0x100000;
//    printf("%p\n", p + 0x1);
//    //0x1 指的是十六进制的1，转换成十进制也是1
//    //0x100014 此时p是结构体指针，结构体大小是20个字节，p+1其地址+20,而20转换成地址是0x00100014(这是1是16,4就是4)
//    printf("%p\n", (unsigned long)p + 0x1);
//    //0x100001，此时p被强制类型转换成 unsigned long 类型，也就是整型，整型+1就是实实在在的+1,所以p+1就是地址+1（即整数+1）
//    printf("%p\n", (unsigned int*)p + 0x1);
//    //0x100004,p被强制类型转换成unsigned int*类型，p+1就是跳过一个int类型，地址+4
//    system("pause");
//    return 0;
//}

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    //&a表示取出数组的地址，&a+1表示跳过数组，到数组后面的地址
//    //(int*)(&a+1)将这个地址强制类型转换成int*，放到ptr1里面
//    int* ptr2 = (int*)((int)a + 1);
//    //a表示数组首元素地址，（int）a将这个地址强制类型转换成int类型
//    //(int)a + 1,就是地址+1，(int*)((int)a + 1)将这个地址强制类型转换成int*，放到ptr2里面
//    printf("%x,%x", ptr1[-1], *ptr2);
//    //4  ptr[-1]==>*(ptr-1)得到数组最后一个元素，即4，%x八进制打印结果也是4
//    //02 00 00 00 *ptr2得到的就是被强制类型转换为int类型的地址的值+1，地址的单位是字节
//    //由于ptr2解引用是通过小端(字节序存储)访问 00 00 00 02 ，打印的时候就是 02 00 00 00
//    return 0;
//}

//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    //初始化{}内部的( )是逗号表示式，结果是最后一个表达式的结果，即{1,3,5}
//    int* p;
//    p = a[0];
//    //将二维数组第一行第一个元素的地址赋值给p
//    printf("%d", p[0]);
//    //0 p[0]指向的是首元素地址，%d打印就是1
//    return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//指针：指针得到两者之间元素的个数
//	//&p[4][2] - &a[4][2]之间相差4个元素，且p<a 得到-4，所以用%d打印就是-4，
//	//-4原码：10000000000000000000000000000100
//	//反码是：11111111111111111111111111111011
//	//补码是：11111111111111111111111111111100
//	//此时通过补码直接打印地址，所以%p打印的就是FFFFFFFC
//	return 0;
//}


//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    //&aa + 1 表示的跳过整个数组，指向数组aa后面的地址
//    int* ptr2 = (int*)(*(aa + 1));
//    //*(aa + 1) 等价于aa[1]，是指第二行的首元素6的地址
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    //10 *(ptr1-1)所以此时指向10的地址，%d打印就是10
//    //5  *(ptr2-1)所以此时指向5的地址，%d打印就是5
//    return 0;
//}


//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	//此时数组a中存的都是字符指针，而字符指针存的都是首元素地址，所以存的是'w','a','a'
//	char **pa = a;
//	//pa此时指向了a的首元素地址，又由于a原来就有*，所以pa要用**
//	pa++;
//	//pa++，指向了第二个元素的地址，也就是a[1]的地址，a[1]内部存放"at"常量字符串的首地址
//	printf("%s\n", *pa);
//	//at *pa解引用a[1]的地址，%s打印字符串at
//	return 0;
//}


int main()
{
	char* c[] = { "ENTER" , "NEW" , "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	//POINT 此时cpp因为++后,*++cpp由cp中的c+3指向了cp中的c+2，而c+2对应的是c中的POINT，所以%s打印POINT
	printf("%s \n", *-- * ++cpp + 3);
	//ER 首先++的优先级最高，所以*++cpp后从c+2指向了cp中的c+1，而--后，c+1中的1被减去了，所以就是c
	//又因为*所以c指向的是c中的"ENTER"，又+3，指向了ENTER中的第二个E，所以打印出的结果就是ER
	printf("%s \n", *cpp[-2] + 3);
	//ST *cpp[-2]+3即**(cpp+(-2))+3又等价**(cpp-2)+3，而*(cpp-2)指向的是cp中的c+3的地址
	//又因为*所以指向了c中存的"FISRT"，又+3，指向了FIRST当中的S，所以打印出的结果就是ST
	printf("%s \n", cpp[-1][-1] + 1);
	//EW cpp[-1][-1]+1等价于*(*(cpp-1)-1)+1,首先*(cpp-1)，此时指向了cp中的c+2地址
	//此时c+2-1后得到c+1，*c+1
	return 0;
}