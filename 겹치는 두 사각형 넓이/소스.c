#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
	/*
		��ǥ���� �Է¹ް� �� ���� �簢���� ����� ��ġ�� ������ ���� ���ϱ�
		��ġ�� ������ -1 ���
		2. �Է¹��� �� �簢���� ��ġ�� ��츦 �����ϰ� �ڵ� �ۼ�
		a. x1,y1,x2,y2 -> ���� ������ �� �Ʒ� �� ���ϱ�


		���� 0�� ��µǴ� ��츦 �����ؼ� ����
		�ڽ� ���� �ڽ��� �ִ� ���
	*/



	int x1, y1, x2, y2;
	int x3, y3, x4, y4;

	printf("");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("");
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
	0 <= x1, y1, x2, y2, x3, y3, x4, y4 <= 256;

	int a, b;

	if ((x1 <= x3 && x3 <= x2 && x2 <= x4) || (x2 <= x3 && x3 <= x1 && x1 <= x4)) {
		if (x1 <= x2)
			a = x2 - x3;
		else
			a = x1 - x3;
	}
	else if ((x1 <= x4 && x4 <= x2 && x2 <= x3) || (x2 <= x4 && x4 <= x1 && x1 <= x3)) {
		if (x1 <= x2)
			a = x2 - x4;
		else
			a = x1 - x4;
	}
	else if ((x3 <= x1 && x1 <= x4 && x4 <= x2) || (x4 <= x1 && x1 <= x3 && x3 <= x2)) {
		if (x3 <= x4)
			a = x4 - x1;
		else
			a = x3 - x1;
	}
	else if ((x3 <= x2 && x2 <= x4 && x4 <= x1) || (x4 <= x2 && x2 <= x3 && x3 <= x1)) {
		if (x3 <= x4)
			a = x4 - x2;
		else
			a = x3 - x2;
	}
	else if ((x1 <= x3 && x3 <= x4 && x4 <= x2) || (x1 <= x4 && x4 <= x3 && x3 <= x2)) {
		if (x3 <= x4)
			a = x4 - x3;
		else
			a = x3 - x4;
	}
	else if ((x2 <= x3 && x3 <= x4 && x4 <= x1) || (x2 <= x4 && x4 <= x3 && x3 <= x1)) {
		if (x3 <= x4)
			a = x4 - x3;
		else
			a = x3 - x4;
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
		if ((y1 <= y3 && y3 <= y2 && y2 <= y4) || (y2 <= y3 && y3 <= y1 && y1 <= y4)) {
			if (y1 <= y2)
				b = y2 - y3;
			else
				b = y1 - y3;
		}
		else if ((y1 <= y4 && y4 <= y2 && y2 <= y3) || (y2 <= y4 && y4 <= y1 && y1 <= y3)) {
			if (y1 <= y2)
				b = y2 - y4;
			else
				b = y1 - y4;
		}
		else if ((y3 <= y1 && y1 <= y4 && y4 <= y2) || (y4 <= y1 && y1 <= y3 && y3 <= y2)) {
			if (y3 <= y4)
				b = y4 - y1;
			else
				b = y3 - y1;
		}
		else if ((y3 <= y2 && y2 <= y4 && y4 <= y1) || (y4 <= y2 && y2 <= y3 && y3 <= y1)) {
			if (y3 <= y4)
				b = y4 - y2;
			else
				b = y3 - y2;
		}
		else if ((y1 <= y3 && y3 <= y4 && y4 <= y2) || (y1 <= y4 && y4 <= y3 && y3 <= y2)) {
			if (y3 <= y4)
				b = y4 - y3;
			else
				b = y3 - y4;
		}
		else if ((y2 <= y3 && y3 <= y4 && y4 <= y1) || (y2 <= y4 && y4 <= y3 && y3 <= y1)) {
			if (y3 <= y4)
				b = y4 - y3;
			else
				b = y3 - y4;
		}
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
		if (a * b == 0) {
			printf("%d", -1);
		}
		else printf("%d", (a * b));
	}



}