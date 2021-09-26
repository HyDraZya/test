#include <stdio.h>
#include <stdlib.h>

// //输入的整数是奇数还是偶数
// int main()
// {
//     int cont;

//     do  {
//         int no;
//         printf("请输入一个整数；");
//         scanf("%d", &no);

//         if(no % 2)
//             puts("这个整数是奇数。");
//         else
//             puts("这个整数是偶数。");

//         printf("要重复一次吗？ 【YES…0 / No…9】：");
//         scanf("%d", &cont);
//     }   while(cont == 0);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;

//     do  {
//         printf("请输入一个非负整数：");
//         scanf("%d", &num);
//         if(num < 0)
//             puts("请不要输入负整数。");
//     }   while(num < 0);
//     //当num 大于等于0的时候
//     printf("该整数逆向显示的结果是 ");
//     do  {
//         printf("%d", num % 10);//显示最后一位数
//         num = num / 10;//右移一位
//     }   while(num > 0);
//     puts("。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     int dig;

//     do  {
//         printf("请输入一个非负整数：");
//         scanf("%d", &num);
//         if(num < 0)
//             puts("\a请不要输入负整数。");
//     }   while(num < 0);

//     dig = 0;
//     do  {
//         num = num / 10;
//         dig = dig + 1;
//     }   while(num > 0);
//     printf("该整数的位数是%d。\n", dig);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no = 1;
//     int sum = 0;

//     do  {
//         sum = sum + no;
//         no = no + 1;
//     }   while(no <= 5);

//     printf("1到5的合计值是%d。\n", sum);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;

//     do  {
//         printf("请输入一个非负整数：");
//         scanf("%d", &num);
//         if(num < 0)
//             puts("\a请不要输入负整数。");
//     }   while(num < 0);

//     printf("%d逆向显示的结果是", num);

//     do  {
//         printf("%d", num % 10);
//         num = num / 10;
//     }   while(num > 0);
//     puts("。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num, dig;

//     do  {
//         printf("请输入一个非负整数：");
//         scanf("%d", &num);
//         if(num < 0)
//             puts("\a请不要输入负整数。");
//     }   while(num < 0);

//     printf("%d的位数是", num);
//     dig = 0;
//     do  {
//         num = num / 10;
//         dig = dig + 1;
//     }   while(num > 0);

//     printf("%d。\n", dig);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, del, max, min, sum, i;
//     puts("请输入两个整数。");
//     printf("整数A：");
//     scanf("%d", &a);
//     printf("整数B：");
//     scanf("%d", &b);

//     del = (a > b) ? a - b : b - a;
//     max = (a > b) ? a : b;
//     min = (a < b) ? a : b;

//     sum = 0;
//     i = 0;
//     do{
//         sum = sum + min;
//         min = min + 1;
//         i += 1;
//     }   while (i <= del);

//     printf("大于等于%d小于等于%d的所有整数的和是%d。\n", min-del-1, max, sum);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no = 1;
//     int sum = 0;

//     do  {
//         sum += no;
//         no  += 1;
//     }   while( no <= 5);

//     printf("1到5的合计值是%d。\n", sum);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no = 1;
//     int sum = 0;

//     do  {
//         sum += no;
//         no++;
//     }   while(no <= 5);

//     printf("1到5的合计值是%d。\n", sum);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;

//     do  {
//         printf("请输入一个非负整数：");
//         scanf("%d", &num);
//         if(num < 0)
//             puts("\a请不要输入负整数。");
//     }   while(num < 0);

//     printf("%d逆向显示的结果是", num);

//     do  {
//         printf("%d", num % 10);
//         num /= 10;
//     }   while(num > 0);
//     puts("。");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num, dig;

//     do  {
//         printf("请输入一个非负整数：");
//         scanf("%d", &num);
//         if(num < 0)
//             puts("\a请不要输入负整数。");
//     }   while(num < 0);

//     printf("%d的位数是", num);
//     dig = 0;
//     do  {
//         num /= 10;
//         dig++;
//     }   while(num > 0);

//     printf("%d。\n", dig);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;

//     printf("请输入一个整数：");
//     scanf("%d", &no);

//     while(no >= 0)
//     {
//         printf("%d ", no);
//         no--;
//     }
//     putchar('\n');
//     system("pause");
//     return 0;
// }



// int main()
// {
//     int no;

//     printf("请输入一个正整数：");
//     scanf("%d", &no);

//     while(no >= 1)
//     {
//         printf("%d ", no--);
//     }


//     putchar('\n');
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, no;

//     printf("请输入一个正整数：");
//     scanf("%d", &no);

//     i = 0;
//     while(i <= no)
//     {
//         printf("%d ", i++);
//     }

//     putchar('\n');
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, no;
//     printf("请输入一个正整数：");
//     scanf("%d", &no);

//     i = 1;
//     while(i <= no)
//     {
//         printf("%d ", i++);
//     }

//     if(no >= 0)
//     {
//         putchar('\n');
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num, i;
//     printf("请输入一个整数：");
//     scanf("%d", &num);

//     i = 2;
//     while(i <= num)
//     {
//         if(num / 2)
//         {
//             printf("%d  ", i );
//         }
//         i += 2;
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num, i;
//     printf("请输入一个整数：");
//     scanf("%d", &num);
//     i = 2;
//     while(i <= num)
//     {
//         if(num / 2)
//         {
//             printf("%d ", i);
//         }
//         i *= 2;
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;

//     printf("请输入一个正整数：");
//     scanf("%d", &no);

//     while(no -- > 0)
//         putchar('*');
//     putchar('\n');

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;

//     printf("请输入一个正整数：");
//     scanf("%d", &no);

//     while(no -- > 0)
//         printf("*\n", no);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     int sum = 0;
//     int num, tmp;

//     printf("要输入多少个整数：");
//     scanf("%d", &num);

//     while(i < num)
//     {
//         printf("No.%d:", ++i);
//         scanf("%d", &tmp);
//         sum += tmp;
//     }

//     printf("合计值：%d\n", sum);
//     printf("平均值：%.2f\n", (double)sum / num);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, no;
//     printf("请输入一个正整数：");
//     scanf("%d", &no);

//     for(i = 0; i <= no; i++)
//     {
//         printf("%d ", i);
//     }
//     putchar('\n');
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, no;
//     printf("请输入一个正整数：");
//     scanf("%d", &no);

//     for(i = 1; i <= no; i++)
//         putchar('*');
//     putchar('\n');
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int sum = 0;
//     int num, tmp;

//     printf("输入多少个整数：");
//     scanf("%d", &num);

//     for(i = 0; i < num; i++)
//     {
//         printf("No.%d:", i + 1);
//         scanf("%d", &tmp);
//         sum += tmp;
//     }

//     printf("合计值：%d\n", sum);
//     printf("平均值：%.2f\n", (double) sum / num);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no = 0;
//     int sum = 0;
//     for(no = 1; no <= 5; no++)
//     {
//         sum += no;
//     }
//     printf("1到5的合计值是%d。\n", sum);
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num, i;
//     printf("请输入一个整数：");
//     scanf("%d", &num);
//     for(i = 1; i <= num; i++)
//     {
//         printf("%d", i%10);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int start, end, middle;
//     printf("开始数值(cm)：");
//     scanf("%d", &start);
//     printf("结束数值(cm)：");
//     scanf("%d", &end);
//     printf("间隔数值(cm)：");
//     scanf("%d", &middle);

//     int a, b;
//     b = start;
//     for(a = 0; a <= (end-b)/middle; a++)
//     {
//         printf("%dcm\t%.2fkg", start, (start-100) * 0.9);
//     putchar('\n');
//     start += middle;
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, j;
//     for(i = 1; i <= 9; i++)
//     {
//         for(j = 1; j <= 9; j++)
//         {
//             printf("%3d", i * j);
//         }
//         putchar('\n');
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, j;
//     printf("|");
//     for(i = 1; i < 10; i++)
//     {
//         printf("%3d", i);
//     }
//     putchar('\n');
//     for(i = 1; i < 30; i++)
//     {
//         putchar('-');
//     }
//     putchar('\n');
//     for(i = 1; i <= 9; i++)
//     {
//         printf("%d|", i);
//         for(j = 1; j <= 9; j++)
//         {
//             printf("%3d", i * j);
//         }
//         putchar('\n');
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int cont;
//     do  {
//         int num, i;
//         do  {
//             printf("请输入一个非负整数：");
//             scanf("%d", &num);
//             if(num < 0)
//                 puts("\a请不要输入负整数。");
//         }   while(num < 0);

//         for(i = 1; i <= num; i++)
//             putchar('*');
//         putchar('\n');

//         printf("是否继续执行？【Yes…0/No…9】:");
//         scanf("%d", &cont);
//     }   while(!cont);
//     system("pause");
//     return 0;
// }

int main()
{
    int i, j;
    int width, height;

    puts("让我们来描绘一个长方形。");
    printf("宽：");
    scanf("%d", &width);
    printf("高：");
    scanf("%d", &height);

    for(i = 1; i <= height; i++)
    {
        for(j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }
    system("pause");
    return 0;
}