#include "function.h"

void FramePrinter() {
	int x, y;
	for (x = 0; x < MapMaxX; x++) {
		for (y = 0; y < MapMaxY; y++) {
			if (x == 0 || x == MapMaxX - 1 || y == 0 || y == MapMaxY - 1)
				map[y][x] = wall;
		}
	}
	Sleep(3);
}

// Sleep(3) 슬립 함수를 이용해 같은 장소에 연속적으로 떨어뜨리는 것을 방지  1000(1초) 1000분의3만큼 쉬었다 뿌림.
//별을 최대 어디까지 떨어 뜨린지 계산 해주는 함수 MapMaxX , MapMaxY 맵의 최대 거리를 계산하여 별을 어디까지 뿌릴지 생각한다.  별 전체 위치 계산 어디에 떨어드릴건지 확인

void FramePrinter_forEmpty() {
	int x, y;
	for (x = 0; x < MapMaxX; x++) {
		for (y = 0; y < MapMaxY; y++) {
			if (x == 0 || x == MapMaxX - 1 || y == 0 || y == MapMaxY - 1)
				map[y][x] = wall;
			else
				map[y][x] = empty;
		}
	}
	Sleep(3);
}
