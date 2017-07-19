#include <iostream>
using std::cin;
using std::cout;

int map[501][501];
int dp[501][501];

int d_x[] = { 1,0,0,-1 };
int d_y[] = { 0,1,-1,0 };

int n;
int m;

int sol(int x, int y) {
	//�������� ���� 1 ��ȯ
	if (x == n && y == m)
		return 1;
	//ó�� ����ϴ� ���̸� 0����
	if (dp[x][y] == -1)
		dp[x][y] = 0;
	//4���� ����
	for (int i = 0; i <= 3; i++) {
		int n_x = x + d_x[i];
		int n_y = y + d_y[i];
		//�迭 ���̸� �ѱ��
		if (n_x < 1 || n_x > n || n_y < 1 || n_y > m)
			continue;
		//�������̸�
		if (map[x][y] > map[n_x][n_y]) {
			//�����ϴ� ���� ó������ ���̸� ���
			if (dp[n_x][n_y] == -1) {
				dp[x][y] += sol(n_x, n_y);
			}
			//���ô� ���̸� ������
			else {
				dp[x][y] += dp[n_x][n_y];
			}
		}
	}
	return dp[x][y];
}



int main() {
	//�Է�
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> map[i][j];
			dp[i][j] = -1;
		}
	}
	cout << sol(1, 1);
	return 0;
}