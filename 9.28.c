// #include <stdio.h>
// #include <stdlib.h>
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

#include <stdio.h>
#include <stdlib.h>
#define NUMBER 5

int main()
{
    int i;
    int tensu[NUMBER];
    int max, min;

    puts("请输入学生的分数。");
    for(i = 0; i < NUMBER; i++)
    {
        printf("%2d号：", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];
    for(i = 1; i < NUMBER; i++)
    {
        if(tensu[i] > max)
            max = tensu[i];
        if(tensu[i] < min)
            min = tensu[i];
    }

    printf("最高分：%d\n", max);
    printf("最低分：%d\n", min);
    system("pause");
    return 0;
}