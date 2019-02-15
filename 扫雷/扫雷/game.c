#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf(" %d", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d", i);
		for (j = 1; j <=col; j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = 10;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 7 * '0';
}
void blank(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (mine[x][y] == '0')
	{
		show[x][y] = GetMineCount(mine, x, y);
		if (show[x][y] == '0')
		{
			show[x][y] = ' ';
			if (show[x - 1][y - 1] == '*')
			{
				blank(mine, show, x - 1, y - 1);
			}
			if (show[x - 1][y] == '*')
			{
				blank(mine, show, x - 1, y);
			}
			if (show[x - 1][y + 1] == '*')
			{
				blank(mine, show, x - 1, y + 1);
			}
			if (show[x][y + 1] == '*')
			{
				blank(mine, show, x, y + 1);
			}
			if (show[x + 1][y + 1] == '*')
			{
				blank(mine, show, x + 1, y + 1);
			}
			if (show[x + 1][y] == '*')
			{
				blank(mine, show, x + 1, y);
			}
			if (show[x + 1][y - 1] == '*')
			{
				blank(mine, show, x + 1, y - 1);
			}
			if (show[x][y - 1] == '*')
			{
				blank(mine, show, x, y - 1);
			}
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL-10)
	{
		printf("请输入要排查的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x<row && y>=1 && y < col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了，游戏结束\n");
				break;
			}
			else 
			{
				/*int count = *//*GetMineCount(mine, x, y);*/
				show[x][y] = GetMineCount(mine, x, y);
				blank(mine, show, x, y);
				DisplayBoard(mine, ROW, COL);
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("坐标输入有误，请重新输入\n");
		}
	}
	if (win >= ROW*COL - 10)
	{
		printf("恭喜你！扫雷成功\n");
	}
}
