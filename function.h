#pragma once
#include <stdio.h>
#include <windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#define UP_SET 0
#define DOWN_SET 1
#define ENTER_SET 2
#define ENTER 13
#define MapMaxX 40   // X 가로STAR 떨어지는 값
#define MapMaxY 49   // Y 세로 STAR 떨어지는 값 X*2*Y)
#define Final 10000 // 게임의 끝 

void game();
void stone();
void FramePrinter();
void AddStar();
void removeCursor(); //커서 지우는 함수
int map[MapMaxY][MapMaxX];
enum { empty, wall, star };
void GameOver();
void GameClear();
void GotoXY(int, int);
