#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9 //��Ϸ��9��
#define COL 9 //��Ϸ��9��

#define ROWS ROW+2 //������Ϊ9+2=11��
#define COLS COL+2 //������Ϊ9+2=11��

#define EASY_COUNT 10 //�����׵ĸ���

//ͳ����
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
    return mine[x-1][y] +
    mine[x-1][y-1] +
    mine[x][y-1] +
    mine[x+1][y-1] +
    mine[x+1][y] +
    mine[x+1][y+1] +
    mine[x][y+1]+
    mine[x-1][y+1] - 8*'0';
}

void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int win = 0;
    //9*9-10 = 71
    while(win < row*col - EASY_COUNT)
    {
        printf("�������Ų������:>");
        scanf("%d%d", &x, &y);
        if(x >= 1 && x <= row && y >=1 && y <= col)
        {
            //����Ϸ�
            if(mine[x][y] == '1') //1.����
            {
                printf("���ź����㱻ը����\n");
                DisplayBoard(mine, row, col);
                break;
            }
            else //������
            {
                //����x��y������Χ�м�����
                int count = get_mine_count(mine, x, y);
                show[x][y] = count + '0';
                DisplayBoard(show, row, col);
                win++;
            }
        }
        else
        {
            printf("��������Ƿ�������������!\n");
        }
    }
    if(win == row*col - EASY_COUNT)
    {
        printf("��ϲ�㣬���׳ɹ�\n");
        DisplayBoard(mine, row, col);
    }
}

void SetMine(char board[ROWS][COLS], int row, int col)//����
{
    int count = EASY_COUNT;//����
    while(count)
    {
        int x = rand() % row+1; //1-9
        int y = rand() % col+1; //1-9
        if(board[x][y] == '0')
        {
            board[x][y] == '1';
            count--;
        }
    }
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    //��ӡ�к�
    for(i = 0; i <= col; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for(i = 1; i <= row; i++)
    {
        printf("%d ", i);
        for(j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("��������������������\n");
}

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            board[i][j] = set;//��ʼ��Ϊset
        }
    }
}

void game()
{
    //�׵���Ϣ�洢
    //1.���úõ��׵���Ϣ
    char mine[ROWS][COLS] = {0};//11*11
    //2���Ų�����׵���Ϣ
    char show[ROWS][COLS] = {0};
    //��ʼ��
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    //��ӡ����
    //DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);//���鴫��11*11��������9*9
    //������
    SetMine(mine, ROW, COL);
    //DisplayBoard(show, ROW, COL);
    //ɨ��
    FineMine(mine, show, ROW, COL);//ɨ��ʱ����Ҫ��������Ҫ��ʾ
}

void menu()
{
    printf("*********************************\n");
    printf("*********     1.play     ********\n");
    printf("*********     2.exit     ********\n");
    printf("*********************************\n");
}

void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));//�������������

    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ���������ѡ��\n");
            break;
        }
    } while (input);
}

int main()
{   
    test();
    return 0;
}