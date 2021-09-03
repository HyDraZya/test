#include <stdio.h>
#include <string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 12
#define MAX_ADDRESS 30


enum Option
{
    EXIT,
    ADD,
    DEL,
    SERACH,
    MODIFY,
    SHOW,
    SORT
};

//ͨѶ¼��Ϣ
struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char phone[MAX_PHONE];
    char address[MAX_ADDRESS];
};

//ͨѶ¼����
struct Contact
{
    struct PeoInfo data[MAX];//���1000����Ϣ
    int size;//��¼��ǰ�ṹ�����Ѿ��е�Ԫ�ظ���
};

//��������
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact *ps)
{
    memset(ps->data, 0, sizoef(ps->data));
    ps->size= 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact *ps)
{
    if(ps->size == MAX)
    {
        printf("ͨѶ¼�������޷�����");
    }
    else
    {
        printf("����������:>");
        scanf("%s", ps->data[ps->size].name);
        printf("����������:>");
        scanf("%s", &(ps->data[ps->size].age));
        printf("�������Ա�:>");
        scanf("%s", ps->data[ps->size].sex);
        printf("������绰:>");
        scanf("%s", ps->data[ps->size].phone);
        printf("�������ͥ��ַ:>");
        scanf("%s", ps->data[ps->size].address);

        ps->size++;
        printf("��ӳɹ�\n");
    }
}

//����FindByName������ʹ���װ�ڳ����ڲ�������¶��ȥ
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
    int i = 0;
    for(i = 0; i < ps->size; i++)
    {
        if(0 == strcmp(ps->data[i].name, name))
        {
            return i;
        }
    }
    return -1;//�Ҳ��������
}

//ɾ���ƶ�����ϵ��
void DelContact(struct Contact *ps)
{
    char name[MAX_NAME];
    printf("������Ҫɾ���˵�����:>");
    scanf("%s", ps->data[ps->size].name);
    //1.����Ҫɾ��������ʲôλ��
    //�ҵ��˷�����������Ԫ�ص��±�
    //�Ҳ������� -1
    int pos = FindbyName(ps, name);
    if (pos == -1)
    {
        printf("Ҫɾ������ϵ�˲����ڣ�������\n");
    }
    //2.ɾ������
    int j = 0;
    for(j = pos; j < ps->size; j++)
    {
        ps->data[j] = ps->data[j+1];
        //����ɾ����������ݣ����Ժ�������ݻᶥ������
    }
    ps->size--;
    printf("ɾ���ɹ�\n");
}

//����ָ�����˵���Ϣ
void SearchContact(struct Contact *ps)
{
    char name[MAX_NAME];
    printf("������Ҫ�����˵�����:>");
    scanf("%s", name);
    int pos = FindbyName(ps, name);
    if(pos == -1)
    {
        printf("Ҫ���ҵ��˲�����,������\n");
    }
    else
    {
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
            ps->data[pos].name,
            ps->data[pos].age,
            ps->data[pos].sex,
            ps->data[pos].phone,
            ps->data[pos].address);
    }
}

//�޸�ָ����ϵ�˵���Ϣ
void MoidfyContact(struct Contact *ps)
{
    char name[MAX_NAME];
    printf("������Ҫ�޸���ϵ�˵�����:>");
    scanf("%s", name);
    int pos = FineByName(ps, name);
    if (pos == -1)
    {
        printf("Ҫ�޸���ϵ�˵���Ϣ�����ڣ�������\n");
    }
    else
    {
        printf("����������:>");
        scanf("%s", ps->data[pos].name);
        printf("����������:>");
        scanf("%s", &(ps->data[pos].age));
        printf("�������Ա�:>");
        scanf("%s", ps->data[pos].sex);
        printf("������绰:>");
        scanf("%s", ps->data[pos].phone);
        printf("�������ͥ��ַ:>");
        scanf("%s", ps->data[pos].address);

        printf("�޸����\n");
    }
}


//չʾͨѶ¼�е���Ϣ
void ShowContact(const struct Contact *ps)
{
    if(ps->size == 0)
    {
        printf("ͨѶ¼Ϊ��\n");
    }
    else
    {
        int i = 0;
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
        for(i = 0; i < ps->size; i++)
        {
            printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
            ps->data[i].name,
            ps->data[i].age,
            ps->data[i].sex,
            ps->data[i].phone,
            ps->data[i].address);
        }
    }
}

//����ͨѶ¼����
void SortContact(struct Contact *ps)
{
    if(ps == NULL)
    {
        printf("��ͨѶ¼��\n");
        return 0;
    }
    int i = 0;
    for(i= 0; i < ps->size - 1; i++)
    {
        int j = 0;
        for (; j< ps->size - 1 - i; ++j)
        {
             if (strcmp(ps->data[j].name, ps->data[j + 1].name) > 0)
            {
                char name[MAX_NAME];
                strcpy(name, ps->data[j].name);
                strcpy(ps->data[j].name, ps->data[j + 1].name);
                strcpy(ps->data[j + 1].name, name);
    }
}

void menu()
{
	printf("*********************************\n");
	printf("**        1. �����ϵ��         **\n");
	printf("**        2. ɾ����ϵ��         **\n");
	printf("**        3. ������ϵ��         **\n");
	printf("**        4. �޸���ϵ��         **\n");
	printf("**        5. ��ʾ������ϵ��      **\n");
	printf("**        6. ������������ϵ��    **\n");
	printf("**        0. exit              **\n");
	printf("*********************************\n");
}


int main()
{
    int input = 0;
    //����ͨѶ¼
    struct PeoInfo con[MAX];//con����ͨѶ¼�����������1000��Ԫ�ص�����size
    //��ʼ��ͨѶ¼
    InitContact(con);
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            AddContact(&con);
            break;
        case 2:
            DelContact(&con);
            break;
        case 3:
            SearchContact(&con);
            break;
        case 4:
            MoidfyContact(&con);
            break;
        case 5:
            ShowContact(&con);
            break;
        case 6:
            SortContact(&con);
            break;
        case 0:
            printf("�˳�ͨѶ¼\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input);
    return 0;
}