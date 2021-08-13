#include <stdio.h>
#include <stdlib.h>

// int count_bit_one(unsigned int num)
// {
//     int count = 0;
//     while(num)
//     {
//         if(num % 2 == 1)
//         {
//             count++;
//         }
//         num = num / 2;
//     }
//     return count;
// }

// int count_bit_one(int n)
// {
//     int count = 0;
//     int i = 0;
//     for(i = 0; i < 32; i++)
//     {
//         if(((n >> i) & 1) == 1)
//         {
//             count++;
//         }
//     }
//     return count;
// }

int count_bit_one(int n)
{
    int count = 0;
    while(n)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    //дһ��������a�Ķ����ƣ����룩��ʾ���м���1
    int count = count_bit_one(a);
    //13
    //00000000000000000000000000001101
    //
    printf("count = %d\n", count);
    system("pause");//system�⺯��-ִ��ϵͳ����-pause(��ͣ)
    return 0;
}


// int main()
// {
//     int a, b, c;
//     a = 5;
//     c = ++a;//6
//     b = ++c, c++, ++a, a++;//c=8 b=7 a=8
//     b += a++ + c;//a=9 b=23 8+8+7
//     printf("a= %d b = %d c = %d\n:", a, b, c);
//     system("pause");
//     return 0;
// }

// int i;//ȫ�ֱ�����δ��ʼ����Ĭ��Ϊ0
// int main()
// {
// 	i--;//i = -1
// 	//-1
// 	//10000000000000000000000000000001 ԭ��
// 	//11111111111111111111111111111110 ����
// 	//11111111111111111111111111111111 ����
// 	//65535
// 	if(i>sizeof(i))	//sizeof-�������/������ռ�ڴ�Ĵ�С >= 0 �޷�����
// 	{
// 		printf(">\n");
// 	}
// 	else
// 	{
// 		printf("<\n");
// 	}
// 	getchar();
// 	return 0;
// }

// int main()
// {
//     int a = 0x11223344;
//     char *pc = (char*)&a;
//     //���ȥʱ���ݴ�С�˹�ϵ�ǵ�ַΪ44332211
//     *pc = 0;
//     //����Ԫ�ص�ַΪ0 44 -> 00
//     //44332211 -> 00332211
//     printf("%x\n", a);//11223300
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr1[] = {1,3,5,7,9};
//     int arr2[] = {0,2,4,6,8};
//     int tmp = 0;
//     int i = 0;
//     int sz = sizeof(arr1) / sizeof(arr1[0]);
//     for(i = 0; i<sz; i++)
//     {
//         tmp = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = tmp;
//     }
//     //����������Ԫ�ص�ַ,��û�а취ֱ�ӽ������������Ԫ�ؽ�����
//     system("pause");
//     return 0;
// }
// void Init(int arr[], int sz)//����������Ҫ���ش���ʱ��void����
// {
//     int i = 0;
//     for(i = 0; i < sz; i++)
//     {
//         arr[i] = 0;
//     }
// }

// void Print(int arr[], int sz)
// {
//     int i = 0;
//     for(i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// void Reverse(int arr[], int sz)
// {
//     int left = 0;
//     int right = sz - 1;
//     while(left < right)
//     {
//         int tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;
//         left++;
//         right--;
//     }
// }

// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int sz = sizeof(arr) /sizeof(arr[0]);
//     //Init(arr, sz); //�������ʼ��0
//     Print(arr, sz);//��ӡ
//     Reverse(arr, sz);
//     //ͨ�������������ĶԵ���ʵ�֣���1��10�Ե���2��9�Ե���һֱ��5��6�Ե�
//     Print(arr, sz);//��ӡ
//     system("pause");
//     return 0;
// }