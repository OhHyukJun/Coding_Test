#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	/*
		�ִ� ���̰� 30�� �ҹ��ڷ� �̷���� �ܾ�S�� �Է¹ް� 
		�� ���ĺ��� ��ġ�� ��� �ش���� ������ -1 ��� �ʱ� ��ġ�� 0
		�ҹ��ڷθ� �̷���� �ܾ� S
		S�� ���̴� 30�� ���� �ʰ� ���� S.length<=30
		������ ��� �� ���ΰ�
		S�� 0���� �ʱ�ȭ -> �迭�� ����?
		
	*/
	char S[30] = { 0 };//�迭�� 0���� �ʱ�ȭ
	scanf("%s",S);
	for (int i = 97; i <= 122; i++) {
		//�ƽ�Ű �ڵ� 97~122�� �ҹ��� ���ĺ�
		int j = 0;
		while (S[j] != 0) {
			if (S[j] == (char)i)break;
			j++;
		}
		if (S[j] == (char)i) 
			printf("%d ", j);
		else 
			printf("-1 ");
	}
}	