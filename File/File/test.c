#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("eg.dat", "w");
//	//fopen ����Ϊtest.txt���ļ� 
//	//wb �Զ����Ƶ���ʽд���ļ�
//	fwrite(&a, 4, 1, pf);//дһ���ĸ��ֽڵ����ݷŵ���pfά�����ļ���ȥ
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//int main()
//{
//	//���ļ�mysize.txt
//	//���·��
//	//..��ʾ��һ��·��
//	//fopen("../../mysize.txt", "r");
//	//.��ʾ��ǰ·��
//	FILE* pf = fopen("eg.dat", "w");//���·��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	printf("file open success.\n");
//	fclose(pf);//�ر��ļ�
//	return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//int main()
//{
//	FILE* pf = fopen("mysize.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	д�ļ�
//	�ر��ļ�
//	fputc('H', pf);//stdout ��׼�����
//	fputc('y', pf);
//	fputc('D', pf);
//	fputc('r', pf);
//	fputc('a', pf);
//	fclose(pf);
//
//	return 0;
//}

//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//int main()
//{
//	FILE *pf = fopen("mysize.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE *pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{	
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	fputs(buf, stdout);
//	//��������д���ȼ�����������д��
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int n;
//	float f;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 520, 13.14f, "HSS" };
//	FILE* pf = fopen("mysize.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.f, s.arr);
//	fclose(pf);//�ر��ļ�
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int n;
//	float f;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.f), s.arr);
//	printf("%d %f %s\n", s.n, s.f, s.arr);
//	fclose(pf);//�ر��ļ�
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int n;
//	float f;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 520, 13.14f, "HSS" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ��������ת�����ַ����洢��buffer
//	sprintf(buf, "%d %f %s", s.n, s.f, s.arr);
//	//��buffer�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.f), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.f, tmp.arr);
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	int height;
//};
//int main()
//{
//	struct S s = {"HyDra", 18, 185};
//	FILE* pf = fopen("mysize.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	int height;
//};
//int main()
//{
//	struct S tmp = { 0 };
//	FILE *pf = fopen("mysize.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %d\n", tmp.name, tmp.age, tmp.height);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);
//	//2����ȡ�ļ�
//	int tmp = fgetc(pf);
//	printf("%c\n", tmp);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//2����ȡ�ļ�
//	int eg = ftell(pf);
//	printf("%d\n", eg);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("mysize.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	int as = fgetc(pf);
//	printf("%c\n", as);
//
//	rewind(pf);
//	as = fgetc(pf);
//	printf("%c\n", as);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//feof(); EOF - end of file - �ļ�������־
//	FILE *pf = fopen("eg.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int size = fgetc(pf);
//	printf("%d\n", size);//-1
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include <stdio.h>
int main()
{
	FILE *pf = fopen("mysize.txt", "r");
	if (pf == NULL)
	{
		perror("open file eg.txt");
		return 0;
	}
	//���ļ�
	int ag = 0;
	while ((ag = fgetc(pf)) != EOF)
	{
		putchar(ag);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf(" end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}


