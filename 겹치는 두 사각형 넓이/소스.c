#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	/*
		좌표값을 입력받고 두 개의 사각형을 만들어 겹치는 영역의 넓이 구하기
		겹치지 않으면 -1 출력
		1. 전체 면적을 이차원 배열로 지정
		2. 좌표값을 영역 안에 위치시키고 입력받기
		3. 입력받은 두 사각형이 겹치는 경우를 생각하고 코드 작성
		a. x1,y1,x2,y2 -> 왼쪽 오른쪽 위 아래 값 구하기 
		좋은 코드라는 생각이 들지는 않음
		시간 복잡도에서 떨어지는 면이 있지않을까 생각이 듬
	*/
	
	
	
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	0<=x1,y1,x2,y2,x3, y3, x4, y4<=256;
	printf("");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("");
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

	int a, b;
	if ((x1 <= x3 && x3 <= x2 <= x4) || (x2 <= x3 && x3 <= x1 <= x4)) {
		if (x1 <= x2)
			a = x2 - x3;
		else
			a = x1 - x3;
	}
	else if ((x1 <= x4 && x4 <= x2 <= x3) || (x2 <= x4 && x4 <= x1 <= x3)) {
		if (x1 <= x2) a = x2 - x4;
		else a = x1 - x4;
	}
	else {
		a = -1;
		switch (a) {
		case -1:
			printf("%d", -1);
			break;
		}
	}
	if (a != -1) {
		if ((y1 <= y3 && y3 <= y2 <= y4) || (y2 <= y3 && y3 <= y1 <= y4)) {
			if (y1 <= y2)
				b = y2 - y3;
			else
				b = y1 - y3;
		}
		else if ((y1 <= y4 && y4 <= y2 <= y3) || (y2 <= y4 && y4 <= y1 <= y3)) {
			if (y1 <= y2)
				b = y2 - y4;
			else
				b = y1 - y4;
		}//넓이 구하기 완료
		else {
			b = -1;
			switch (b) {
			case -1:
				printf("%d", -1);
				break;
			}
		}
	}
	if (a != -1 && b != -1) {
		printf("%d", a * b);
}
	
	
	
}//예외 처리만 해주면 끝