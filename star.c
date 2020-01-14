#include "function.h"

void StarEraser(int x, int y) {
	map[y][x] = empty;
	GotoXY(x * 2, y);
	printf("  ");
}	

int StarMove(int user_x) {
	int x, y;
	for (y = MapMaxY; y >= 0; y--) {
		for (x = MapMaxX; x >= 0; x--) {
			if (map[y][x] == star) {
				if (user_x / 2 == x && y == 47) {
					return 1;

				}if (map[y + 1][x] == wall) {
					StarEraser(x, y);
				}
				else if (map[y + 1][x] == empty) {
					StarEraser(x, y);
					map[y + 1][x] = star;
					GotoXY(x * 2, y + 1);
					printf("★");
				}
			}    
		}		
	}
	return 0;
}

void AddStar() {
	int x;			
	int y = 0;
	x = rand((unsigned int)time(NULL)) % (MapMaxX);
	map[y][x] = star;
	GotoXY(x * 2, y);
	printf("★");
}
