#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
 
//��ʼ�ռ�Ϊ5��
#define ORG_SPACE 5

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 12
#define MAX_ADDRESS 30

//ö�٣�ѡ����
enum Choose
{
    EXIT,    //0
    ADD,     //1
    DEL,     //2
    SEARCH,  //3
    MODIFY,  //4
    SHOW,    //5
    SORT,    //6
    DESTROY, //7
    SAVE     //8
};
 
//�ṹ�壺ͨѶ¼��ÿ����Ա����Ϣ
typedef struct PeoInform//���ṹ��ָ����������ΪPeoInform
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char phone[MAX_PHONE];
    char address[MAX_ADDRESS];
}PeoInform;
 
//�ṹ�壺ͨѶ¼����
typedef struct Contact
{
    struct PeoInform *data;//�����Ϣ
    int size;//��¼��ǰ�ṹ�����Ѿ��е�Ԫ�ظ���
    int capacity;//��ǰͨѶ¼���������
}Contact;

//ͨѶ¼����
void ExpandCapacity(struct Contact *ps)
{
    if(ps->size == ps->capacity)
    {
        struct PeoInform *ptr = realloc(ps->data, (ps->capacity+2)*sizeof(PeoInform));
		if(ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 5; //�Զ����������̬�ռ�
			printf("����ɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

//��ȡͨѶ¼��Ϣ
void LoadContact(Contact *ps)
{
	PeoInform tmp = {0};//��ʱ����tmp
	FILE *FR = fopen("contact.txt", "rb");
	if(FR == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	
	//��ȡ�ļ�����ŵ�ͨѶ¼��
	while(fread(&tmp, sizeof(PeoInform), 1, FR))
	{
		ExpandCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(FR);
	FR = NULL;
}

//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact *ps)
{
	ps->data = (struct PeoInform*)malloc(ORG_SPACE*sizeof(struct PeoInform));
	if(ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = ORG_SPACE;
	//���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
	LoadContact(ps);
}

//������������ϵ���Ƿ����
static int FindByName(const struct Contact *ps, char name[MAX_NAME])
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

//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact *ps)
{
    ExpandCapacity(ps);
    //��������
    printf("����������:>");
    scanf("%s", ps->data[ps->size].name);
    printf("����������:>");
    scanf("%d", &(ps->data[ps->size].age));
    printf("�������Ա�:>");
    scanf("%s", ps->data[ps->size].sex);
    printf("������绰:>");
    scanf("%s", ps->data[ps->size].phone);
    printf("�������ͥ��ַ:>");
    scanf("%s", ps->data[ps->size].address);
 
    ps->size++;
    printf("��ӳɹ�\n");
}
 
//ɾ��ָ������ϵ��
void DelContact(struct Contact *ps)
{
    int pos = 0;
    char name[MAX_NAME];
    printf("������Ҫɾ���˵�����:>");
    scanf("%s", name);
    //1.����Ҫɾ��������ʲôλ��
    //�ҵ��˷�����������Ԫ�ص��±�
    //�Ҳ������� -1
    pos = FindByName(ps, name);
    //2.ɾ��
    //��ѯ������ϵ��
    if (pos == -1)
    {
        printf("��ѯ����Ҫɾ������ϵ�ˣ�������\n");
    }
    else
    {
        //ɾ������
        int j = 0;
        for(j = pos; j < ps->size-1; j++)
        {
            ps->data[j] = ps->data[j + 1];
            //����ɾ����������ݣ����Ժ�������ݻᶥ������
        }
        ps->size--;
        printf("ɾ���ɹ�\n");
    }
}
 
//����ָ�����˵���Ϣ
void SearchContact(const struct Contact *ps)
{
    char name[MAX_NAME];
    printf("������Ҫ�����˵�����:>");
    scanf("%s", name);
    int pos = 0;
    //������ϵ�˵�λ��
    pos = FindByName(ps, name);
    //2.ɾ��
    if (pos == -1)
    {
        printf("Ҫ���ҵ��˲�����,������\n");
    }
    else
    {
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
        printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
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
    int pos = 0;
    pos = FindByName(ps, name);
    if (pos == -1)
    {
        printf("Ҫ�޸���ϵ�˵���Ϣ�����ڣ�������\n");
    }
    else
    {
        printf("����������:>");
        scanf("%s", ps->data[pos].name);
        printf("����������:>");
        scanf("%d", &(ps->data[pos].age));
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
        //����
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
        //����
        for(i = 0; i < ps->size; i++)
        {
            printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
            ps->data[i].name,
            ps->data[i].age,
            ps->data[i].sex,
            ps->data[i].phone,
            ps->data[i].address);
        }
    }
}

//����ͨѶ¼�е�������Ϣ
void DestroyContact(Contact* ps)
{   
    printf("��ȷ��Ҫ���������ϵ����? y/n\n");
	char choice[2];
	scanf("%s", &choice);
	if (strcmp(choice, "y") == 0)
	{
        ps->size = 0;
		printf("�����������ϵ��!\n");
	}
	if (strcmp(choice, "n") == 0)
	{
		printf("ָ����ȡ��\n");
	}
    //ͬʱ�ͷ�֮ǰ�����ٵĶ�̬�ռ�
	free(ps->data);
	ps->data = NULL;
}

//����������ͨѶ¼����
void SortContact(struct Contact *ps)
{
    if (ps->size <= 0){
		printf("ͨѶ¼��û����ϵ�ˣ������!\n");
	}
	int i = 0;
	int j = 0;
	for (i = 0; i< ps->size - 1; i++)
	{
		for (j = 0; j< ps->size - i - 1; j++)
		{
			if (strcmp( ps->data[j].name, ( ps->data[j + 1]).name) > 0)
			{
                PeoInform tmp;
				tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
		printf("����ɹ���\n");
	}
}
 
//������ϵ�˵��ļ�
void SaveContact(Contact* ps)
{
	FILE* fp = fopen("contact.txt", "wb");
	if (fp == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//дͨѶ¼�����ݵ�Ϊ�ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInform), 1, fp);
        printf("�ѱ�����ϵ�ˣ�\n");
	}
}   

void menu()
{
	printf("*********************************\n");
	printf("**      1. �����ϵ��          **\n");
	printf("**      2. ɾ����ϵ��          **\n");
	printf("**      3. ������ϵ��          **\n");
	printf("**      4. �޸���ϵ��          **\n");
	printf("**      5. ��ʾ������ϵ��      **\n");
    printf("**      6. ������������ϵ��    **\n");
    printf("**      7. ���������ϵ��      **\n");
    printf("**      8. ������ϵ����Ϣ      **\n");
	printf("**      0. exit                **\n");
	printf("*********************************\n");
}
 
int main()
{
    int input = 0;
    //����ͨѶ¼
    struct Contact con;//con����ͨѶ¼�����������1000��Ԫ�ص�����size
    //��ʼ��ͨѶ¼
    InitContact(&con);
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch(input)
        {
        case ADD:
            AddContact(&con);
            break;
        case DEL:
            DelContact(&con);
            break;
        case SEARCH:
            SearchContact(&con);
            break;
        case MODIFY:
            MoidfyContact(&con);
            break;
        case SHOW:
            ShowContact(&con);
            break;
        case SORT:
            SortContact(&con);
            break;
        case DESTROY:
            DestroyContact(&con);
            break;
        case SAVE:
            SaveContact(&con);
            break;
        case EXIT:
            SaveContact(&con);
            printf("�˳�ͨѶ¼\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input);
    return 0;
}