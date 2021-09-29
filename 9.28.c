#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int uchida;
//     int satoh;
//     int sanaka;
//     int hiraki;
//     int masaki;
//     int sum =0;
//     puts("请输入分数。");
//     printf("1号：");
//     scanf("%d", &uchida);
//     printf("2号：");
//     scanf("%d", &satoh);
//     printf("3号：");
//     scanf("%d", &sanaka);
//     printf("4号：");
//     scanf("%d", &hiraki);
//     printf("5号：");
//     scanf("%d", &masaki);

//     sum += uchida;
//     sum += satoh;
//     sum += sanaka;
//     sum += hiraki;
//     sum += masaki;

//     printf("总分:%5d\n", sum);
//     printf("平均分:%5.1f\n", (double)sum / 5);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int vx[5];
//     vx[0] = 1;
//     vx[1] = 2;
//     vx[2] = 3;
//     vx[3] = 4;
//     vx[4] = 5;

//     printf("vx[0] = %d\n", vx[0]);
//     printf("vx[1] = %d\n", vx[1]);
//     printf("vx[2] = %d\n", vx[2]);
//     printf("vx[3] = %d\n", vx[3]);
//     printf("vx[4] = %d\n", vx[4]);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int vc[5];

//     for(i = 0; i < 5; i++)
//     {
//         vc[i] = i + 1;
//     }

//     for(i = 0; i < 5; i++)
//     {
//         printf("vc[%d] = %d\n", i, vc[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     double vd[5];

//     for(i = 0; i < 5; i++)
//     {
//         vd[i] = 0.0;
//     }
//     for(i = 0; i < 5; i++)
//     {
//         printf("vd[%d] = %.1f\n", i, vd[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int vc[5];

//     for(i = 0; i < 5; i++)
//     {
//         vc[i] = i;
//     }
//     for(i = 0; i < 5; i++)
//     {
//         printf("vc[%d] = %d\n", i, vc[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, j;
//     int vc[5];
//     for(i = 0; i < 5; i++)
//     {
//         vc[i] = 5 - i;
//     }
//     for(i = 0; i < 5; i++)
//     {
//         printf("vc[%d] = %d\n", i, vc[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int vc[5] = {1,2,3,4,5};
//     for(i = 0; i < 5; i++)
//     {
//         printf("vc[%d] = %d\n", i, vc[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int va[5] = {15, 20, 30};
//     int vb[5];

//     for(i = 0; i < 5; i++)
//     {
//         vb[i] = va[i];
//     }

//     puts(" va vb");
//     puts("-------");
//     for(i = 0; i < 5; i++)
//     {
//         printf("%3d%3d\n", va[i], vb[i]);
//     }
//     system("Pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int vc[5] = {5, 4, 3, 2, 1};

//     for(i = 0; i < 5; i++)
//     {
//         printf("vc[%d] = %d\n", i, vc[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int va[5] = {15, 20, 30};
//     int vb[5];
//     for(i = 0; i < 5; i++)
//     {
//         vb[i] = va[4 - i];
//     }
//     puts(" va vb");
//     puts("-------");
//     for(i = 0; i < 5; i++)
//     {
//         printf("%3d%3d\n", va[i], vb[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int vx[5];
//     for(i = 0; i < 5; i++)
//     {
//         printf("vx[%d]:", i);
//         scanf("%d", &vx[i]);
//     }

//     for(i = 0; i < 5; i++)
//     {
//         printf("vx[%d] = %d\n", i, vx[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int vx[5];
//     for(i = 0; i < 5; i++)
//     {
//         printf("vx[%d]:", i);
//         scanf("%d", &vx[i]);
//     }

//     for(i = 0; i < 2; i++)
//     {
//         int temp = vx[i];
//         vx[i] = vx[4 - i];
//         vx[4 - i] = temp;
//     }

//     for(i = 0; i < 5; i++)
//     {
//         printf("vx[%d] = %d\n", i, vx[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int vx[8];
//     for(i = 0; i < 8; i++)
//     {
//         printf("vx[%d]:", i);
//         scanf("%d", &vx[i]);
//     }

//     for(i = 0; i < 2; i++)
//     {
//         int temp = vx[i];
//         vx[i] = vx[7 - i];
//         vx[7 - i] = temp;
//     }

//     for(i = 0; i < 8; i++)
//     {
//         printf("vx[%d] = %d\n", i, vx[i]);
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i;
//     int tensu[5];
//     int sum = 0;

//     puts("请输入学生的分数。");
//     for(i = 0; i < 5; i++)
//     {
//         printf("%2d号：", i + 1);
//         scanf("%d", &tensu[i]);
//         sum += tensu[i];
//     }

//     printf("总分：%5d\n", sum);
//     printf("平均分：%5.1f\n", (double)sum / 5);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>

// #define NUMBER 5

// int main()
// {
//     int i;
//     int tensu[NUMBER];
//     int sum = 0;

//     puts("请输入学生的分数。");
//     for(i = 0; i < NUMBER; i++)
//     {
//         printf("%2d号：", i + 1);
//         scanf("%d", &tensu[i]);
//         sum += tensu[i];
//     }

//     printf("总分：%5d\n", sum);
//     printf("平均分：%5.1f\n", (double)sum / NUMBER);

//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define NUMBER 5

// int main()
// {
//     int i;
//     int tensu[NUMBER];
//     int max, min;

//     puts("请输入学生的分数。");
//     for(i = 0; i < NUMBER; i++)
//     {
//         printf("%2d号：", i + 1);
//         scanf("%d", &tensu[i]);
//     }

//     min = max = tensu[0];
//     for(i = 1; i < NUMBER; i++)
//     {
//         if(tensu[i] > max)
//             max = tensu[i];
//         if(tensu[i] < min)
//             min = tensu[i];
//     }

//     printf("最高分：%d\n", max);
//     printf("最低分：%d\n", min);
//     system("pause");
//     return 0;
// }

// #include <Stdio.h>
// #include <stdlib.h>
// int main()
// {
//     double a;
//     int b;
//     a = b = 1.5;
//     printf("a = %lf\n", a);
//     printf("b = %d\n", b);
//     system("Pause");
//     return 0;
// }

// #include <Stdio.h>
// #include <stdlib.h>
// #define NUMBER 5
// int main()
// {
//     int i;
//     int snum = 0;
//     int tensu[NUMBER];
//     int succs[NUMBER];
    
//     puts("请输入学生的分数。");
//     for(i = 0; i < NUMBER; i++)
//     {
//         printf("%2d号：", i + 1);
//         scanf("%d", &tensu[i]);
//         if(tensu[i] >= 60)
//             succs[snum++] = i;
//     }

//     puts("及格学生一览表");
//     puts("--------------");
//     for(i = 0; i < snum; i++)
//     {
//         printf("%d2号(%3d分)\n", succs[i] + 1, tensu[succs[i]]);
//     }
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define NUMBER 80

// int main()
// {
//     int i, j;
//     int num;
//     int tensu[NUMBER];
//     int bunpu[11] = {0};

//     printf("请输入学生人数：");
//     do  {
//         scanf("%d", &num);
//         if(num < 1 || num > NUMBER)
//         {
//             printf("\a人数范围[1到%d]：", NUMBER);
//         }
//     }   while(num < 1 || num > NUMBER);
    
//     puts("请输入学生的分数。");
//     for(i = 0 ; i < num; i++)
//     {
//         printf("%2d号：", i + 1);
//         do  {
//             scanf("%d", &tensu[i]);
//             if(tensu[i] < 0 || tensu[i] > 100)
//             {
//                 printf("\a分数范围[0到100]：");
//             }   
//         }   while(tensu[i] < 0 || tensu[i] > 100);
//         bunpu[tensu[i] / 10]++;
//     }

//     puts("\n口 分布图 口");
//     printf("      100:");
//     for(j = 0; j < bunpu[10]; j++)
//     {
//         putchar('*');
//     }
//     putchar('\n');

//     for(i = 9; i >= 0; i--)
//     {
//         printf("%3d - %3d:", i * 10, i * 10 + 9);
//         for(j = 0; j < bunpu[i]; j++)
//         {
//             putchar('*');
//         }
//         putchar('\n');
//     }

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, j;
//     int ma[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int mb[2][3] = {{6, 3, 4}, {5, 1, 2}};
//     int mc[2][3] = {0};
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 3; j++)
//         {
//             mc[i][j] = ma[i][j] +mb[i][j];
//         }
//     }
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 3; j++)
//         {
//             printf("%3d", mc[i][j]);
//         }
//         putchar('\n');
//     }
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, j, k;
//     int x[2][3] = {{1, 2, 3}, {4, 5 ,6}};
//     int y[3][2] = {{1, 5}, {5, 3}, {8, 1}};
//     int z[2][2];
    
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             for(k = 0; k < 3; k++)
//             {
//                 (z[i][j] += x[i][k] * y[k][j]);
//             }
//         }
//     }
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             printf("%d\t", z[i][j]);
//         }
//         printf("\n");
//     }
//     system("Pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, no;
//     unsigned long counter = 0;
//     for(no = 2; no <= 1000; no++)
//     {
//         for(i = 2; i < no; i++)
//         {
//             counter++;
//             if(no % i == 0)
//             {
//                 break;
//             }
//         }
//         if(no == i)
//         {
//             printf("%d\n", no);
//         }
//     }
//     printf("乘除运算的次数：%lu\n", counter);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, no;
//     unsigned long counter = 0;
//     no = 2;
//     printf("%d\n", no++);

//     for(; no <= 1000; no +=2)
//     {
//         for(i = 2; i < no; i++)
//         {
//             counter++;
//             if(no % i == 0)
//                 break;
//         }
//         if(no == i)
//             printf("%d\n", no);
//     }

//     printf("乘除运算的次数：%lu\n", counter);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, no;
//     unsigned long counter = 0;
//     no = 2;
//     printf("%d\n", no++);

//     for(; no <= 1000; no +=2)
//     {
//         for(i = 3; i < no; i+=2)
//         {
//             counter++;
//             if(no % i == 0)
//                 break;
//         }
//         if(no == i)
//             printf("%d\n", no);
//     }

//     printf("乘除运算的次数：%lu\n", counter);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int i, no;
//     int prime[500];
//     int ptr = 0;
//     unsigned long counter = 0;
//     prime[ptr++] = 2;
//     prime[ptr++] = 3;
//     for(no = 5; no <= 1000; no += 2)
//     {
//         for(i = 1; i < ptr; i++)
//         {
//             counter++;
//             if(no % prime[i] == 0)
//                 break;
//         }
//         if(ptr == i)
//             prime[ptr++] = no;
//     }
//     for(i = 0; i < ptr; i++)
//     {
//         printf("%d\n", prime[i]);
//     }
//     printf("乘除运算的次数：%lu\n", counter);
//     system("pause");
//     return 0;
// }

int main()
{
    int i, no;
    int prime[500];
    int ptr = 0;
    unsigned long counter = 0;
    prime[ptr++] = 2;
    prime[ptr++] = 3;
    for(no = 5; no <= 1000; no += 2)
    {
        int flag = 0;
        for(i = 1; counter++, prime[i] * prime[i] <= no; i++)
        {
            counter++;
            if(no % prime[i] == 0)
            {
                flag = 1;
                break;
            } 
        }
        if(!flag)
        {
            prime[ptr++] = no;
        }
    }
    for(i = 0; i < ptr; i++)
    {
        printf("%d\n", prime[i]);
    }
    printf("乘除运算的次数：%lu\n", counter);

    system("pause");  
    return 0;
}