#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

// int main()
// {
//     int len1 = strlen("abcdef");
//     printf("%d\n", len1);
//     char arr[] = {'a','b','c','d','e','f'};
//     int len2 = strlen(arr);
//     printf("%d\n", len2);
//     system("pause");
//     return 0;
// }

// int my_strlen(const char *str)
// {
//     int count = 0;
//     assert(str != NULL);
//     while(*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// int main()
// {
//     int len = my_strlen("abcdef");
//     printf("%d\n", len);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     if(strlen("abc") - strlen("abcdef") > 0)
//         printf("hehe\n");
//     else
//         printf("haha\n");
//     return 0;
// }

// #include <stdio.h>
// int my_strlen(const char *str)
// {
// 	  const char *p = str;
// 	  while(*p != '\0')
// 	  {
// 	  	  p++;
// 	  }
// 	  return p-str;
// }
// int main()
// {
// 	  int len = 0;
// 	  char arr[10]="abcdef";
// 	  len = my_strlen(arr);
// 	  printf("%d\n", len);
//     system("pause");
// 	  return 0;
// }

// #include<stdio.h>
// int my_strlen(const char *str)
// {
// 	  if(*str=='\0')
// 		    return 0;
// 	  else
//   	    return 1+my_strlen(str+1);
// }

// int main()
// {
//     int len = 0;
// 	  char arr[10]="abcdef";
// 	  len = my_strlen(arr);
// 	  printf("%d\n", len);
//     return 0;
// }

// char *my_strcpy(char *dest, const char *src)
// {
//     assert(dest != NULL);
//     assert(src != NULL);
//     char *ret = dest;
//     //拷贝src指向的字符串到dest指向的空间，包含'\0'
//     while(*dest++ = *src++)
//     {
//         ;
//     }
//     //返回目的的空间的初始地址
//     return ret;//'\0'
// }

// int main()
// {
//     char arr1[] = "abcdefghi";
//     char arr2[] = "bit";
//     //错误示范
//     //char *arr1 = "abcdefghi";
//     //p指向常量字符串，而常量字符串无法被修改
//     //char arr2[] = {'b','i','t'};
//     //由于此时没有给'\0'，由于找不到'\0'会导致向后越界访问
//     my_strcpy(arr1, arr2);
//     printf("%s\n", arr1);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char arr1[] = "abcdefghi";
//     char arr2[] = "bit";

//     //错误示范
//     //char *arr1 = "abcdefghi";
//     //p指向常量字符串，而常量字符串无法被修改
//     //char arr2[] = {'b','i','t'};
//     //由于此时没有给'\0'，由于找不到'\0'会导致向后越界访问
//     strcpy(arr1, arr2);
//     printf("%s\n", arr1);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char arr1[30] = "hello\0xxxxxxx";
//     char arr2[] = "wolrd";
//     strcat(arr1, arr2);
//     printf("%s\n", arr1);
//     //错误示范
//     char arr3[] = "hello";
//     char arr4[] = "world";
//     strcat(arr3, arr4);
//     printf("%s\n", arr3);
//     //由于arr3数组没有定义空间大小
//     //此时就开辟了'hello\0'6个字节
//     //当arr4数组追加过去后就产生了越界访问，产生报错
//     return 0;
// }

// char *my_strcat(char *dest, const char *src)
// {
//     assert(dest != NULL);
//     assert(src);
//     char *ret = dest;
//     //1.找到目的字符串的'\0'
//     while(*dest != '\0')
//     {
//         dest++;
//     }
//     //2.追加
//     while(*dest++ = *src++)
//     {
//         ;
//     }
//     return ret;
// }

// int main()
// {
//     char arr1[30] = "hello";
//     char arr2[] = "wolrd";
//     my_strcat(arr1, arr2);
//     printf("%s\n", arr1);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     char *p1 = "qbc";
//     char *p2 = "abc";
//     // int ret = strcmp(p1, p2);
//     // printf("%d\n", ret);
//     if(strcmp(p1, p2) > 0)
//     {
//         printf("p1 > p2\n");
//     }
//     else if(strcmp(p1, p2) == 0)
//     {
//         printf("p1 == p2\n");
//     }
//     else if(strcmp(p1, p2) < 0)
//     {
//         printf("p1 < p2\n");
//     }
//     system("pause");
//     return 0;
// }

// int my_strcmp(const char *str1, const char *str2)
// {
//     assert (str1 && str2);
//     // 比较
//     while(*str1++ == *str2++)
//     {
//         if(*str1 == '\0')
//         {
//             return 0;//等于
//         } 
//     }
//     if(*str1 > *str2)
//         return 1;//大于
//     else
//         return -1;//小于
//     //return (*str1 - *str2);
//     //通过相减判断大于或小于
// }
// }
// int main()
// {
//     char *p1 = "abcdef";
//     char *p2 = "abqwe";
//     int ret = my_strcmp(p1, p2);
//     printf("ret = %d\n", ret);
//     return 0;
// }

// int main()
// {
//     char arr1[10] = "abcdefgh";
//     char arr2[] = "bit";
//     stcncpy(arr1, arr2, 6);
//     return 0;
// }


// void my_strncat(char* dest, const char* src, int len1, int len2, int n)
// {
// 	char* ret = dest + len1;
// 	assert(src);
// 	assert(n <= len2);
// 	while ((n--) && (*ret++ = *src++))
// 		;
// }

// int main()
// {
// 	char arr1[20] = "abcd";
// 	char arr2[] = "efghi";
// 	int len1 = strlen(arr1);
// 	int len2 = strlen(arr2);
// 	int n = 0;
// 	scanf("%d", &n);
// 	my_strncat(arr1, arr2, len1, len2, n);
// 	printf("%s\n", arr1);
// 	system("pause");
// 	return 0;
// }

// int main()
// {
//     const char *p1 = "abcdef";
//     const char *p2 = "abcqwer";
//     int ret = strncmp(p1, p2, 4);
//     printf("%d\n", ret);
// }

// int my_strncmp(const char *dest, const char *src, int n)
// {
// 	int ret = 0;
// 	assert(dest);
// 	assert(src);
// 	assert(n);
// 	while( (n--) && !(ret = (unsigned char)*dest-(unsigned char)*src) && *dest )
// 	{
// 		dest++;
// 		src++;
// 	}
// 	return ret;
// }

// int main()
// {
// 	char arr1[] = "abcdef";
// 	char arr2[] = "abcedef";
// 	int n = 0;
// 	int ret = 0;
// 	int i = 0;
// 	scanf("%d",&n);
// 	ret = my_strncmp(arr1, arr2, n);
// 	if(ret == 0)
// 	{
// 		for(i=0; i<n; i++)
// 		printf("%c",arr1[i]);
// 		printf("=");
// 		for(i=0; i<n; i++)
// 		printf("%c",arr2[i]);
// 	}
// 	else if(ret < 0)
// 	{
// 		for(i=0; i<n; i++)
// 		printf("%c",arr1[i]);
// 		printf("<");
// 		for(i=0; i<n; i++)
// 		printf("%c",arr2[i]);
// 	}
// 	else
// 	{
// 		for(i=0; i<n; i++)
// 		printf("%c",arr1[i]);
// 		printf(">");
// 		for(i=0; i<n; i++)
// 		printf("%c",arr2[i]);
// 	}
// 	system("pause");
// 	return 0;
// }

char *my_strstr(const char *p1, const char *p2)
{
    assert(p1 != NULL);
    assert(p2 != NULL);
    char *s1 = NULL;
    char *s2 = NULL;
    char *cur = (char*)p1;//当前指针current
    if(*p2 == '\0')
    {
        return (char*)p1;
    }
    while(*cur)
    {
        s1 = cur;
        s2 = (char*)p2;

        while(*s1 && *s2  && (*s1 == *s2))
        {
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        {
            return cur;//找到子串
        }
        cur++;
    }
    return NULL;//找不到子串
}

int main()
{
    char *p1 = "abcdef";
    char *p2 = "def";
    char * ret = my_strstr(p1, p2);
    if(ret == NULL)
    {
        printf("子串不存在\n");
    }
    else
    {
        printf("%s\n", ret);
    }
    system("Pause");
    return 0;
}