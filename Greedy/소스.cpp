#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/*n���� ����ϴ� �ּ� ������ ��
int n;
int coin[4] = {500,100,50,10};
int ans;
int main() {
	cin >> n;
	for (int i = 0; i < 4; i++) {
		ans += (n / coin[i]);
		n = n % coin[i];
		i++;
	}cout << ans;
}
*/

/*
�پ��� ���� �̷���� �迭�� ���� ��, �־��� ������ M�� ���Ͽ�
���� ū ���� �������� ��,Ư�� �ε����� �ش��ϴ� ���� ��������
k�� �ʰ��ؼ� ������ �� ����
*/

/*
ü������ ��������
���� ü������ �ִ� �л��� ���������(�յ� ��ȣ�� ����� ������ �� ����
ü�� ��-��������
��ü �л��� ��:n
���� ���� �л� �迭:lost
������ �ִ� �л��� ��ȣ�� ��� �迭: reverse
ü�� ������ ���� �� �ִ� �л��� �ִ�
*/

int solution(int n, vector<int> lost, vector<int> reserve) {
	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] == reserve[j]) {
				lost.erase(lost.begin() + i);//���ۺ��� i�� ���� ���� �����Ѵ�
				reserve.erase(reserve.begin() + j);
				i = -1;
				break;
			}
		}
	}//�Է¹��� �Ҿ���� ��� �迭�� �����ִ� ��� �迭�� ���� ��� �̸� �����ϴ� ����
	
	int answer = n-lost.size();
	//������ �ʱⰪ ����

	sort(lost.begin(), lost.end());//���ۺ��� ������ �����Ѵ�
	sort(reserve.begin(), reserve.end());
	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] == reserve[j] - 1 || lost[i] == reserve[j] + 1) 
			{
				answer++;
				reserve.erase(reserve.begin() + j);
				break;
			}//�� �� ��ȣ�� ����� ��� �����ִ� ����
		}
	}
	return answer;
}

