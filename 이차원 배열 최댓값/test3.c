#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	/*
		25���� �ڿ��� or 0�� �־���
		�ִ� ã��
		������ �迭 ��� ���� �Է�
		max�Լ� ����ؼ� ����
	*/
	
	int array[5][5];
	
	int max = 0;
	int row = 0, col = 0;

	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; i < 5; j++) {
	//		scanf("%d", &array[i][j]);
	//	}
	//}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &array[i][j]);
			if (max <= array[i][j]) {
				max = array[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}
	printf("%d \n",max);
	printf("%d %d \n",row,col);

	return 0;
}