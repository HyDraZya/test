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
//         //�������־�Ϊ��ͬ     
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
//      //���Ȱ�arr����Ϊһά����
//      print1(arr,3,5);//arr��������������Ԫ�ص�ַ
//      print2(arr,3,5);//arr 
//      system("pause");
//      return 0;
// }

// int main()
// {
//     //�ַ�ָ��
//     char ch = 'w';
//     char *p = &ch;
//     const char * p2 = "abcdef";
//     //ָ�����飺�����飬�������ָ�������
//     int *arr[10];
//     char *ch[5];
//     //����ָ�룺ָ�������ָ��
//     int *p3; //����ָ�룺ָ�����ε�ָ��
//     char *p4; //�ַ�ָ�룺ָ���ַ�����ָ��
//     int arr2[5];//����
//     int (*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
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
// {}//arr��ʱ�Ƕ�ά���飬����������Ԫ�ص�ַ��Ҳ���ǵ�һ�еĴ��룬����һ��һά����ĵ�ַ���޷�����һ������ָ����ȥ(����ָ�����������int���͵�)
// void test4(int **arr)
// {}//����ָ�����������һ��ָ��ĵ�ַ
// void test5(int(*arr)[5])
// {}//arr��ʱ��һ��ָ�룬ָ����5��Ԫ�ص����飬ÿ��Ԫ�ص�����Ϊint������������ȥ��Ҳ���ǵ�һ�еĵ�ַ����һ��������5��Ԫ�أ�������ȷ
// int main()
// {
//     int arr[3][5] = {0};
//     // test(arr);//��ά���鴫��
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
//     test(arr);//ָ������Ҳ����
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
//     test(arr);//ָ������Ҳ����
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
//     (*p)("hello bit");//���ú���
//     system("pause");
//     return 0;
// }

// //����1
// (*(void (*)())0)();
// //����2
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
//     //��ʱ����ָ��ǰ���*��Ȼû��ʲôЧ�������Ǽ��Ͽ��Խ������ҵ���������������ǵ�һ��Ҫ����()
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
    //ָ������
    int *arr[5];
    //��Ҫһ������ָ������飬���Դ���ĸ������ĵ�ַ Add/Sub/Mul/Div 
    int (*pa)(int, int) = Add;
    int (*parr[4])(int, int) = {Add, Sub, Mul, Div};//����ָ�������
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        printf("%d\n", parr[i](2, 3));// 5 -1 6 0
    }
    system("pause");
    return 0;
}