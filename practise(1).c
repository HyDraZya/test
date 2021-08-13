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
    //写一个函数求a的二进制（补码）表示中有几个1
    int count = count_bit_one(a);
    //13
    //00000000000000000000000000001101
    //
    printf("count = %d\n", count);
    system("pause");//system库函数-执行系统命令-pause(暂停)
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

// int i;//全局变量，未初始化，默认为0
// int main()
// {
// 	i--;//i = -1
// 	//-1
// 	//10000000000000000000000000000001 原码
// 	//11111111111111111111111111111110 反码
// 	//11111111111111111111111111111111 补码
// 	//65535
// 	if(i>sizeof(i))	//sizeof-计算变量/类型所占内存的大小 >= 0 无符号数
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
//     //存进去时根据大小端关系是地址为44332211
//     *pc = 0;
//     //即首元素地址为0 44 -> 00
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
//     //数组名是首元素地址,是没有办法直接进行两个数组的元素交换的
//     system("pause");
//     return 0;
// }
// void Init(int arr[], int sz)//当函数不需要返回传参时用void类型
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
//     //Init(arr, sz); //把数组初始化0
//     Print(arr, sz);//打印
//     Reverse(arr, sz);
//     //通过左右两个数的对调来实现，如1和10对调，2和9对调，一直到5和6对调
//     Print(arr, sz);//打印
//     system("pause");
//     return 0;
// }