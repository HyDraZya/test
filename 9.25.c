#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int vx;
//     printf("������һ����");
//     scanf("%d", &vx);

//     if(vx % 5)
//     {
//         puts("������������ܱ�5������");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);

//     if(no % 2)
//     {
//         puts("�����������������");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int vx;
//     printf("������һ��������");
//     scanf("%d", &vx);

//     if(vx % 5)
//         puts("���������ܱ�5������");
//     else
//         puts("�ú����ܱ�5������");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;
//     printf("������һ��������");
//     scanf("%d", &no);

//     if(no % 2)
//         puts("��������������");
//     else
//         puts("��������ż����");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("������һ��������");
//     scanf("%d", &num);

//     if(num)
//         puts("����������0��");
//     else
//         puts("��������0��");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a,b;
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &a);
//     printf("����B��");
//     scanf("%d", &b);
//     if(a % b)
//         puts("B����A��Լ����");
//     else
//         puts("B��A��Լ����");
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int x1, x2;
//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &x1);
//     printf("����2��");
//     scanf("%d", &x2);

//     if(x1 == x2)
//         puts("������ȡ�");
//     else
//         puts("���ǲ���ȡ�");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int x1, x2;
//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &x1);
//     printf("����2��");
//     scanf("%d", &x2);

//     if(x1 != x2)
//         puts("���ǲ���ȡ�");
//     else
//         puts("������ȡ�");
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int vx;
//     printf("������һ��������");
//     scanf("%d", &vx);

//     if(vx % 10 == 5)
//         puts("�������ĸ�λ����5��");
//     else
//         puts("�������ĸ�λ������5��"); 
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int no;

//     printf("������һ��������");
//     scanf("%d", &no);

//     if(no == 0)
//         puts("������Ϊ0��");
//     else if(no > 0)
//         puts("������Ϊ������");
//     else
//         puts("������Ϊ������");
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("������һ��������");
//     scanf("%d", &num);

//     if(num > 0)
//         printf("����ֵ��%d��\n", num);
//     else
//         printf("����ֵ��%d��\n", -num);
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2;
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &n1);
//     printf("����B��");
//     scanf("%d", &n2);

//     if(n1 == n2)
//         puts("A��B��ȡ�");
//     if(n1 > n2)
//         puts("A����B��");
//     else
//         puts("AС��B��");

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
//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &n1);
//     printf("����2��");
//     scanf("%d", &n2);

//     if(n1 > n2)
//         printf("�ϴ������%d��\n", n1);
//     else
//         printf("�ϴ������%d��\n", n2);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, max;

//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &n1);
//     printf("����2��");
//     scanf("%d", &n2);
//     if(n1 > n2)
//         max = n1;
//     else
//         max = n2;
//     printf("�ϴ������%d��\n", max);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, n3, max;

//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &n1);
//     printf("����2��");
//     scanf("%d", &n2);
//     printf("����3��");
//     scanf("%d", &n3);

//     max = n1;
//     if(n2 > max)
//         max = n2;
//     if(n3 > max)
//         max = n3;
//     printf("���ֵ��%d��\n", max);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, n3, min;
    
//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &n1);
//     printf("����2��");
//     scanf("%d", &n2);
//     printf("����3��");
//     scanf("%d", &n3);

//     min = n1;
//     if(n2 < min)
//         min = n2;
//     if(n3 < min)
//         min = n3;
//     printf("��Сֵ��%d��\n", min);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, n3, n4, max;
//     puts("�������ĸ�������");

//     printf("����A��");
//     scanf("%d", &n1);
//     printf("����B��");
//     scanf("%d", &n2);
//     printf("����C��");
//     scanf("%d", &n3);
//     printf("����D��");
//     scanf("%d", &n4);

//     max = n1;
//     if(n2 > max)
//         max = n2;
//     if(n3 > max)
//         max = n3;
//     if(n4 > max)
//         max = n4;
//     printf("���ֵ�ǣ�%d��\n", max);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, max;
//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &n1);
//     printf("����2��");
//     scanf("%d", &n2);

//     max = (n1 > n2) ? n1 : n2;
//     printf("�ϴ������%d��\n", max);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2;
    
//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &n1);
//     printf("����2��");
//     scanf("%d", &n2);

//     printf("���ǵĲ���%d��\n", (n1 > n2) ? n1-n2 : n2-n1);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, del;

//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &n1);
//     printf("����2��");
//     scanf("%d", &n2);

//     if(n1 > n2)
//         del = n1 - n2;
//     else
//         del = n2 - n1;
//     printf("���ǵĲ�ֵ��%d��\n", del);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     puts("��������������");
//     printf("����1��");
//     scanf("%d", &a);
//     printf("����2��");
//     scanf("%d", &b);
//     printf("����3��");
//     scanf("%d", &c);
    
//     printf("��Сֵ�ǣ�%d\n", (a<b) ? ((a<c) ? a : c) : ((b<c) ? b : c));
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     puts("��������������");
//     printf("����1��");
//     scanf("%d", &a);
//     printf("����2��");
//     scanf("%d", &b);
//     printf("����3��");
//     scanf("%d", &c);
    
//     printf("���ֵ�ǣ�%d\n", (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c));
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int n1, n2, max, min;
    
//     puts("����������������");
//     printf("����1��");
//     scanf("%d", &n1);
//     printf("����2��");
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

//     printf("�ϴ��ֵ�ǣ�%d��\n", max);
//     printf("��С�����ǣ�%d��\n", min);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int month;

//     printf("�������·ݣ�");
//     scanf("%d", &month);

//     if(month >= 3 && month <= 5)
//         puts("�Ǵ��졣");
//     else if(month >= 6 && month <= 8)
//         puts("�����졣");
//     else if(month >= 9 && month <= 11)
//         puts("�����졣");
//     else if(month == 1 || month == 2 || month == 12)
//         puts("�Ƕ��졣");
//     else
//         puts("�����·ݲ����ڡ�\a");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &a);
//     printf("����B��");
//     scanf("%d", &b);
//     printf("����C��");
//     scanf("%d", &c);

//     if(a == b == c)
//         puts("����ֵ�����");
//     else if(a == b || b == c || a == c)
//         puts("������ֵ���");
//     else
//         puts("����ֵ������ͬ��");

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a, b, del;
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &a);
//     printf("����B��");
//     scanf("%d", &b);

//     if(a > b)
//         del = a - b;
//     else
//         del = b - a;

//     if(del < 10 || del == 10)
//         puts("���ǵĲ�С�ڵ���10");
//     else
//         puts("���ǵĲ���ڵ���11");
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("������һ��������");
//     scanf("%d", &num);

//     if(num % 3 == 0)
//         puts("�����ܱ�3������");
//     else if(num % 3 == 1)
//         puts("��������3������1��");
//     else
//         puts("��������3������2��");
    
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;

//     printf("������һ��������");
//     scanf("%d", &num);

//     switch(num % 3)
//     {
//     case 0:
//         puts("�����ܱ�3������");
//         break;
//     case 1:
//         puts("��������3��������1��");
//         break;
//     case 2:
//         puts("��������3��������2��");
//         break;
//     }

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int sw;
//     printf("������һ��������");
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
//     printf("������һ��������");
//     scanf("%d", &no);
//     switch(no%2)
//     {
//         case 1:
//             puts("��������������");
//             break;
//         default:
//             puts("��������ż����");
//             break;
//     }
//     system("pause");
//     return 0;
// }

int main()
{
    int month;

    printf("�������·ݣ�");
    scanf("%d", &month);

    switch(month)
    {
        case 12:
            puts("�Ƕ��졣");
            break;
        case 1:
            puts("�Ƕ��졣");
            break;
        case 2:
            puts("�Ƕ��졣");
            break;
        case 3:
            puts("�Ǵ��졣");
            break;
        case 4:
            puts("�Ǵ��졣");
            break;
        case 5:
            puts("�Ǵ��졣");
            break;
        case 6:
            puts("�����졣");
            break;
        case 7:
            puts("�����졣");
            break;
        case 8:
            puts("�����졣");
            break;
        case 9:
            puts("�����졣");
            break;
        case 10:
            puts("�����졣");
            break;
        case 11:
            puts("�����졣");
            break;
        default:
            puts("������·ݲ����ڣ���\a");
            break;
    }

    system("pause");
    return 0;
}