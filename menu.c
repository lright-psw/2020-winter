#include "function.h"

int MenuDraw() {
	int x = 24;
	int y = 12;
	GotoXY(2, 2);
	printf("★★ 별피하기 게임 입니다.\n");
	GotoXY(x - 2, y);
	printf("▶  게임 시작");
	GotoXY(x, y + 1);
	printf("  게임 정보");
	GotoXY(x, y + 2);
	printf("   종료 ");
	while (1) {
		int n = KeyControl();
		switch (n) {
		case UP_SET:
			if (y > 12) {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, --y);
				printf("▶");
			}
		
		break;
		case DOWN_SET:
			if (y < 14) {
				GotoXY(x - 2, y);
				printf(" ");
				GotoXY(x - 2, ++y);
				printf("▶");
			}
			break;
		case ENTER_SET:
			return y - 12;
	}
}		}

	int KeyControl() {
	char temp = getch();
	if (temp == 'H') { //72
		return UP_SET;
	}
	else if (temp == 'P') { //80
		return DOWN_SET;
	}
	else if (temp == ENTER) {	//엔터(공백)가 선택 버튼
		system("cls");
		return ENTER_SET;
		
	}
}
