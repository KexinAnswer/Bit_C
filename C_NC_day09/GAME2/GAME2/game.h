#ifndef __TEST_H__
#define __TEST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROW 11
#define COL 11 
#define DOOM 5

void Init(char board[ROW][COL], int row, int col, char input);
void Dis_board(char board[ROW][COL], int row, int col);
void Put_Thunder(char board[ROW][COL], int row,int col, char input);
int Sweep_Thunder(char rel[ROW][COL],char show[ROW][COL],int row ,int col,int count);


#endif __TEST_H__