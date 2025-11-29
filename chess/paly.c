#define _CRT_SECURE_NO_WARNINGS

#include"game.h"



menu()
{

	printf("*********************************\n");
	printf("*********1:paly  0:exit**********\n");
	printf("*********************************\n");
}



void game()
{

	char board[ROW][COL] = { 0 };

	//³õÊ¼»¯ÆåÅÌµÄº¯Êý
	Initboard(board, ROW, COL);
	//ÏÔÊ¾ÆåÅÌ
	Displayboard(board, ROW, COL);

	char rec = 'C';

	while (1)
	{

		
		//Íæ¼ÒÏÂÆå
		PlayerDo(board, ROW, COL);
		Displayboard(board, ROW, COL);
		rec = Judge(board, ROW, COL);
		if (rec != 'C')
		{
			break;
		}

		//µçÄÔÏÂÆå
		//ÕÒ¿Õ°×µÄÎ»ÖÃËæ»úÏÂÆå
		ComputerDo(board, ROW, COL);
		Displayboard(board, ROW, COL);
		rec = Judge(board, ROW, COL);
		if (rec != 'C')
		{
			break;
		}

		//ÅÐ¶ÏÊäÓ®
		
		}
	if(rec == '*')
	{
		printf("play win\n");
	

	}
	else if (rec == '#')
	{
		printf("computer win\n");


	}
	else
	{
		printf("equail\n");
	}

	
	



}

int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("do you want paly>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("error input\n");
			break;
		}
		
	} while (input);

	return 0;
}