#ifndef __GAME_H__
#define __GAME_H__

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ROW 3
#define COL 3


void Init(char board[ROW][COL], int row, int col);
void Dis_board(char board[ROW][COL], int row, int col);
void Player_Move(char board[ROW][COL],int row,int col , char input);
void Computer_Move(char board[ROW][COL], int row, int col,char input);
int Is_Win(char board[ROW][COL], int row, int col,char input);




#endif __GAME_H__