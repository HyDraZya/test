#include <stdio.h>
#include <windows.h>
// char * my_strcpy(char *dest, const char* src);
// //1.дһ������ָ��pf���ܹ�ָ��my_strcpy
// char * (*pf)(char*, const char*);
// //2.дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ 
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
//     printf("����������������:>");
//     scanf("%d%d", &x, &y);
//     printf("%d\n", pf(x, y));
// }

// int main()
// {
//     int input = 0;
//     do
//     {
//         menu();
//         printf("��ѡ��:>");
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
//         printf("�˳�\n");
//             break;
//         default:
//             printf("ѡ����\n'");
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
//     //pfArr��һ������ָ������ - ת�Ʊ�
//     int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor};
//     do
//     {
//         menu();
//         printf("��ѡ��:>");
//         scanf("%d", &input);
//         if(input >= 1 && input <= 5)
//         {
//             printf("����������������:>");
//             scanf("%d%d", &x, &y);
//             int ret = pfArr[input](x, y);
//             printf("%d\n", ret);
//         }
//         else if(input == 0)
//         {
//             printf("�˳�\n");
//         }
//         else
//         {
//             printf("ѡ�����\n");
//         }
//     }while(input);
//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};
//     int (*p)[10] = &arr; //ȡ������ĵ�ַ
//     int (*pf)(int, int);//����ָ��
//     int (*pfArr[4])(int, int);//pfArr��һ�����飬����ָ������
//     //ppfArr��һ��ָ��[����ָ������]��ָ��
//     int (*(*ppfArr)[4])(int, int);
//     //ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//     //ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
//     return 0;
// }

// void  print(char* str)
// {
//     printf("hehe:%s", str);
// }

// void test(void(*p)(char*))
// {
//     printf("test\n");
//     p("bit");//test���еõ�p��ͨ����*p����print����
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
//     //ָ������
//     // int *arr[10];
//     //����ָ��
//     // int* (*pa)[10] = &arr;
//     //����ָ��
//     int(*pAdd)(int, int) = Add;//&Add
//     // int sum = (*pAdd)(1,2);
//     // int sum = pAdd(1, 2);
//     // printf("sum = %d\n", sum);
//     //����ָ������
//     int(*pArr[5])(int, int);
//     //ָ����ָ�������ָ��
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
    //ð��������

    int arr[] = {1,3,4,5,7,2,4,6,8,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    BubbileSort(arr, sz);
    //ð��������ֻ��������������
    // struct Stu s[3] = {{ "zhangsan", 20},{"lisi",25},"wangwu",30};
    // float f = {9.0,8.0,4.0,7.0,6.0,5.0};
    //BubbileSort(f, sz);
    return 0;
}