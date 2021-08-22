#include <stdio.h>
#include <windows.h>
// char * my_strcpy(char *dest, const char* src);
// //1.写一个函数指针pf，能够指向my_strcpy
// char * (*pf)(char*, const char*);
// //2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址 
// char * (*pfArr[4](char*, const char*));

// void menu()
// {
//     printf("**********************\n");
//     printf("***  1.add  2.sub  ***\n");
//     printf("***  3.mul  4.div  ***\n");
//     printf("***  5.Xor  0.exit ***\n");
//     printf("**********************\n");
// }

// int Add(int x, int y)
// {
//     return x + y;
// }
// int Sub(int x, int y)
// {
//     return x - y;
// }
// int Mul(int x, int y)
// {
//     return x * y;
// }
// int Div(int x, int y)
// {
//     return x / y;
// }
// int Xor(int x, int y)
// {
//     return x ^ y;
// }
// void Calc(int (*pf)(int, int))
// {
//     int x = 0;
//     int y = 0;
//     printf("请输入两个操作数:>");
//     scanf("%d%d", &x, &y);
//     printf("%d\n", pf(x, y));
// }

// int main()
// {
//     int input = 0;
//     do
//     {
//         menu();
//         printf("请选择:>");
//         scanf("%d", &input);
//         switch(input)
//         {
//         case 1:
//             Calc(Add);
//             break;
//         case 2:
//             Calc(Sub);
//             break;
//         case 3: 
//             Calc(Mul);
//             break;
//         case 4:
//             Calc(Div);
//             break;
//         case 5:
//             Calc(Xor);
//             break;
//         case 0:
//         printf("退出\n");
//             break;
//         default:
//             printf("选错误\n'");
//             break;
//         }
//     }while(input);
//     return 0;
// }

// void menu()
// {
//     printf("**********************\n");
//     printf("***  1.add  2.sub  ***\n");
//     printf("***  3.mul  4.div  ***\n");
//     printf("*** 5.Xor  0. exit ***\n");
//     printf("**********************\n");
// }

// int Add(int x, int y)
// {
//     return x + y;
// }
// int Sub(int x, int y)
// {
//     return x - y;
// }
// int Mul(int x, int y)
// {
//     return x * y;
// }
// int Div(int x, int y)
// {
//     return x / y;
// }
// int Xor(int x, int y)
// {
//     return x ^ y;
// }
// int main()
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;
//     //pfArr是一个函数指针数组 - 转移表
//     int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor};
//     do
//     {
//         menu();
//         printf("请选择:>");
//         scanf("%d", &input);
//         if(input >= 1 && input <= 5)
//         {
//             printf("请输入两个操作数:>");
//             scanf("%d%d", &x, &y);
//             int ret = pfArr[input](x, y);
//             printf("%d\n", ret);
//         }
//         else if(input == 0)
//         {
//             printf("退出\n");
//         }
//         else
//         {
//             printf("选择错误\n");
//         }
//     }while(input);
//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};
//     int (*p)[10] = &arr; //取出数组的地址
//     int (*pf)(int, int);//函数指针
//     int (*pfArr[4])(int, int);//pfArr是一个数组，函数指针数组
//     //ppfArr是一个指向[函数指针数组]的指针
//     int (*(*ppfArr)[4])(int, int);
//     //ppfArr 是一个数组指针，指针指向的数组有4个元素
//     //指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//     return 0;
// }

// void  print(char* str)
// {
//     printf("hehe:%s", str);
// }

// void test(void(*p)(char*))
// {
//     printf("test\n");
//     p("bit");//test当中得到p，通过来*p调用print函数
// }
// int main()
// {

//     test(print);
//     system("pause");
//     return 0;
// }


// int Add(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     //指针数组
//     // int *arr[10];
//     //数组指针
//     // int* (*pa)[10] = &arr;
//     //函数指针
//     int(*pAdd)(int, int) = Add;//&Add
//     // int sum = (*pAdd)(1,2);
//     // int sum = pAdd(1, 2);
//     // printf("sum = %d\n", sum);
//     //函数指针数组
//     int(*pArr[5])(int, int);
//     //指向函数指针数组的指针
//     int(*(*ppArr)[5])(int, int) = &pArr;
    
//     system("pause");
//     return 0;
// }

void BubbleSort(int arr[], int sz)
{
    int i = 0;
    for(i = 0; i < sz-1; i++)
    {
        int j = 0;
        for(j = 0; j < ; j++)
        if(arr[j] > arr[j+1] 
        {
            int tmp = arr[j];
            arr[j] = arr[j +1];
            arr[j + 1] = tmp;
        }     
    }
}

struct Stu
{
    char name[20];
    int age;
}

int main()
{
    //冒泡排序函数

    int arr[] = {1,3,4,5,7,2,4,6,8,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    BubbileSort(arr, sz);
    //冒泡排序函数只能排序整形数组
    // struct Stu s[3] = {{ "zhangsan", 20},{"lisi",25},"wangwu",30};
    // float f = {9.0,8.0,4.0,7.0,6.0,5.0};
    //BubbileSort(f, sz);
    return 0;
}