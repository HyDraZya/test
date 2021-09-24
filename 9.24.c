#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int vx, vy;
//     puts("请输入两个整数。");
//     printf("整数vx：");
//     scanf("%d", &vx);
//     printf("整数vy：");
//     scanf("%d", &vy);

//     printf("vx + vy = %d\n", vx + vy);
//     printf("vx - vy = %d\n", vx - vy);
//     printf("vx * vy = %d\n", vx * vy);
//     printf("vx / vy = %d\n", vx / vy);
//     printf("vx %% vy = %d\n", vx % vy);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;
//     printf("请输入一个整数：");
//     scanf("%d", &no);

//     printf("最后一位是%d。\n", no % 10);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a,b;
//     float c;
//     printf("整数A：");
//     scanf("%d", &a);
//     printf("整数B：");
//     scanf("%d", &b);
//     c = (double)a/b*100;
//     printf("A的值是B的%.2f%%。\n", c);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na, nb;
//     puts("请输入两个整数。");
//     printf("整数A：");
//     scanf("%d", &na);
//     printf("整数B：");
//     scanf("%d", &nb);
//     printf("A除以B得%d余%d。\n", na / nb, na % nb);

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
//     printf("它们的和是%d,积是%d。\n", a + b, a * b);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("请输入一个整数：");
//     scanf("%d", &num);
//     printf("符号取反之后的值是%d。\n", -num); //单目运算符

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na,nb;
//     puts("请输入两个整数。");
//     printf("整数A：");
//     scanf("%d", &na);
//     printf("整数B：");
//     scanf("%d", &nb);

//     printf("它们的平均值是%d。\n", (na+nb)/2);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int nx;
//     double dx;
//     nx = 9.99;
//     dx = 9.99;
//     printf("int    型变量 nx 的值：%d\n", nx);
//     printf("              nx / 2 ：%d\n", nx / 2);
//     printf("double 型变量 dx 的值：%f\n", dx);
//     printf("              dx/2.0 ：%f\n", dx / 2.0);
//     system("pause");
//     return 0;
// }

//读取两个实数值，用实数表示出它们的和、差、积、商
// int main()
// {
//     double vx, vy;//浮点数

//     puts("请输入两个数。");
//     printf("实数vx：");
//     scanf("%lf", &vx);
//     printf("实数vy：");
//     scanf("%lf", &vy);

//     printf("vx + vy = %f\n", vx+vy);
//     printf("vx - vy = %f\n", vx-vy);
//     printf("vx * vy = %f\n", vx*vy);
//     printf("vx / vy = %f\n", vx/vy);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, n3, n4; //整数
//     double d1, d2, d3, d4; //浮点数

//     n1 = 5   / 2;
//     n2 = 5.0 / 2.0; //赋值时舍弃小数点以后的部分
//     n3 = 5.0 / 2;   //赋值时舍弃小数点以后的部分
//     n4 = 5   / 2.0; //赋值时舍弃小数点以后的部分

//     d1 = 5   / 2;
//     d2 = 5.0 / 2.0;
//     d3 = 5.0 / 2;
//     d4 = 5   / 2.0;

//     printf("n1 = %d\n", n1); 
//     printf("n2 = %d\n", n2); 
//     printf("n3 = %d\n", n3);
//     printf("n4 = %d\n\n", n4);

//     printf("d1 = %f\n", d1);
//     printf("d2 = %f\n", d2);
//     printf("d3 = %f\n", d3);
//     printf("d4 = %f\n", d4);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na, nb;
//     puts("请输入两个整数。");
//     printf("整数A：");
//     scanf("%d", &na);
//     printf("整数B：");
//     scanf("%d", &nb);
//     printf("它们的平均值是%f。\n", (na+nb)/2.0);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na, nb;
//     float ret;
//     puts("请输入两个整数。");
//     printf("整数A：");
//     scanf("%d", &na);
//     printf("整数B：");
//     scanf("%d", &nb);
//     ret = (double)na/nb*100;
//     printf("A是B的%lf%%。\n", ret);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na,nb,nc;
//     int sum;
//     double ave;
//     puts("请输入三个整数。");
//     printf("整数A：");
//     scanf("%d", &na);
//     printf("整数B：");
//     scanf("%d", &nb);
//     printf("整数C：");
//     scanf("%d", &nc);

//     sum = na + nb + nc;
//     ave = (double)sum / 3;

//     printf("它们的合计值是%5d。\n", sum);
//     printf("它们的平均值是%5.1f。\n", ave);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     printf("[%d]\n",      123);
//     printf("[%.4d]\n",    123);
//     printf("[%4d]\n",     123);
//     printf("[%04d]\n",    123);
//     printf("[%-4d]\n\n",  123);

//     printf("[%d]\n",      12345);
//     printf("[%.3d]\n",    12345);
//     printf("[%3d]\n",     12345);
//     printf("[%03d]\n",    12345);
//     printf("[%-3d]\n\n",  12345);

//     printf("[%f]\n",      123.13);
//     printf("[%.1f]\n",    123.13);
//     printf("[%6.1f]\n\n", 123.13);

//     printf("[%f]\n",      123.13);
//     printf("[%.1f]\n",    123.13);
//     printf("[%4.1f]\n\n", 123.13);
    
//     system("pause");
//     return 0;
// }

int main()
{
    int h;
    float w;
    printf("请输入您的身高：");
    scanf("%d", &h);
    w = (h-100)*0.9;

    printf("您的标准体重是%.1f公斤\n", w);
    system("pause");
    return 0;
}