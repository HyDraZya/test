#include <stdio.h>
#include <windows.h>
#include <string.h>

int cmp_int(const void *e1, const void *e2)
{
    //*e1��*e2���������Ƚ�ֵ�ĵ�ַ
    return *(int*)e1 - *(int*)e2;
}
struct Stu
{
    char name[20];
    int age;
};

void test1()//���ͱȽ�
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
    //return ( (int)*(float*)e1 - *(float*)e2); ͨ��ǿ��ת����int��ȥ���Ƚ�
}
void test2()//�����ͱȽ�
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

int cmp_stu_by_age(const void *e1, const void *e2)//ѧ������
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void*e1, const void *e2)//ѧ������
{
    //�Ƚ����־��ǱȽ��ַ���
    //�ַ�������ֱ����<>=���Ƚϣ�Ӧ����strcmp����
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()//�ṹ��Ƚ�
{
    struct Stu s[3]= {{"zhangsan",20},{"lisi",25},{"wangwu",30}};
    int sz = sizeof(s)/sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
    //��һ���������������������Ԫ�ص�ַ
    //�ڶ��������������������Ԫ�ظ���
    //�����������������������Ԫ�ش�С����λ�ֽ�
    //���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ(��Ҫ�Լ�ʵ��)
    //����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
}

//ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������(��֪��)
//�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����

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
    //����
    for(i = 0; i < sz-1; i++)
    {
        int j = 0;
        for(j = 0; j < sz-1-i; j++)
        {
            //����Ԫ�صıȽ�
            if(cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
            {
                //����
                Swap((char*)base+j*width, (char*)base+(j+1)*width,width);
            }
        }
    }
}

void test4()
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //ʹ��ð������ĳ���Աһ��Ҫ֪���Լ��������ʲô������
    //��Ӧ��֪����αȽϴ����������е�Ԫ��
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
//     //void *���͵�ָ�룬���Խ����������͵ĵ�ַ
//     return 0;
// }
