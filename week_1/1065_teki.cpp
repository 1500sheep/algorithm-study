#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	//�ڸ��� ������ �迭
	int arr[3];	
	//����
	int cnt = 99;
	int temp;
	//100���� ������ print num
	if (num < 100) {
		cout << num;
		return 0;
	}
	//100���� ũ��
	else {
		for (int i = 100; i <= num; i++) {
			//1000�� ������ �ƴ�
			if (i == 1000)
				break;
			//�ڸ��� �迭�� ����
			temp = i;
			arr[0] = temp % 10;
			temp /= 10;
			arr[1] = temp % 10;
			temp /= 10;
			arr[2] = temp % 10;
			temp /= 10;
			//������������ ��
			if ((arr[0] - arr[1]) == (arr[1] - arr[2]))
				cnt++;
		}
	}
	cout <<cnt;
	return 0;
}