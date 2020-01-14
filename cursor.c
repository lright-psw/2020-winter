#include "function.h"

void card(int x, int y) //  커서 0,0
{
	COORD Cur;   //화면의 위치등을 나타낼때 쓰입니다.
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	system("cls");
	// 이 부분에서 system("cls"); 전체적으로 깜박거리는이유 . 지워주는 함수 잔상
}


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
