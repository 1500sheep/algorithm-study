#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int num;
	cin >> num;		//case ���� �Է�
	

	int score[301] = {0};	//�������
	int dp[301][3] = {0};	//dp �迭
	for (int i = 1; i <= num; i++) {	//���� �Է�
		cin >> score[i];
	}


	dp[1][1] = score[1];	//�ʱ�ȭ
	dp[1][2] = score[1];

	for (int i = 2; i <= num; i++) {
		//dp[i][1] >> ���� ����� �������(1�� �����ؼ� ���� ������� ������)
		//dp[i][2] >> ���� ����� �ȹ������(2�� �����ؼ� ���� ������� ������)
		dp[i][1] = dp[i - 1][2] + score[i];
		dp[i][2] = max(dp[i - 2][1], dp[i - 2][2]) + score[i];
	}

	cout << max(dp[num][1], dp[num][2]);
	return 0;

}