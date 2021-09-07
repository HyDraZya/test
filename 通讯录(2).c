#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
 
//初始空间为5个
#define ORG_SPACE 5

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 12
#define MAX_ADDRESS 30

//枚举：选择功能
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
 
//结构体：通讯录中每个成员的信息
typedef struct PeoInform//将结构体指针类型命名为PeoInform
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char phone[MAX_PHONE];
    char address[MAX_ADDRESS];
}PeoInform;
 
//结构体：通讯录类型
typedef struct Contact
{
    struct PeoInform *data;//存放信息
    int size;//记录当前结构体内已经有的元素个数
    int capacity;//当前通讯录的最大容量
}Contact;

//通讯录扩充
void ExpandCapacity(struct Contact *ps)
{
    if(ps->size == ps->capacity)
    {
        struct PeoInform *ptr = realloc(ps->data, (ps->capacity+2)*sizeof(PeoInform));
		if(ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 5; //自动开辟五个动态空间
			printf("扩充成功\n");
		}
		else
		{
			printf("扩充失败\n");
		}
	}
}

//读取通讯录信息
void LoadContact(Contact *ps)
{
	PeoInform tmp = {0};//临时变量tmp
	FILE *FR = fopen("contact.txt", "rb");
	if(FR == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	
	//读取文件，存放到通讯录中
	while(fread(&tmp, sizeof(PeoInform), 1, FR))
	{
		ExpandCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(FR);
	FR = NULL;
}

//初始化通讯录的函数
void InitContact(struct Contact *ps)
{
	ps->data = (struct PeoInform*)malloc(ORG_SPACE*sizeof(struct PeoInform));
	if(ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = ORG_SPACE;
	//把文件中已经存放的通讯录中的信息加载到通讯录中
	LoadContact(ps);
}

//按姓名查找联系人是否存在
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
    return -1;//找不到的情况
}

//增加一个信息到通讯录
void AddContact(struct Contact *ps)
{
    ExpandCapacity(ps);
    //增加数据
    printf("请输入名字:>");
    scanf("%s", ps->data[ps->size].name);
    printf("请输入年龄:>");
    scanf("%d", &(ps->data[ps->size].age));
    printf("请输入性别:>");
    scanf("%s", ps->data[ps->size].sex);
    printf("请输入电话:>");
    scanf("%s", ps->data[ps->size].phone);
    printf("请输入家庭地址:>");
    scanf("%s", ps->data[ps->size].address);
 
    ps->size++;
    printf("添加成功\n");
}
 
//删除指定的联系人
void DelContact(struct Contact *ps)
{
    int pos = 0;
    char name[MAX_NAME];
    printf("请输入要删除人的名字:>");
    scanf("%s", name);
    //1.查找要删除的人在什么位置
    //找到了返回名字所在元素的下标
    //找不到返回 -1
    pos = FindByName(ps, name);
    //2.删除
    //查询不到联系人
    if (pos == -1)
    {
        printf("查询不到要删除的联系人，请重试\n");
    }
    else
    {
        //删除数据
        int j = 0;
        for(j = pos; j < ps->size-1; j++)
        {
            ps->data[j] = ps->data[j + 1];
            //由于删除了这个数据，所以后面的数据会顶替上来
        }
        ps->size--;
        printf("删除成功\n");
    }
}
 
//查找指定的人的信息
void SearchContact(const struct Contact *ps)
{
    char name[MAX_NAME];
    printf("请输入要查找人的名字:>");
    scanf("%s", name);
    int pos = 0;
    //查找联系人的位置
    pos = FindByName(ps, name);
    //2.删除
    if (pos == -1)
    {
        printf("要查找的人不存在,请重试\n");
    }
    else
    {
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
        printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
            ps->data[pos].name,
            ps->data[pos].age,
            ps->data[pos].sex,
            ps->data[pos].phone,
            ps->data[pos].address);
    }
}
 
//修改指定联系人的信息
void MoidfyContact(struct Contact *ps)
{
    char name[MAX_NAME];
    printf("请输入要修改联系人的名字:>");
    scanf("%s", name);
    int pos = 0;
    pos = FindByName(ps, name);
    if (pos == -1)
    {
        printf("要修改联系人的信息不存在，请重试\n");
    }
    else
    {
        printf("请输入名字:>");
        scanf("%s", ps->data[pos].name);
        printf("请输入年龄:>");
        scanf("%d", &(ps->data[pos].age));
        printf("请输入性别:>");
        scanf("%s", ps->data[pos].sex);
        printf("请输入电话:>");
        scanf("%s", ps->data[pos].phone);
        printf("请输入家庭地址:>");
        scanf("%s", ps->data[pos].address);
 
        printf("修改完成\n");
    }
}
 
 
//展示通讯录中的信息
void ShowContact(const struct Contact *ps)
{
    if(ps->size == 0)
    {
        printf("通讯录为空\n");
    }
    else
    {
        int i = 0;
        //标题
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
        //数据
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

//销毁通讯录中的所有信息
void DestroyContact(Contact* ps)
{   
    printf("您确定要清空所有联系人吗? y/n\n");
	char choice[2];
	scanf("%s", &choice);
	if (strcmp(choice, "y") == 0)
	{
        ps->size = 0;
		printf("已清空所有联系人!\n");
	}
	if (strcmp(choice, "n") == 0)
	{
		printf("指令已取消\n");
	}
    //同时释放之前所开辟的动态空间
	free(ps->data);
	ps->data = NULL;
}

//按姓名排序通讯录内容
void SortContact(struct Contact *ps)
{
    if (ps->size <= 0){
		printf("通讯录中没有联系人，请添加!\n");
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
		printf("排序成功！\n");
	}
}
 
//保存联系人到文件
void SaveContact(Contact* ps)
{
	FILE* fp = fopen("contact.txt", "wb");
	if (fp == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//写通讯录中数据到为文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInform), 1, fp);
        printf("已保存联系人！\n");
	}
}   

void menu()
{
	printf("*********************************\n");
	printf("**      1. 添加联系人          **\n");
	printf("**      2. 删除联系人          **\n");
	printf("**      3. 查找联系人          **\n");
	printf("**      4. 修改联系人          **\n");
	printf("**      5. 显示所有联系人      **\n");
    printf("**      6. 按姓名排序联系人    **\n");
    printf("**      7. 清空所有联系人      **\n");
    printf("**      8. 保存联系人信息      **\n");
	printf("**      0. exit                **\n");
	printf("*********************************\n");
}
 
int main()
{
    int input = 0;
    //创建通讯录
    struct Contact con;//con就是通讯录，里面包含：1000个元素的数和size
    //初始化通讯录
    InitContact(&con);
    do
    {
        menu();
        printf("请选择:>");
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
            printf("退出通讯录\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
    return 0;
}