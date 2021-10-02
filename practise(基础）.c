// #include <stdio.h>
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     while(n)
//     {
//         printf("%d", n % 10);
//         n = n / 10;
//     }
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a;
//     scanf("%c", &a);
//     int i, j = 0;
//     for(i = 1 ; i <= 5; i++)//打印五行
//     {
//         for(j = 1; j <= 5 - i; j++)//第几行有几个空格
//         {
//             printf(" ");
//         }
//         int m;
//         for(m = 0; m <= i-1; m++)
//         {
//             printf("%c ", a);
//         }
//         printf("\n");
//     }
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int ch = 0;
//     while((ch = getchar()) != EOF)
//     {
//         putchar(ch + 32);
//         printf("\n");
//         getchar();
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     printf("%c%c%c%c%c%c%c%c%c%c%c%c",73,32,99,97,110,32,100,111,32,105,116,33);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 40;
//     int c = 212;
//     int b = (-8+22)*a-10+c/2;
//     printf("(-8+22)×a-10+c+2=%d\n", b);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a,b = 0;
//     scanf("%d %d", &a, &b);
//     printf("%d %d\n", a/b, a%b);
//     system("pause");
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[12] = {77, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    int i = 0;
    for(i = 0; i < 12; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}