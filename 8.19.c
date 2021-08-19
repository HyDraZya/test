#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int i = 0;
//     int *p = arr;
//     for(i = 0; i < 10; i++)
//     {
//         // printf("%d ", p[i]);       
//         // printf("%d ", arr[i]);  
//         // printf("%d ", *(p+i));   
//         printf("%d ", *(arr+i));
//         //以上四种均为相同     
//     }
//     system("pause");
//     return 0;
// }

// void print1(int arr[3][5], int x, int y)
// {
//      int i = 0;
//      int j = 0;
//      for(i = 0; i < x; i++)
//      {
//           for(j = 0; j < y; j++)
//           {
//                printf("%d ", arr[i][j]);
//           }
//      printf("\n");     
//      } 
// }

// void print2(int (*p)[5] , int x, int y)
// {
//      int i = 0;
//      for(i = 0; i < x; i++)
//      {
//           int j = 0;
//           for(j = 0; j < y; j++)
//           {
//                //printf("%d ",*(*(p+i)) + j);
//                //printf("%d ",(*(p+i))[j]);
//                //printf("%d ",*(p[i] + j);
//                printf("%d ",p[i][j]);
//           }
//      printf("\n");
//      }
// }
// int main()
// {
//      int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//      //首先把arr想象为一维数组
//      print1(arr,3,5);//arr：数组名，即首元素地址
//      print2(arr,3,5);//arr 
//      system("pause");
//      return 0;
// }

// int main()
// {
//     //字符指针
//     char ch = 'w';
//     char *p = &ch;
//     const char * p2 = "abcdef";
//     //指针数组：是数组，用来存放指针的数组
//     int *arr[10];
//     char *ch[5];
//     //数组指针：指向数组的指针
//     int *p3; //整型指针：指向整形的指针
//     char *p4; //字符指针：指向字符串的指针
//     int arr2[5];//数组
//     int (*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//     int (*parr3[10])[5];
//     return 0;
// }


// void test(int arr[])//ok?
// {}
// void test(int arr[10])//ok?
// {}
// void test(int *arr)//ok?
// {}
// void test2(int *arr[20])//ok?
// {}
// void test2(int **arr)//ok?
// {}
// int main()
// {
//  int arr[10] = {0};
//  int *arr2[20] = {0};
//  test(arr);
//  test2(arr2);
// }

// void test(int arr[3][5])
// {}//ok
// void test1(int arr[][5])
// {}//ok
// void test2(int arr[3][])
// {}//no
// void test3(int *arr)
// {}//arr此时是二维数组，数组名是首元素地址，也就是第一行的代码，它是一个一维数组的地址，无法传到一个整型指针里去(整型指针是用来存放int整型的)
// void test4(int **arr)
// {}//二级指针是用来存放一级指针的地址
// void test5(int(*arr)[5])
// {}//arr此时是一个指针，指向有5个元素的数组，每个元素的类型为int，数组名传过去后也就是第一行的地址，第一行正好是5个元素，所以正确
// int main()
// {
//     int arr[3][5] = {0};
//     // test(arr);//二维数组传参
//     // test1(arr);
//     // test2(arr);
//     test3(arr);
//     test4(arr);
//     test5(arr);
//     system("pause");
//     return 0;
// }

// void print(int *p, int sz)
// {
//     int i = 0;
//     for(i = 0; i < sz; i++)
//     {
//         printf("%d ", *(p+i));
//     }
// }

// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int *p = arr;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     print(p, sz);
//     system("pause");
//     return 0;
// }

// void test1(int *p)
// {}

// void test2(char *p)
// {}

// int main()
// {
//     int a = 10;
//     int *p1 = &a;
//     test1(&a);
//     test1(p1);
//     char ch = 'w';
//     char *p2 = &ch;
//     test2(&ch);
//     test2(p2);
//     system("pause");
//     return 0;
// }

// void test(int **ptr)
// {
//     printf("num = %d\n", **ptr);
// }
// int main()
// {
//     int n = 10;
//     int *p = &n;
//     test(&p);
//     int **pp = &p;
//     test(pp);
//     int *arr[10];
//     test(arr);//指针数组也可以
//     system("pause");
//     return 0;
// }

// void test(char **p)
// {}
// int main()
// {
//     char c = 'b';
//     char*pc = &c;
//     char**ppc = &pc;
//     char* arr[10];
//     test(&pc);
//     test(ppc);
//     test(arr);//指针数组也可以
//     return 0;
// }

// int Add(int x, int y)
// {
//     int z = 0;
//     z = x + y;
//     return z;
// }
// int main()
// {
//     // int a = 10;
//     // int b = 20;
//     // printf("%p\n", Add);
//     // printf("%p\n", &Add); 
//     // int arr[10] = {0};
//     // int (*p)[10] = &arr;
//     int (*pa)(int, int) = Add;
//     printf("%d\n", (*pa)(2,3));//5
//     system("pause");
//     return 0;
// }

// void print(char *str)
// {
//     printf("%s\n", str);
// }
// int main()
// {
//     void (*p)(char*) = Print();
//     (*p)("hello bit");//调用函数
//     system("pause");
//     return 0;
// }

// //代码1
// (*(void (*)())0)();
// //代码2
// void (*signal(int , void(*)(int)))(int);

// int Add(int x, int y)
// {
//     int z = 0;
//     z = x + y;
//     return z;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int (*pa)(int, int) = Add;
//     printf("%d\n", pa(2,3));//5
//     printf("%d\n", Add(2,3));//5
//     printf("%d\n", (*pa)(2,3));//5
//     //此时函数指针前面的*虽然没有什么效果，但是加上可以解引用找到这个函数，不过记得一定要加上()
//     system("pause");
//     return 0;
// }
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
int main()
{
    //指针数组
    int *arr[5];
    //需要一个函数指针的数组，可以存放四个函数的地址 Add/Sub/Mul/Div 
    int (*pa)(int, int) = Add;
    int (*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        printf("%d\n", parr[i](2, 3));// 5 -1 6 0
    }
    system("pause");
    return 0;
}