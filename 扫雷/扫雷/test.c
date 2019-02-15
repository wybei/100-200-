#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void test()
{
	printf("******************************\n");
	printf("******1.play*****0.exit*******\n");
	printf("******************************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		test();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择！\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}