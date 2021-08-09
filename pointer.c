#include <stdio.h>
#include <windows.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    // int *pa = &a;
    // int *pb = &b;
    // int *pc = &c;
    //整型数组 - 存放整型
    //字符数组 - 存放字符
    //指针数组 - 存放指针
    //int arr[10];
    int *arr2[3] = {&a, &b, &c};
    int i = 0;
    for(i = 0; i < 3; i++)
    {
        printf("%d ", *(arr2[i]));
    }
    system("pause");
    return 0;
}

// int main()
// {
//     int a = 10;
//     int *pa = &a;
//     int * *ppa = &pa;//ppa就是二级指针 
//     ** ppa = 20;
//     printf("%d\n", *pa);
//     printf("%d\n", **ppa);
//     printf("%d\n", a);
//     //int *** pppa = &ppa;
//     //三级和往上级别指针都同上
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};
//     int *p = arr;
//     int i = 0;
//     for(i=0; i<10; i++)
//     {
//         *(p+i) = i;
//     }
//     for(i=0; i<10; i++)
//     {
//         printf("%d ", arr[i]);
//         //此时用*(p+i)也可以
//     }
//     for(i = 0; i < 10; i++)
//     {
//         printf("%p ———— %p\n", p+i, &arr[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,0};    
//     printf("%p\n", &arr);
//     printf("%p\n", &arr+1); 
//     printf("\n%p\n", arr);//地址 = 首元素地址
//     printf("%p\n", arr+1);
//     printf("\n%p\n", &arr[0]);
//     printf("%p\n", &arr[0]+1);
//     system("pause");
//     return 0;
// }

// #define A 5
// int main()
// {
//     float arr[A];
//     float *p;
//     for(p = &arr[A]; p > &arr[0];)
//     {
//         * --p = 0;
//     }
//     printf("%d\n", arr[A]);
//     system("pause");
//     return 0;
// }

// int my_strlen(char *str)
// {
//     char *start = str;
//     char *end = str;
//     while(*end != '\0')
//     {
//         end++;
//     }
//     return end - start;//
// }

// int main()
// {
//     //strlen - 求字符串长度
//     //递归 - 模拟实现了strlen-计数器的方式1，递归的方式2
//     char arr[] = "bit";
//     int len = my_strlen(arr);
//     printf("%d\n", len);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char ch[5] = {0};
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     printf("%d\n", &arr[9] - &arr[0]);//9
//     //指针+/-指针等于中间元素个数
//     //printf("%d\n", &arr[9] - &ch[0]);
//     //只有当指针指向同一个空间时才可以进行+/-
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int i = 0;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int *p = &arr[9];
    // for(i = 0; i < sz; i++)
    // {
    //     printf("%d ", *p);
    //     p = p+1;
    //     p+=1;
    //     p++; 三种都行
    // }
    // for(i = 0; i < 5; i++)
    // {
    //     printf("%d ", *p);
    //     p+=2;
    // }
//     for(i = 0; i < 5; i++)
//     {
//         printf("%d ", *p);
//         p-=2;
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int *p = NULL;
//     int a = 10;
//     p = &a;
//     if(p != NULL)
//     {
//         *p = 20;
//     }
//     system("pause");
//     return 0;
// }

// int *test()
// {
//     int a = 10;//开辟a的地址空间
//     return &a;//返回p后空间会还给系统（不再属于编译器）
// }
// int main()
// {
//     int *p = test();//调用上方test函数，p接收了a的地址
//     *p = 20;//指向的空间已经被释放了
//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};
//     int *p = arr;
//     int i = 0;
//     for(i = 0; i <= 11; i++)
//     {
//         p++;//10后面就会越界
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};
//     //int *p = arr;
//     //数组名-首元素的地址
//     char *p = arr;
//     int i = 0;
//     for(i = 0; i < 10; i++)
//     {
//         *(p + i) = 1;//将数组内的所有0元素更改为1
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a = 0x11223344;
//     int *pa = &a;
//     char *pc = &a;
//     printf("%p\n", pa);
//     printf("%p\n", pa+1);//4个字节
//     printf("%p\n", pc);
//     printf("%p\n", pc+1);//1个字节
//     system("pause");
//     return 0;
// }

// int main()
// {
//     // printf("%d\n", sizeof(char*));
//     // printf("%d\n", sizeof(short*));
//     // printf("%d\n", sizeof(int*));
//     // printf("%d\n", sizeof(double*));
//     int a = 0x11223344;
//     int *pa = &a;
//     char *pc = &a;
//     printf("%p\n", pa);//0064FE0C
//     printf("%p\n", pc);//0064FE0C
//     system("pause");
//     return 0;
// }