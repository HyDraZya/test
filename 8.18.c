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
//     //arr�����д洢���ַ���"abcedf"
//     char *pc = arr;
//     //������pcָ����arr������ռ�õĵ�ַ/���ٵĿռ�
//     printf("%s\n", arr);
//     printf("%s\n", pc);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char *p = "abcdef";//abcdef��һ�������ַ���
//     printf("%c\n", *p);//%c������ǵ�һ���ַ��ĵ�ַ�����Կ���p�д����a�ĵ�ַ
//     printf("%s\n", p);//%s�������һ�����ַ�����abcdef
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
//     int arr[10] = {0};//����ָ��
//     char ch[5] = {0};//�ַ�ָ��
//     int *parr[4];//�������ָ�������-ָ������
//     char *pch[5];//����ַ�ָ�������-ָ������
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
//     int *p = NULL;//p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//     char *p = NULL;//p���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//     //����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//     // int arr[10] ={0};
//     //arr - ��Ԫ�ص�ַ
//     //&arr[0] - ��Ԫ�صĵ�ַ
//     //&arr ����ĵ�ַ


//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//     int (*p)[10] = &arr1;//�洢����
//     //�����p��������ָ��
//     char *arr2[5];
//     char *(*pa)[5] = &arr2;
//     //pa��ָ�����������
//     //*˵��pa��ָ��
//     //[5]��ʾpaָ���������5��Ԫ�ص�
//     //char*˵��paָ�������Ԫ��������char*
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
//     int (*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p
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
    //������arr����ʾ��Ԫ�صĵ�ַ
    //���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
    //�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
    //��������ָ��������
    print_arr2(arr, 3, 5);
    return 0;
}