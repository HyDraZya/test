#include <stdio.h>
#include <stdlib.h>
double Pow(int n, int k)
{
    if(k < 0)
        return (1.0 / (Pow(n, -k)));
    else if(k == 0)
        return 1;
    else
        return n*Pow(n, k-1);
}

int main()
{
    int n = 0;
    int k = 0;
    scanf("%d%d", &n, &k);
    double ret = Pow(n,k);
    printf("ret = %lf\n", ret);
    system("pause");
    return 0;
}

//DigitSum(1729)
//DigitSum(172) +1729 % 10
//DigitSum(17) + 172 % 10 + 1729 % 10
//DigitSum(1) + 17 % 10 +172 % 10 + 1729 % 10
// int DigitSum(unsigned int num)
// {
//     if(num > 9)
//         return DigitSum(num/10) + num % 10;
//     else
//         return num;
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%d", &num);
//     int ret = DigitSum(num);
//     printf("ret = %d\n", ret);
//     system("pause");
//     return 0;
// }

// int my_strlen(char *str)
// {
//     int count = 0;
//     while(*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

// void reverse_string(char arr[])
// {
//     int left = 0;
//     int right =  my_strlen(arr)-1;
//     while(left < right)
//     {
//         int tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;
//         left++;
//         right--;
//     }
// }
// void reverse_string(char arr[])
// {
//     //ÄæĞò£ºreverse_string("a b c d e f")
//     //1.a ºÍ f ½»»»
//     //2.ÄæĞò reverse_string("b c d e")
//     char tmp = arr[0];
//     int len = my_strlen(arr);
//     arr[0] = arr[len - 1];
//     arr[len-1] = '\0';
//     if(my_strlen(arr+1) >= 2)
//         reverse_string(arr+1);
//     arr[len-1] = tmp;
// }

// int main()
// {
//     char arr[] = {"abcdef"};
//     reverse_string(arr);
//     printf("%s\n", arr);
//     system("pause");
//     return 0;
// }

// void Print_Table(int n)
// {
//     int i = 0;
//     for(i = 1; i <= n; i++)
//     {
//         int j = 0;
//         for(j = 1; j <= i; j++)
//         {
//             printf("%d*%d=%d\t", i, j, i*j);
//         }
//     printf("\n");
//     }
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     Print_Table(n);
//     system("pause");
//     return 0;
// }

// void Print(int *p, int sz)
// {
//     int i = 0;
//     for(i = 0; i < sz; i++)
//     {
//         printf("%d ", *(p + i));
//     }
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     Print(arr, sz);
//     system("pause");
//     return 0;
// }

//µİ¹éº¯Êı
// int Fun(int n)
// {
//     if(n==5)
//         return 2;
//     else    
//         return 2*Fun(n+1);
// }
//n = 2
//2 2*8
//3 2*4
//4 2*2
//5 
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     Fun(n);
//     printf("num = %d\n", Fun(n));
//     system("pause");
//     return 0;
// }
// void Print(int num)
// {
//     int i = 0;
//     printf("ÆæÊıÎ»:\n");
//     for(i = 30; i >= 0; i -= 2)
//     {
//         printf("%d ", (num >> i) & 1);
//     }
//     printf("\nÅ¼ÊıÎ»:\n");
//     for(i = 31; i >= 1; i -= 2)
//     {
//         printf("%d ", (num >> i) & 1);
//     }
//     printf("\n");
// }
// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     Print(num);
//     system("pause");
//     return 0;
// }

// int get_diff_bit(int m, int n)
// {
//     int tmp = m^n;
//     int count = 0;
//     while(tmp)
//     {
//         tmp = tmp&(tmp-1);
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     int m = 0;
//     int n = 0;
//     scanf("%d%d", &n, &m);
//     int count = get_diff_bit(m, n);
//     printf("count = %d", count);
//     system("pause");
//     return 0;
// }