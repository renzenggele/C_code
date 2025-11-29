#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}



/*		printf(" %c | %c | %c \n", board[i][0], board[i][1],board[i][2]);
		if (i < row-1)
		{
			printf("---|---|--- \n");
		}
	*/



void Displayboard(char board[ROW][COL], int row, int col)
{

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//打印竖杠
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j< col-1)
			printf("|"); 
		}
		printf("\n");

		//打印下划线和竖杠
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}

			}
			printf("\n");

		}

	}

}




void PlayerDo(char board[ROW][COL], int row, int col)
{
	
	printf("palyer chess\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("please entry the coordinate>>");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';

				break;
			}
			else
			{
				printf("coordinate was occupied,please try again");
				
			}
		}
		else
		{
			printf("illegal coordinate\n");
		}
	}


}





void ComputerDo(char board[ROW][COL], int row, int col)
{

	printf("Computer move:\n");
	int x = 0;
	int y = 0;



	while (1)

	{

		x = rand() % row; //0~2
		y = rand() % col; //0~2

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}

}


int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	
	}
	return 1;
}




char Judge(char board[ROW][COL], int row, int col)
{

	int i = 0;
	int j = 0;

	//验证行相等

	for (i = 0; i < row; i++)
	{
	
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1]!= ' ')
			{
				return board[i][1];

			}

	
	}
	//验证列相等
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j]!= ' ')
		{
			return board[1][j];
		}

	}

	//验证对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}


	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	//验证满了
	if (isfull(board, row, col))
	{
		return 'Q';
	}
	
	return 'C';
}




