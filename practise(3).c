#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
// int main()
// {
//     unsigned long pulArray[] = {6,7,8,9,10};
//     unsigned long *pulPtr;
//     pulPtr = pulArray;
//     *(pulPtr + 3) += 3;
//     printf("%d,%d\n", *pulPtr, *(pulPtr + 3));  
//     system("pause");
//     return 0;
// }

// void reverse(char *str)
// {
//     assert(str);
//     int len = strlen(str);
//     char *left = str;
//     char *right = str + len - 1;

//     while(left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }

// int main()
// {
//     char arr[256] = { 0 };
//     printf("����һ���ַ�����");
//     //scanf("%s", arr);
//     gets(arr);
//     //������
//     reverse(arr);
//     printf("�������ַ�����%s\n", arr);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a,n = 0;
//     scanf("%d %d", &a, &n);
//     int i,sum,ret = 0;
//     //2 22 222 2222 22222
//     for(i = 0; i < n; i++)
//     {
//         ret = ret * 10 + a;
//         sum += ret;
//     }
//     printf("%d\n", sum);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     for(i = 0; i <= 100000; i++)
//     {
//         //�ж�i�Ƿ�Ϊˮ�ɻ���(������)
//         //1.����i��λ�� nλ��
//         int n = 1;
//         int tmp = i;
//         int sum = 0;
//         while(tmp /= 10)
//         {
//             n++;
//         }
//         //2.����i��ÿһλ��n�η�֮��
//         tmp = i;
//         while(tmp)
//         {
//             sum += pow(tmp % 10, n);
//             tmp /= 10;
//         }
//         //3.�Ƚ�i��sum�Ƿ����
//         if(i == sum)
//         {
//             printf("%d ", i);
            
//         }
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int line = 0;
//     scanf("%d", &line);//���޴�СΪ60
//     int i = 0;
//     //��ӡ�ϰ벿��
//     for(i = 0; i < line; i++)
//     {
//         //��ӡ�ո�
//         int j = 0;
//         for(j = 0; j < line-1-i; j++)
//         {
//             printf(" ");
//         }
//         //��ӡ*
//         for(j = 0; j < 2*i +1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     //��ӡ�°벿��
//     for(i = 0; i < line - 1; i++)
//     {
//         int j = 0;
//         //��ӡ�ո�
//         for(j = 0; j <= i ; j++)
//         {
//             printf(" ");
//         }
//         //��ӡ*
//         for(j = 0; j < 2*(line-1-i)-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int money, total, empty = 0;
//     scanf("%d", &money);
//     //���������ˮ�ȵ�
//     total = money; 
//     empty = money;
//     //����������ˮ
//     while(empty>=2)
//     {
//         total += empty / 2;
//         empty = empty / 2 + empty % 2;
//     }
//     printf("total = %d\n", total);
//     system("pause");
//     return 0;
// }

// void print(int arr[], int sz)
// {
//     int i = 0;
//     for(i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// void move(int arr[], int sz)
// {
//     //1.����߿�ʼ��һ��ż��
//     //2.���ұ߿�ʼ��һ������
//     //3.���н���
//     int left = 0;
//     int right = sz- 1;
//     while(left < right)
//     {
//         while((left < right) && (arr[left]%2 == 1))
//         {
//             left++;
//         }
//         while((left < right) && (arr[right] %2 ==0))
//         {
//             right--;
//         }
//         if(left < right)
//         {
//             int tmp = arr[left];
//             arr[left] = arr[right];
//             arr[right] = tmp;
//         }
//     }
    
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     move(arr, sz);
//     print(arr,sz);
//     system("pause");
//     return 0;
// }

int main()
{
    unsigned char a = 200;
    unsigned char b = 100;
    unsigned char c = 0;
    c = a + b;
    printf("%d %d", a+b, c);
    system("pause");
    return 0;
}