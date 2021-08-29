#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
// int main()
// {
//     unsigned int a = 0x1234;
//     unsigned char b = *(unsigned char *)&a;
//     printf("%d\n", b);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char a[1000] = {0};
//     int i = 0;
//     for(i = 0; i < 1000; i++)
//     {
//         a[i] = -1-i;
//     }
//     printf("%d\n",strlen(a));
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr[10][10] = { 0 };
//     int i = 0;
//     int j = 0;
//     for(i = 0; i < 10; i++)
//     {
//         for(j = 0; j < 10; j++)
//         {
//             if(j == 0)
//             {
//                 arr[i][j] = 1;
//             }
//             if(i == j)
//             {
//                 arr[i][j] = 1;
//             }
//             if(i >= 2 && j >= 1)
//             {
//                 arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
//             }
//         }
//     }
//     //打印
//     for(i = 0; i < 10; i++)
//     {
//         for(j = 0; j <= i; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int killer = 0;
//     for(killer = 'a'; killer <= 'd'; killer++)
//     {
//         if((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//         {
//             printf("killer = %c\n", killer);
//         }
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a,b,c,d,e = 0;
//     for(a = 1; a <= 5; a++)
//     {
//         for(b = 1; b <= 5; b++)
//         {
//             for(c = 1; c <= 5; c++)
//             {
//                 for(d = 1; d <= 5; d++)
//                 {
//                     for(e = 1; e <= 5; e++)
//                     {
//                         if(((b==2) + (a==3) ==1) &&
//                            ((b==2) + (e==4) ==1) &&
//                            ((c==1) + (d==3) ==1) &&
//                            ((c==5) + (d==3) ==1) &&
//                            ((e==4) + (a==1) ==1))
//                         {
//                             if(a*b*c*d*e == 120)
//                             printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     //申请空间
//     int *p = (int*)malloc(10*sizeof(int));
//     //使用空间
//     //*****
//     //释放空间
//     free(p);
//     p = NULL;
//     return 0;
// }

// int main()
// {
//     char str1[] = "hello bit.";
//     char str2[] = "hello bit.";
//     char *str3 = "hello bit.";
//     char *str4 = "hello bit.";
//     if(str1 == str2)
//         printf("str1 and str2 are same\n");
//     else
//         printf("str1 and str2 are not same\n");
//     if(str3 == str4)
//         printf("str3 and str4 are same\n");
//     else
//         printf("str3 and str4 are not same\n");
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a[5] = {5,4,3,2,1};
//     int *ptr = (int*)(&a + 1);
//     printf("%d,%d", *(a + 1), *(ptr -1));
//     system("pause");
//     return 0;
// }

// void left_move(char *arr, int k)
// {
//     assert(arr != NULL); 
//     int i = 0;
//     int len = strlen(arr);
//     for(i = 0; i < k; i++)
//     {
//         //左旋转一个字符
//         //1
//         char tmp = *arr;
//         //2
//         int j = 0;
//         for(j = 0; j < len-1; j++)
//         {
//             *(arr + j) = *(arr + j + 1);
//         }
//         //3
//         *(arr+len-1) = tmp;
//     }
// }
// int main()
// {
//     char arr[] = "abcdef";
//     left_move(arr,2);
//     printf("%s\n", arr);
//     system("pause");
//     return 0;
// }

// void reverse(char *left, char *right)
// {
//     assert(left != NULL);
//     assert(right != NULL);
//     while(left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }

// void left_move(char *arr, int k)
// {
//     assert(arr);  
//     int len = strlen(arr);
//     assert(k <= len);
//     reverse(arr, arr+k-1);//逆序左边
//     reverse(arr+k, arr+len-1);//逆序右边
//     reverse(arr, arr+len-1);//逆序整体
// }

// int is_left_move(char* s1, char* s2)
// {
//     int len = strlen(s1);
//     int i = 0;
//     for(i = 0; i < len; i++)
//     {
//         left_move(s1, 1);
//         int ret = strcmp(s1, s2);
//         if(ret == 0)
//             return 1;         
//     }
//     return 0;
// }

// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = "cdefab";
//     int ret = is_left_move(arr1, arr2);
//     if(ret == 1)
//         printf("Yes\n");
//     else
//         printf("No\n");
//     return 0;
// }

// int main()
// {
//     char arr[] = "abcdef";
//     left_move(arr,2);
//     printf("%s\n", arr);
//     system("pause");
//     return 0;
// }

// void reverse(char *left, char *right)
// {
//     assert(left != NULL);
//     assert(right != NULL);
//     while(left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }

// void left_move(char *arr, int k)
// {
//     assert(arr);  
//     int len = strlen(arr);
//     assert(k <= len);
//     reverse(arr, arr+k-1);//逆序左边
//     reverse(arr+k, arr+len-1);//逆序右边
//     reverse(arr, arr+len-1);//逆序整体
// }

// int is_left_move(char* str1, char* str2)
// {
//     int len1 = strlen(str1);
//     int len2 = strlen(str2);
//     if(len1 != len2)
//         return 0;
//     //1.在str1字符串中追加1个str1字符串
//     strncat(str1,str1,6);
//     //2.判断str2指向的字符串是否有str1指向的字符串子串
//     //strstr-用来找子串
//     char *ret = strstr(str1,str2);
//     if(ret == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = "cdefab";
//     int ret = is_left_move(arr1, arr2);
//     if(ret == 1)
//         printf("Yes\n");
//     else
//         printf("No\n");
//     system("pause");
//     return 0;
// }

// int FindNum(int arr[3][3], int k, int row, int col)
// {
//     int x = 0;
//     int y = col - 1;
//     while(x <= row - 1 && y >= 0)
//     {
//         if(arr[x][y] > k)
//         {
//             y--;
//         }
//         else if(arr[x][y] < k)
//         {
//             x++;
//         }
//         else
//         {
//             printf("下标是:%d %d\n", x, y);
//             return 1;
//         }
//     }
//     //找不到
//     return 0;
// }

// int main()
// {
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int k = 7;  
//     int ret = FindNum(arr, k, 3, 3);
//     if(ret == 1)
//     {
//         printf("找到了\n");
//     }
//     else
//     {
//         printf("找不到\n");
//     }
    
//     system("pause");
//     return 0;
// }

int FindNum(int arr[3][3], int k, int *px, int *py)
{
    int x = 0;
    int y = *py-1;
    while(x <= *px - 1 && y >= 0)
    {
        if(arr[x][y] > k)
        {
            y--;
        }
        else if(arr[x][y] < k)
        {
            x++;
        }
        else
        {
            *px = x;
            *py = y;
            return 1;
        }
    }
    //找不到
    return 0;
}

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int k = 7;  
    int x = 3;
    int y = 3;
    int ret = FindNum(arr, k, &x, &y);
    if(ret == 1)
    {
        printf("找到了\n");
        printf("下标是:%d %d\n", x, y);
    }
    else
    {
        printf("找不到\n");
    }
    
    system("pause");
    return 0;
}