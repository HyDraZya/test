#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// int main()
// {
//     char arr[] = "qpzyahxf@163.com";
//     char *p = "@.";
//     char buf[1024] = {0};
//     //strtok��ı��ַ������ݣ�buf��ֹԭ�ַ������и�(����ԭʼ����)
//     strcpy(buf, arr);
//     //�и�buf�е��ַ���
//     char *ret = NULL;
//     for(ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//     {
//         printf("%s\n", ret);
//     }
//     // char *ret = strtok(arr, p);
//     // printf("%s\n", ret);
//     // ret = strtok(NULL, p);
//     // printf("%s\n", ret);
//     // ret = strtok(NULL, p);
//     // printf("%s\n", ret);
//     system("pause");
//     return 0;
// }


// char *my_strtok(char *str1 ,char *str2)
// {
//     static char *p_last = NULL;
//     if(str1 == NULL && (str1 = p_last) == NULL)
//     {
//         return NULL;
//     }   
//     char *s = str1;
//     char *t = NULL;
//     while(*s != '\0')
//     {
//         t = str2;
//         while(*t != '\0')
//         {
//             if(*s == *t)
//             {
//                 p_last = s + 1;
//                 if( s - str1 == NULL)
//                 {
//                     str1 = p_last;
//                     break;
//                 }
//                 *s = '\0';
//                 return str1;
//             }
//             t++;
//         }
//         s++;
//       }
//       return NULL;
// }

// int main() 
// { 
//     char arr[] = "qpzyahxf@163.com";
//     char *ret = NULL;
//     char *p = "@.";
//     for(ret =  my_strtok(arr, p); ret != NULL; ret = my_strtok(NULL, p))
//     {
//         printf("%s\n", ret);
//     }
//     return 0; 
// } 

// int main()
// {
//     char *str = strerror(errno);    
//     printf("%s\n", str);
//     //errno ��һ��ȫ�ֵĴ�����ı���
//     //��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬���Ƶ�errno��
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     //1-10������ķ��ط�����Ϣ
//     for(i = 0; i <= 10; i++)
//     {
//         printf("%d     %s\n", i, strerror(i));
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     //���ļ�
//     FILE *pf = fopen("test.txt", "r");
//     if(pf == NULL)
//     {
//         printf("%s\n", strerror(errno));//֪�������ԭ��
//     }
//     else
//     {
//         printf("open file success.\n");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char ch = tolower('Q');
//     putchar(ch);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     //��д��ĸתСд
//     char arr[] = "No Mercy";
//     int i = 0;
//     while(arr[i])
//     {
//         if(isupper(arr[i]))
//         {
//             arr[i] = tolower(arr[i]);
//         }
//         i++;
//     }
//     printf("%s\n", arr);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int arr1[] = { 1,2,3,4,5 };
//     int arr2[5] = { 0 };
//     memcpy(arr2, arr1, sizeof(arr1));
//     return 0;
// }

// void *memcpy ( void *dest, const void *src, size_t num) 
// { 
//     void *ret = dest; 
//     assert(dest && src); 
//     while (num--) 
//     { 
//         //*(char*)dest = *(char*)src;
// 		//dest = (char*)dest + 1;//++(char*)dest
// 		//src = (char*)src + 1;//++(char*)src
//         *((char*)dest)++ = *((char*)src)++; 
//     } 
//     return ret; 
// }

// int main()
// {
//     int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
// 	int arr2[10] = { 0 };

// 	my_memcpy(arr2, arr1, 20);
//     return 0;
// }

// void *my_memmove( void *dest, const void *src, size_t num) 
// { 
//     void * ret = dest; 
//     assert(dest && src);
//     if (dest <= src || (char *)dest >= ((char *)src + num)) 
//     { 
//         while (num--) 
//         { 
//             *(char*)dest = *(char*)src; 
//             dest = (char*)dest + 1;
// 			src = (char*)src + 1;
//         } 
//     }
//     else
//     { 
//         //�Ӻ���ǰ����
//         while (num--)
//         {
//             *((char*)dest + num) = *((char*)src + num);
//         }
//     } 
//     return ret; 
// } 

// int main()
// {
//     int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
//     int arr2[10] = {0};
//     my_memmove(arr1 + 2, arr1, 20);
//     return 0;
// }

// int main()
// {
// 	char arr[] = "abcdefg";
// 	memset(arr, '*', 4);
// 	printf("%s", arr);
// 	return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 1,2,3,4,8 };
	int ret = memcmp(arr1, arr2, sizeof(arr1));
	if (ret > 0)
	{
		printf("arr1 > arr2");
	}
	else if (ret == 0)
	{
		printf("arr1 == arr2");
	}
	else
	{
		printf("arr1 < arr2");
	}
	return 0;
}
