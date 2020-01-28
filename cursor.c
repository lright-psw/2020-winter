#include "function.h"

void removeCursor(void) // 커서 깜빡임 없애주는 것. 시작할떄 커서 제거 
{
	CONSOLE_CURSOR_INFO cur;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur);
	cur.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cur);
}

void GotoXY(int x, int y) 
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);// 콘솔 핸들 가져오기 위치값 계산용
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}
