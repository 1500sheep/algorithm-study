#include <iostream>
using std::cin;
using std::cout;
int main() {
	int n;
	cin >> n;

	//arr[i][j] >> i�ڸ���, 1���ڸ��� j
	int arr[101][11] = {0};

	for (int i = 1; i < 10; i++)
		arr[1][i] = 1;
	//dp
	for (int i = 2; i < n+1; i++) {
		for (int j = 0; j < 10; j++) {
			//1~8�϶�
			if (j > 0 && j < 9) {
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
			}
			//0�϶�
			else if (j == 0) {
				arr[i][j] = arr[i - 1][j + 1];
			}
			//9�϶�
			else
				arr[i][j] = arr[i - 1][j - 1];
		}
	}
	
	long long sol = 0;
	for (int i = 0; i < 10; i++) {
		sol += arr[n][i];
		sol %= 1000000000;
	}
	cout << sol;
	return 0;
}