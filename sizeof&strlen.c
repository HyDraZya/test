#include <stdio.h>
#include <stdlib.h>


int main()
{
    //1.数组名是首元素的地址
    //2.sizeof(数组名) - 数组名表示整个数组
    //3.&数组名 - 数组名表示整个数组
    //一维数组
    int a[] = {1,2,3,4};// 4*4 = 16字节
    printf("%d\n",sizeof(a));// 16 sizeof(数组名) - 计算的是数组总大小单位是字节 16
    printf("%d\n",sizeof(a+0));// 4/8 - 数组名这里表示首元素的值，a+0还是首元素地址，地址的大小就是4/8个字节
    printf("%d\n",sizeof(*a));// 4  -数组名表示首元素地址，*a就是首元素，是int型，sizeof(*a)为4个字节
    printf("%d\n",sizeof(a+1));// 4/8 - 数组名这里表示首元素地址，a+1为第二个元素的地址，地址的大小就是4/8个字节
    printf("%d\n",sizeof(a[1]));// 4 - 下标为1，即第2个元素的大小。为4个字节
    printf("%d\n",sizeof(&a));// 8 &a取出的是数组的地址，但是数组的地址也是地址，地址大小为4/8个字节
    printf("%d\n",sizeof(*&a));// 16 &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小，单位是字节
    printf("%d\n",sizeof(&a+1));// 4/8 &a是数组的地址，&a+1，跳过整个数组，仍为一个地址，大小为4/8个字节
    printf("%d\n",sizeof(&a[0]));// 4/8 &a[0]是第一个元素的地址，地址大小为4/8个字节
    printf("%d\n",sizeof(&a[0]+1));// 4/8 &a[0]+1是第二个元素的地址，地址大小为4/8个字节

    //字符数组
    char arr1[] = {'a','b','c','d','e','f'};
    printf("\n%d\n", sizeof(arr1));// 6 sizeof计算的是数组大小，由于arr1是一个指针，他里面有6个char类型的元素，6*1=6字节
    printf("%d\n", sizeof(arr1+0));// 4/8 数组名arr1不是单独放在数组内部，并且它没有取地址，+0后依然是首元素地址，地址为4/8个字节
    printf("%d\n", sizeof(*arr1));// 1 arr1是首元素地址，*arr1是首元素，首元素是字符大小为1个字节
    printf("%d\n", sizeof(arr1[1]));// 1 arr1[1]代表下标为1，即第2个元素的大小，为1个字节  
    printf("%d\n", sizeof(&arr1));// 4/8 &arr1虽然是数组的地址，但他仍然是一个地址，所以地址大小是4/8个字节
    printf("%d\n", sizeof(&arr1+1));// 4/8 &arr1是数组的地址，&arr1+1跳过了整个数组，仍为一个地址，地址大小为4/8个字节
    printf("%d\n", sizeof(&arr1[0]+1));// 4/8 &arr1[0]是第一个元素的的地址，即首元素地址，而&arr1[0]+1是第二个元素的地址，地址大小就是4/8个字节

    printf("\n%d\n", strlen(arr1));// 随机值
    printf("%d\n", strlen(arr1+0));// 随机值
    //printf("%d\n", strlen(*arr1));// error
    //printf("%d\n", strlen(arr1[1]));// error
    printf("%d\n", strlen(&arr1));// 随机值
    printf("%d\n", strlen(&arr1+1));// 随机值-6
    printf("%d\n", strlen(&arr1[0]+1));// 随机值-1

    char arr2[] = "abcdef";
    printf("\n%d\n", sizeof(arr2));// 7 由于这是一个字符串，字符串后面有'\0'，sizeof(arr2)计算的整个数组的大小，单位是字节，所以7*1=7
    printf("%d\n", sizeof(arr2+0));// 4/8 数组名arr2不是单独放在数组内部，并且没有取地址，+0后依然是首元素地址，地址为4/8个字节
    printf("%d\n", sizeof(*arr2));// 1 arr2是首元素地址，*arr2是首元素，首元素是a，字符大小为1个字节
    printf("%d\n", sizeof(arr2[1]));// 1 arr2[1]计算下标为1，即第二个元素，sizeof(arr2[1])计算的是第二个元素b的大小，因为类型是char，所以为1个字节
    printf("%d\n", sizeof(&arr2));// 4/8 &arr2是数组的地址，但也是地址，地址大小是4/8个字节
    printf("%d\n", sizeof(&arr2+1));// 4/8 &arr2是数组的地址，&arr2+1跳过了整个数组，但仍是一个地址，大小是4/8个字节
    printf("%d\n", sizeof(&arr2[0]+1));// 4/8 &arr2[0]是第一个元素的地址，即首元素地址，而&arr[0]+1是第二个元素的地址，大小为4/8个字节

    printf("\n%d\n", strlen(arr2)); // 6 strlen是求'\0'前的元素个数，abcdef是6个元素，所以是6个字节
    printf("%d\n", strlen(arr2+0));// 6 arr2是首元素地址，数组名，+0仍一样，所以是6个字节
    //printf("%d\n", strlen(*arr2));// error arr2是首元素地址，*arr2传过去的值是a，a的ASCII码值是97，此时的空间不属于你所要访问的空间，属于非法访问，所以这里产生报错
    //printf("%d\n", strlen(arr2[1]));// error 同上，传的是b的值，b的ASCII码值是98，开辟空间仍然不属于应访问的空间，所以产生报错
    printf("%d\n", strlen(&arr2));// 6 &arr2是数组的地址，数组指针，而他仍是一个地址，strlen是求'\0'前的所有元素，所以是6个字节
    printf("%d\n", strlen(&arr2+1));// 随机值 &arr2跳过了整个数组，此时'\0'也被移动过去了，所以找不到'\0'的位置，产生的是随机值
    printf("%d\n", strlen(&arr2[0]+1));// 5 &arr2[0]是取首元素地址，+1看出向右移，取第二个元素b的地址，strlen求'\0'前的所有元素，所以此时是5个字节
    
    char *p = "abcdef";
    printf("\n%d\n", sizeof(p));// 4/8 此时p是char *的指针变量，它里面存放的是首元素a的地址，指针变量p的大小为4/8个字节
    printf("%d\n", sizeof(p+1));// 4/8 此时p仍然是char *的指针变量，+1的得到的是第二个元素字符b的地址，地址的大小为4/8个字节
    printf("%d\n", sizeof(*p));// 1 *p就是字符串的首元素a，字符a的大小为1个字节
    printf("%d\n", sizeof(p[0]));// 1 p[0] == *p(p+0),就是字符串的首元素a，字符a的大小为1个字节
    printf("%d\n", sizeof(&p));// 4/8 &p就是变量p的地址，那么地址的大小为4/8个字节
    printf("%d\n", sizeof(&p+1));// 4/8 &p+1是跳过了一个p的地址，此时仍为地址，所以大小是4/8个字节
    printf("%d\n", sizeof(&p[0]+1));// 4/8 &p[0]是首元素的地址，+1后是元素b的地址，地址的大小是4/8个字节

    printf("\n%d\n", strlen(p));//6 strlen是求'\0'前的所有元素大小，这里p是数组名，首元素地址，所以从a开始，一共是6个元素，大小是6个字节
    printf("%d\n", strlen(p+1));//5 p是首元素，即a的地址，+1后是b的地址，从b一直到'\0'前一共是5个元素，所以大小是5个字节
    //printf("%d\n", strlen(*p));//error *p为字符‘a’，ASCII码是97，strlen会将97当作地址来处理，此时会造成越界访问，运行时会报错
    //printf("%d\n", strlen(p[0]));//error p[0]为字符‘a’，ASCII码是97，strlen会将97当作地址来处理，此时会造成越界访问，运行时会报错
    printf("%d\n", strlen(&p));//随机值 取出p的地址，传给strlen，strlen在往后寻找'\0',不知道什么时候遇到'\0'
    printf("%d\n", strlen(&p+1));//随机值 取出p后面的地址，传给strlen，strlen在往后寻找'\0',不知道什么时候遇到'\0'
    printf("%d\n", strlen(&p[0]+1));//5 p[0]表示首元素，&p[0]表示首元素地址，&p[0] + 1表示第二个元素'b'的地址,而strlen从'b'开始计算字符串长度

    int a[3][4] = {0};
    printf(" %d\n",sizeof(a));
    printf("%d\n",sizeof(a[0][0]));
    printf("%d\n",sizeof(a[0]));
    printf("%d\n",sizeof(a[0]+1));
    printf("%d\n",sizeof(*(a[0]+1)));
    printf("%d\n",sizeof(a+1));
    printf("%d\n",sizeof(*(a+1)));
    printf("%d\n",sizeof(&a[0]+1));
    printf("%d\n",sizeof(*(&a[0]+1)));
    printf("%d\n",sizeof(*a));
    printf("%d\n",sizeof(a[3]));
    system("pause");
    return 0;
}
