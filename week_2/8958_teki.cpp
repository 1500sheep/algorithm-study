#include <iostream>
#include <string>
using namespace std;

int main() {
	int caseNum;												//test case ����
	cin >> caseNum;										
	string input;												//input string 			
	int cnt;													//���ӵ� O���� 
	int score;													//����
	while (caseNum--) {
		cin >> input;											
		
		cnt = 1;												//cnt,score �ʱ�ȭ
		score = 0;

		for (int i = 0; i < input.size(); i++) {				//input string�� ������ �ݺ�
			if (input[i] == 'O') {								//input[i]��  'O'�̸� score�� cnt��ŭ �߰��ϰ� cnt++
				score += cnt;					
				cnt++;
			}

			else {												//X�̸� cnt = 1
				cnt = 1;
			}

		}
		cout << score << endl;
	}

	return 0;
}