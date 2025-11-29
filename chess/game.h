
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL], int row, int col);

void Displayboard(char board[ROW][COL], int row, int col);

void PlayerDo(char board[ROW][COL], int row, int col);

void ComputerDo(char board[ROW][COL], int row, int col);

//≈–∂œ ‰”Æ

char Judge(char board[ROW][COL], int row, int col);