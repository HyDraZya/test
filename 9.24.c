#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int vx, vy;
//     puts("����������������");
//     printf("����vx��");
//     scanf("%d", &vx);
//     printf("����vy��");
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
//     printf("������һ��������");
//     scanf("%d", &no);

//     printf("���һλ��%d��\n", no % 10);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int a,b;
//     float c;
//     printf("����A��");
//     scanf("%d", &a);
//     printf("����B��");
//     scanf("%d", &b);
//     c = (double)a/b*100;
//     printf("A��ֵ��B��%.2f%%��\n", c);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na, nb;
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &na);
//     printf("����B��");
//     scanf("%d", &nb);
//     printf("A����B��%d��%d��\n", na / nb, na % nb);

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
//     printf("���ǵĺ���%d,����%d��\n", a + b, a * b);

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("������һ��������");
//     scanf("%d", &num);
//     printf("����ȡ��֮���ֵ��%d��\n", -num); //��Ŀ�����

//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na,nb;
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &na);
//     printf("����B��");
//     scanf("%d", &nb);

//     printf("���ǵ�ƽ��ֵ��%d��\n", (na+nb)/2);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int nx;
//     double dx;
//     nx = 9.99;
//     dx = 9.99;
//     printf("int    �ͱ��� nx ��ֵ��%d\n", nx);
//     printf("              nx / 2 ��%d\n", nx / 2);
//     printf("double �ͱ��� dx ��ֵ��%f\n", dx);
//     printf("              dx/2.0 ��%f\n", dx / 2.0);
//     system("pause");
//     return 0;
// }

//��ȡ����ʵ��ֵ����ʵ����ʾ�����ǵĺ͡��������
// int main()
// {
//     double vx, vy;//������

//     puts("��������������");
//     printf("ʵ��vx��");
//     scanf("%lf", &vx);
//     printf("ʵ��vy��");
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
//     int n1, n2, n3, n4; //����
//     double d1, d2, d3, d4; //������

//     n1 = 5   / 2;
//     n2 = 5.0 / 2.0; //��ֵʱ����С�����Ժ�Ĳ���
//     n3 = 5.0 / 2;   //��ֵʱ����С�����Ժ�Ĳ���
//     n4 = 5   / 2.0; //��ֵʱ����С�����Ժ�Ĳ���

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
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &na);
//     printf("����B��");
//     scanf("%d", &nb);
//     printf("���ǵ�ƽ��ֵ��%f��\n", (na+nb)/2.0);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na, nb;
//     float ret;
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &na);
//     printf("����B��");
//     scanf("%d", &nb);
//     ret = (double)na/nb*100;
//     printf("A��B��%lf%%��\n", ret);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     int na,nb,nc;
//     int sum;
//     double ave;
//     puts("����������������");
//     printf("����A��");
//     scanf("%d", &na);
//     printf("����B��");
//     scanf("%d", &nb);
//     printf("����C��");
//     scanf("%d", &nc);

//     sum = na + nb + nc;
//     ave = (double)sum / 3;

//     printf("���ǵĺϼ�ֵ��%5d��\n", sum);
//     printf("���ǵ�ƽ��ֵ��%5.1f��\n", ave);

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
    printf("������������ߣ�");
    scanf("%d", &h);
    w = (h-100)*0.9;

    printf("���ı�׼������%.1f����\n", w);
    system("pause");
    return 0;
}