#include <stdio.h>
#include <windows.h>
#include <string.h>

int cmp_int(const void *e1, const void *e2)
{
    //*e1和*e2接收两个比较值的地址
    return *(int*)e1 - *(int*)e2;
}
struct Stu
{
    char name[20];
    int age;
};

void test1()//整型比较
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}
int cmp_float(const void *e1, const void *e2)
{
    if( *(float*)e1 == *(float*)e2)
        return 0;
    else if( *(float*)e1 > *(float*)e2)
        return 1;
    else
        return -1;
    //return ( (int)*(float*)e1 - *(float*)e2); 通过强制转换成int型去做比较
}
void test2()//浮点型比较
{
    float f[] = {9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
    
    int sz = sizeof(f)/sizeof(f[0]);
    qsort(f, sz, sizeof(f[0]), cmp_int);
    int j = 0;
    printf("\n");
    for(j = 0; j < sz; j++)
    {
        printf("%f ", f[j]);
    }
}

int cmp_stu_by_age(const void *e1, const void *e2)//学生年龄
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void*e1, const void *e2)//学生名字
{
    //比较名字就是比较字符串
    //字符串不能直接用<>=来比较，应该用strcmp函数
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()//结构体比较
{
    struct Stu s[3]= {{"zhangsan",20},{"lisi",25},{"wangwu",30}};
    int sz = sizeof(s)/sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
    //第一个参数：待排序数组的首元素地址
    //第二个参数：待排序数组的元素个数
    //第三个参数：待排序数组的元素大小，单位字节
    //第四个参数：是函数指针，比较两个元素所用函数的地址(需要自己实现)
    //函数指针的两个参数是：待比较的两个元素的地址
}

//实现bubble_sort函数的程序员，他是否知道未来排序的数据类型(不知道)
//那程序员也不知道，待比较的两个元素的类型

void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for(i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}
void bubble_sort(void *base, int sz, int width, int (*cmp)(void *e1, void *e2))
{
    int i = 0;
    //趟数
    for(i = 0; i < sz-1; i++)
    {
        int j = 0;
        for(j = 0; j < sz-1-i; j++)
        {
            //两个元素的比较
            if(cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
            {
                //交换
                Swap((char*)base+j*width, (char*)base+(j+1)*width,width);
            }
        }
    }
}

void test4()
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //使用冒泡排序的程序员一定要知道自己排序的是什么是数据
    //就应该知道如何比较待排序数组中的元素
    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

void test5()
{
    struct Stu s[3] = {{"xiaoming",20},{"xiaozhang",25},{"xiaowang",30}};
    int sz = sizeof(s) / sizeof(s[0]);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
     test1();
     test2();
     test3();
     test4();
     test5();
    system("pause");
    return 0;
}

// int main()
// {
//     int a = 10;
//     int *pa = &a;
//     char* pc = &a;
//     char ch = 'w';
//     void *p = &a;
//     p = &ch;
//     //void *类型的指针，可以接收任意类型的地址
//     return 0;
// }
