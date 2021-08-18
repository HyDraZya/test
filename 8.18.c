#include <stdio.h>
#include <windows.h>
// void test(int arr[])
// {
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     printf("%d\n", sz);
// }
// int main()
// {
//     int arr[10] = {0};
//     test(arr);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char arr[] = "abcedf";
//     //arr数组中存储了字符串"abcedf"
//     char *pc = arr;
//     //解引用pc指向了arr数组所占用的地址/开辟的空间
//     printf("%s\n", arr);
//     printf("%s\n", pc);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char *p = "abcdef";//abcdef是一个常量字符串
//     printf("%c\n", *p);//%c输出的是第一个字符的地址，可以看出p中存的是a的地址
//     printf("%s\n", p);//%s输出的是一整个字符串，abcdef
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = "abcdef";
//     char *p1 = "abcdef";
//     char *p2 = "abcdef";
//     if(arr1 == arr2)
//         printf("arr1 and arr2 are same\n");
//     else
//         printf("arr1 and arr2 are not same\n");
//     if(p1 == p2)
//         printf("p1 and p2 are same\n");
//     else
//         printf("p1 and p2 are not same\n");
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};//整型指针
//     char ch[5] = {0};//字符指针
//     int *parr[4];//存放整型指针的数组-指针数组
//     char *pch[5];//存放字符指针的数组-指针数组
//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = 30;
//     int d = 40;
//     int *arr[4] = {&a, &b, &c, &d};
//     int i = 0;
//     for(i = 0; i < 4; i++)
//     {
//         printf("%d ", *(arr[i]));
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr1[] = {1,2,3,4,5};
//     int arr2[] = {2,3,4,5,6};
//     int arr3[] = {3,4,5,6,7};
//     int *parr[] = {arr1, arr2, arr3};
//     int i = 0;
//     for(i = 0; i < 3; i++)
//     {
//         int j = 0;
//         for(j = 0; j < 5; j++)
//         {
//             printf("%d ",*(parr[i] + j));
//         }
//         printf("\n");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int *p = NULL;//p是整型指针 - 指向整型的指针 - 可以存放整型的地址
//     char *p = NULL;//p是字符指针 - 指向字符的指针 - 可以存放字符的地址
//     //数组指针 - 指向数组的指针 - 存放数组的地址
//     // int arr[10] ={0};
//     //arr - 首元素地址
//     //&arr[0] - 首元素的地址
//     //&arr 数组的地址


//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//     int (*p)[10] = &arr1;//存储数组
//     //上面的p就是数组指针
//     char *arr2[5];
//     char *(*pa)[5] = &arr2;
//     //pa是指针变量的名字
//     //*说明pa是指针
//     //[5]表示pa指向的数组是5个元素的
//     //char*说明pa指向的数组元素类型是char*
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[10] = {0};
//     printf("%p\n", arr);
//     printf("%p\n", &arr);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[10] = { 0 };
//     printf("arr = %p\n", arr);
//     printf("&arr= %p\n", &arr);

//     printf("arr+1 = %p\n", arr+1);
//     printf("&arr+1= %p\n", &arr+1);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//     int (*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
//     system("pause");
//     return 0;
// }

void print_arr1(int arr[3][5], int row, int col)
{
    int i = 0;
    for(i=0; i<row; i++)
   {
        for(j=0; j<col; j++)
       {
            printf("%d ", arr[i][j]);
       }
        printf("\n");
   }
}
void print_arr2(int (*arr)[5], int row, int col)
{
    int i = 0;
    for(i=0; i<row; i++)
   {
        for(j=0; j<col; j++)
       {
            printf("%d ", arr[i][j]);
       }
        printf("\n");
   }
}
int main()
{
    int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
   print_arr1(arr, 3, 5);
    //数组名arr，表示首元素的地址
    //但是二维数组的首元素是二维数组的第一行
    //所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
    //可以数组指针来接收
    print_arr2(arr, 3, 5);
    return 0;
}