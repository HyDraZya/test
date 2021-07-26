#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//��������������Ϸ��״̬
//���Ӯ '*'
//����Ӯ '#'
//ƽ��  'Q'
//����  'C'


int IsFull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
    int i = 0;
    //������
    for(i = 0; i < row; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board [i][2] && board [i][1] != ' ')
        {
            return board[i][1];
        }
    }
    //������
    for(i = 0; i < col; i++)
    {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    //�����Խ���
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board [1][1] != ' ')
        return board[1][1];
    if(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board [1][1] != ' ')
        return board[1][1];
    
    //�ж��Ƿ�ƽ��
    if(1 == IsFull(board, ROW, COL))
    {
        return 'Q';
    }
    //����
    return 'C';
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("������:>\n");
    while(1)
    {
        x = rand() % row;
        //ģ����1��2
        y = rand() % col;
        //ͬ������
        if(board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("�������:>\n");
    while(1)
    {
        printf("������Ҫ�µ�����:>");
        scanf("%d%d", &x, &y);
        //�ж�x��y����ĺϷ���
        if(x >= 1 && x <= row && y >=1 && y <= col)
        {
            if(board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("�������ѱ�ռ��\n");
            }
        }
        else
        {
            printf("����Ƿ�������������!\n");
        }
    }
    
}

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL], int row,int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for(j = 0; j < col; j++)
        {
            //1. ��ӡһ�е�����
            printf(" %c ", board[i][j]);
            if(j < col - 1)
                printf("|");
        }
        printf("\n");
        
        //2. ��ӡ�ָ���
        if(i < row - 1)
        {
            for(j = 0; j < col; j++)
            {
                printf("---");

                if(j < col-1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void menu()
{
    printf("******************************\n");
    printf("****   1.play   0.exit    ****\n");
    printf("******************************\n");
}

//��Ϸ�������㷨ʵ��
void game()
{
    char ret = 0;
    //����-����߳���������Ϣ
    char board[ROW][COL] = {0};//ȫ���ո�
    //��ʼ������
    InitBoard(board, ROW, COL);
    //��ӡ����
    DisplayBoard(board, ROW, COL);
    //����
    while(1)
    {
        //���������
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
         //�ж�����Ƿ�Ӯ
        ret = IsWin(board, ROW, COL);
        if(ret != 'C')
        {
            break;
        }
        //��������
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //�жϵ����Ƿ�Ӯ
        ret = IsWin(board, ROW, COL);
        if(ret != 'C')
        {
            break;
        }
    }
    if(ret == '*')
    {
        printf("���Ӯ\n");
    }
    else if (ret == '#')
    {
        printf("����Ӯ\n");
    }
    else
    {
        printf("ƽ��\n");
    }    
}

void test()
{   
    int input = 0;
    srand((unsigned int)time(NULL));
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
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("ѡ�����������ѡ��\n");
                break;
        }
    } while(input);
}

int main()
{
    test();
    return 0;
}