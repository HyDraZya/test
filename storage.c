#include <stdio.h>
#include <stdlib.h>
#include <float.h>
// int main()
// {
//     int a = 10;    //4
//     float f = 10.0; //4

//     short a = 10;
//     short int b = 20;
//     return 0;
// }

// void test(void)
// {
//     printf("hehe\n");
// }

// int main()
// {
//     test();
//     system("pause");
//     return 0;
// }

// int main()
// {
    // int a = 20;
    //0000 0000 0000 0000 0000 0000 0001 0100 原、反、补
    //0x00000014
    // int b = -10;
    //1000 0000 0000 0000 0000 0000 0000 1010 原码
    //1111 1111 1111 1111 1111 1111 1111 0101 反码
    //1111 1111 1111 1111 1111 1111 1111 0110 补码
    //0xfffffff6
//     return 0;
// }

// int main()
// {
//     1 - 1;
//     //1 + (-1);
//     int a = 1+(-1);
//     printf("%d\n",a);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a = 20;
//     //0000 0000 0000 0000 0000 0000 0001 0100
//     //0x00 00 00 14
//     return 0;
// }

// int check_system()
// {
//     int a = 1;
//     char *p = (char*)&a;
//     if(*p == 1)
//         return 1;
//     else 
//         return 0;
// }

// int check_system()
// {
//     int a = 1;
//     char *p = (char*)&a;
//     //返回1，小端
//     //返回2，大端
//     return *p;
// }
// int check_system()
// {
//     int a = 1;
//     return *(char*)&a;
// }

// int main()
// {
    //写一段代码告诉我们当前机器的字节序是什么
    //返回1，小端
    //返回0，大端
//     int ret = check_system();
//     if(ret = 1)
//         printf("小端\n");
//     else
//         printf("大端\n");
//     system("pause");
//     return 0;
// }

//输出什么？
// #include <stdio.h>
// int main()
// {
//     char a= -1; 
//     signed char b=-1;
//     unsigned char c=-1;
//     printf("a=%d,b=%d,c=%d",a,b,c);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a = -128;
//     char b = 128;
//     printf("%u\n", a);
//     printf("%u\n", b);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     unsigned int i;
//     for(i = 9; i >= 0; i--)
//     {
//         printf("%u\n",i);
//     }
//     system("pause");
//     return 0;
// }

// unsigned char i = 0;
// int main()
// {
//     for(i = 0;i<=255;i++)
//    {
//         printf("hello world\n");
//    }
//    system("pause");
//     return 0;
// }

// int main()
// {
//     double d = 1E10;
//     printf("%lf\n", d);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n = 9;
//     float *pFloat = (float *)&n;
//     printf("n的值为：%d\n",n);
//     printf("*pFloat的值为：%f\n",*pFloat);

//     *pFloat = 9.0;
//     printf("num的值为：%d\n",n);
//     printf("*pFloat的值为：%f\n",*pFloat);
//     system("pause");
//     return 0;
// }

int main()
{
    float f = 5.5;
    //5.5
    //101.1
    //(-1)^0 * 1.011 * 2^2
    //5 = 0
    //M = 1.011
    //E = 2
    //0100 0000 1011 0000 0000 0000 0000 0000
    //0 10000001 129
    //0x40b00000
    
    //0 00000000 011000000000000000000000
    // +/- 0.011 * 2^-126
    //0 11111111 011000000000000000000000
    //E + 127 = 255
    //E = 128 
    //表示的正负无穷大的数字
    return 0;
}