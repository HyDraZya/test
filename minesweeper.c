#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9 //游戏内9行
#define COL 9 //游戏内9列

#define ROWS ROW+2 //总行数为9+2=11行
#define COLS COL+2 //总列数为9+2=11列

#define EASY_COUNT 10 //定义雷的个数

//统计雷
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
        printf("请输入排查的坐标:>");
        scanf("%d%d", &x, &y);
        if(x >= 1 && x <= row && y >=1 && y <= col)
        {
            //坐标合法
            if(mine[x][y] == '1') //1.踩雷
            {
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, row, col);
                break;
            }
            else //不是雷
            {
                //计算x，y坐标周围有几个雷
                int count = get_mine_count(mine, x, y);
                show[x][y] = count + '0';
                DisplayBoard(show, row, col);
                win++;
            }
        }
        else
        {
            printf("输入坐标非法，请重新输入!\n");
        }
    }
    if(win == row*col - EASY_COUNT)
    {
        printf("恭喜你，排雷成功\n");
        DisplayBoard(mine, row, col);
    }
}

void SetMine(char board[ROWS][COLS], int row, int col)//埋雷
{
    int count = EASY_COUNT;//雷数
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
    //打印列号
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
    printf("——————————\n");
}

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            board[i][j] = set;//初始化为set
        }
    }
}

void game()
{
    //雷的信息存储
    //1.布置好的雷的信息
    char mine[ROWS][COLS] = {0};//11*11
    //2，排查出的雷的信息
    char show[ROWS][COLS] = {0};
    //初始化
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    //打印棋盘
    //DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);//数组传参11*11，操作传9*9
    //布置雷
    SetMine(mine, ROW, COL);
    //DisplayBoard(show, ROW, COL);
    //扫雷
    FineMine(mine, show, ROW, COL);//扫雷时既需要操作又需要显示
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
    srand((unsigned int)time(NULL));//生成随机数种子

    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，重新选择\n");
            break;
        }
    } while (input);
}

int main()
{   
    test();
    return 0;
}