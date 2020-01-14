#include "function.h"

int main() {// 메인 함수

	removeCursor(); //메인 시작부터 커서를 지워주는 함수를 실행한다.
	system("mode con cols=80 lines=50"); // 콘솔창 크기 조절
	while (1) {
		int menuCode = MenuDraw();  // 메뉴에서 선택된 값으로 게임시작 게임설명 게임종료 선택할 값을 받는다.0,,1,2
		if (menuCode == 0) {
			game();    //시작
		}
		else if (menuCode == 1) {
			system("cls");   //게임설명
			printf("\n\n\n\n\n\n       떨어지는 별을 피하는 게임입니다. \n          방향키 <- 와 -> 키를 눌러 \n         떨어지는 별을 피하세요 !!\n\n\n\n");  // 나중에 파일 입출력으로 바꿀 것 !!
			system("pause");
			system("cls");
		}
		else if (menuCode == 2) {
			system("cls"); //게임종료
			printf("\n\n\n\n\n\n\t      게임을 종료합니다.\n\n\t  이용해 주셔서 감사합니다.");
			Sleep(5000);
			return 0; // 종료
			break;
		}
	}
}
