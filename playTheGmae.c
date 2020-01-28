#include "function.h"

void game() {
	int x = 38, y = 47;         //아래 "▲" 넣는 커서 위치	Y=	별이 떨어지는 전체 위치 좌표
	int score = 0;
	int is_collison = 0;
	FramePrinter_forEmpty();
	while (1) {
		is_collison = StarMove(x);
		FramePrinter();
		AddStar();

		if (GetAsyncKeyState(VK_LEFT) & 0x8000) { // 키보드 왼쪽 눌렀을 때 이동
			if (x > 1) {// 벽 넘어가지 않게
				x--;
			}
		}

		if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { // 키보드 오른쪽 눌렀을 때 이동
			if (x < 77) { // 벽 넘어가지 않게
				x++;
			}
		}

		GotoXY(x, y);
		printf("▲");
		
		Sleep(33);
		
		
		GotoXY(0, 49);
		printf("SCORE : %d", score);
		score += 1;
		
		GotoXY(69, 49);
		if (score == Final)
			break;
		
		printf("USER: ");

		if (is_collison == 1)
			break;
	}
	if (is_collison == 1) {

		GameOver();
	}

	else
		GameClear();
}
