#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0;
    int n = name.length();
    int direction = n - 1;
    for (int i = 0; i < n; i++) {
        if (name[i] - 'A' < 14)//�ƽ�Ű �ڵ� A=65 Z=90 �ִܰŸ��� ����ؼ� �ۼ�
            answer += name[i] - 'A';
        else answer += 'Z' - name[i] + 1;

        int a = i + 1;
        while (a < n && name[a] == 'A')a++;

        direction = min(direction, i + n - a + min(i, n - a)); //�� ���ذ� �ȵ� �� �����ؾ� �� ��
    }
    answer += direction;
    return answer;
}