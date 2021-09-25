#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int vx;
//     printf("请输入一个：");
//     scanf("%d", &vx);

//     if(vx % 5)
//     {
//         puts("输入的整数不能被5整除。");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);

//     if(no % 2)
//     {
//         puts("输入的整数是奇数。");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int vx;
//     printf("请输入一个整数：");
//     scanf("%d", &vx);

//     if(vx % 5)
//         puts("该整数不能被5整除。");
//     else
//         puts("该函数能被5整除。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);

//     if(no % 2)
//         puts("该整数是奇数。");
//     else
//         puts("该整数是偶数。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("请输入一个整数：");
//     scanf("%d", &num);

//     if(num)
//         puts("该整数不是0。");
//     else
//         puts("该整数是0。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a,b;
//     puts("请输入两个整数。");
//     printf("整数A：");
//     scanf("%d", &a);
//     printf("整数B：");
//     scanf("%d", &b);
//     if(a % b)
//         puts("B不是A的约数。");
//     else
//         puts("B是A的约数。");
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int x1, x2;
//     puts("请输入两个整数。");
//     printf("整数1：");
//     scanf("%d", &x1);
//     printf("整数2：");
//     scanf("%d", &x2);

//     if(x1 == x2)
//         puts("它们相等。");
//     else
//         puts("它们不相等。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int x1, x2;
//     puts("请输入两个整数。");
//     printf("整数1：");
//     scanf("%d", &x1);
//     printf("整数2：");
//     scanf("%d", &x2);

//     if(x1 != x2)
//         puts("它们不相等。");
//     else
//         puts("他们相等。");
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int vx;
//     printf("请输入一个整数：");
//     scanf("%d", &vx);

//     if(vx % 10 == 5)
//         puts("该整数的个位数是5。");
//     else
//         puts("该整数的个位数不是5。"); 
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;

//     printf("请输入一个整数：");
//     scanf("%d", &no);

//     if(no == 0)
//         puts("该整数为0。");
//     else if(no > 0)
//         puts("该整数为正数。");
//     else
//         puts("该整数为负数。");
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("请输入一个整数：");
//     scanf("%d", &num);

//     if(num > 0)
//         printf("绝对值是%d。\n", num);
//     else
//         printf("绝对值是%d。\n", -num);
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2;
//     puts("请输入两个整数。");
//     printf("整数A：");
//     scanf("%d", &n1);
//     printf("整数B：");
//     scanf("%d", &n2);

//     if(n1 == n2)
//         puts("A和B相等。");
//     if(n1 > n2)
//         puts("A大于B。");
//     else
//         puts("A小于B。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a = 2;

//     a = (2 >= 1);
//     printf("%d\n",a);

//     a = (2 <= 1);
//     printf("%d\n",a);

//     a = (2 == 1);
//     printf("%d\n",a);

//     a = (2 != 1);
//     printf("%d\n",a); 

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2;
//     puts("请输入两个整数。");
//     printf("整数1：");
//     scanf("%d", &n1);
//     printf("整数2：");
//     scanf("%d", &n2);

//     if(n1 > n2)
//         printf("较大的数是%d。\n", n1);
//     else
//         printf("较大的数是%d。\n", n2);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, max;

//     puts("请输入两个整数。");
//     printf("整数1：");
//     scanf("%d", &n1);
//     printf("整数2：");
//     scanf("%d", &n2);
//     if(n1 > n2)
//         max = n1;
//     else
//         max = n2;
//     printf("较大的数是%d。\n", max);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, n3, max;

//     puts("请输入三个整数。");
//     printf("整数1：");
//     scanf("%d", &n1);
//     printf("整数2：");
//     scanf("%d", &n2);
//     printf("整数3：");
//     scanf("%d", &n3);

//     max = n1;
//     if(n2 > max)
//         max = n2;
//     if(n3 > max)
//         max = n3;
//     printf("最大值是%d。\n", max);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, n3, min;
    
//     puts("请输入三个整数。");
//     printf("整数1：");
//     scanf("%d", &n1);
//     printf("整数2：");
//     scanf("%d", &n2);
//     printf("整数3：");
//     scanf("%d", &n3);

//     min = n1;
//     if(n2 < min)
//         min = n2;
//     if(n3 < min)
//         min = n3;
//     printf("最小值是%d。\n", min);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, n3, n4, max;
//     puts("请输入四个整数：");

//     printf("整数A：");
//     scanf("%d", &n1);
//     printf("整数B：");
//     scanf("%d", &n2);
//     printf("整数C：");
//     scanf("%d", &n3);
//     printf("整数D：");
//     scanf("%d", &n4);

//     max = n1;
//     if(n2 > max)
//         max = n2;
//     if(n3 > max)
//         max = n3;
//     if(n4 > max)
//         max = n4;
//     printf("最大值是：%d。\n", max);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, max;
//     puts("请输入两个整数。");
//     printf("整数1：");
//     scanf("%d", &n1);
//     printf("整数2：");
//     scanf("%d", &n2);

//     max = (n1 > n2) ? n1 : n2;
//     printf("较大的数是%d。\n", max);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2;
    
//     puts("请输入两个整数。");
//     printf("整数1：");
//     scanf("%d", &n1);
//     printf("整数2：");
//     scanf("%d", &n2);

//     printf("它们的差是%d。\n", (n1 > n2) ? n1-n2 : n2-n1);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, del;

//     puts("请输入两个整数。");
//     printf("整数1：");
//     scanf("%d", &n1);
//     printf("整数2：");
//     scanf("%d", &n2);

//     if(n1 > n2)
//         del = n1 - n2;
//     else
//         del = n2 - n1;
//     printf("它们的差值是%d。\n", del);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     puts("请输入上整数。");
//     printf("整数1：");
//     scanf("%d", &a);
//     printf("整数2：");
//     scanf("%d", &b);
//     printf("整数3：");
//     scanf("%d", &c);
    
//     printf("最小值是：%d\n", (a<b) ? ((a<c) ? a : c) : ((b<c) ? b : c));
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     puts("请输入上整数。");
//     printf("整数1：");
//     scanf("%d", &a);
//     printf("整数2：");
//     scanf("%d", &b);
//     printf("整数3：");
//     scanf("%d", &c);
    
//     printf("最大值是：%d\n", (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c));
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, max, min;
    
//     puts("请输入两个整数。");
//     printf("整数1：");
//     scanf("%d", &n1);
//     printf("整数2：");
//     scanf("%d", &n2);

//     if(n1 > n2)
//     {
//         max = n1;
//         min = n2;
//     }
//     else
//     {
//         max = n2;
//         min = n1;
//     }

//     printf("较大的值是：%d。\n", max);
//     printf("较小的数是：%d。\n", min);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int month;

//     printf("请输入月份：");
//     scanf("%d", &month);

//     if(month >= 3 && month <= 5)
//         puts("是春天。");
//     else if(month >= 6 && month <= 8)
//         puts("是夏天。");
//     else if(month >= 9 && month <= 11)
//         puts("是秋天。");
//     else if(month == 1 || month == 2 || month == 12)
//         puts("是冬天。");
//     else
//         puts("输入月份不存在。\a");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     puts("请输入三个整数。");
//     printf("整数A：");
//     scanf("%d", &a);
//     printf("整数B：");
//     scanf("%d", &b);
//     printf("整数C：");
//     scanf("%d", &c);

//     if(a == b == c)
//         puts("三个值都相等");
//     else if(a == b || b == c || a == c)
//         puts("有两个值相等");
//     else
//         puts("三个值各不相同。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, del;
//     puts("请输入两个整数。");
//     printf("整数A：");
//     scanf("%d", &a);
//     printf("整数B：");
//     scanf("%d", &b);

//     if(a > b)
//         del = a - b;
//     else
//         del = b - a;

//     if(del < 10 || del == 10)
//         puts("他们的差小于等于10");
//     else
//         puts("他们的差大于等于11");
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("请输入一个整数：");
//     scanf("%d", &num);

//     if(num % 3 == 0)
//         puts("该数能被3整除。");
//     else if(num % 3 == 1)
//         puts("该数除以3的余数1。");
//     else
//         puts("该数除以3的余数2。");
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;

//     printf("请输入一个整数：");
//     scanf("%d", &num);

//     switch(num % 3)
//     {
//     case 0:
//         puts("该数能被3整除。");
//         break;
//     case 1:
//         puts("该数除以3的余数是1。");
//         break;
//     case 2:
//         puts("该数除以3的余数是2。");
//         break;
//     }

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int sw;
//     printf("请输入一个整数：");
//     scanf("%d", &sw);

//     switch(sw)
//     {
//         case 1:
//             puts("A");
//             puts("B");
//             break;
//         case 2:
//             puts("C");
//         case 5:
//             puts("D");
//             break;
//         case 6:
//         case 7:
//             puts("E");
//             break;
//         default:
//             puts("F");
//             break;
//     }

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);
//     switch(no%2)
//     {
//         case 1:
//             puts("该整数是奇数。");
//             break;
//         default:
//             puts("该整数是偶数。");
//             break;
//     }
//     system("pause");
//     return 0;
// }

int main()
{
    int month;

    printf("请输入月份：");
    scanf("%d", &month);

    switch(month)
    {
        case 12:
            puts("是冬天。");
            break;
        case 1:
            puts("是冬天。");
            break;
        case 2:
            puts("是冬天。");
            break;
        case 3:
            puts("是春天。");
            break;
        case 4:
            puts("是春天。");
            break;
        case 5:
            puts("是春天。");
            break;
        case 6:
            puts("是夏天。");
            break;
        case 7:
            puts("是夏天。");
            break;
        case 8:
            puts("是夏天。");
            break;
        case 9:
            puts("是秋天。");
            break;
        case 10:
            puts("是秋天。");
            break;
        case 11:
            puts("是秋天。");
            break;
        default:
            puts("输入的月份不存在！！\a");
            break;
    }

    system("pause");
    return 0;
}