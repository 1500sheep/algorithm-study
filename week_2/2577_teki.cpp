#include <iostream>
#include <string>
using namespace std;

int main() {
	int A;
	int B;
	int C;

	cin >> A >> B >> C;								//�Է�

	int mul = A*B*C;
	int arr[10];

	fill_n(arr, 10, -1);							//�迭�ʱ�ȭ

	int i = 0;

	while (mul) {									//�ݺ����� ���鼭 1�� �ڸ����� �迭�� ����
		arr[i] = (mul % 10);
		mul /= 10;
		i++;
	}


	int cnt[10] = { 0 };							//ī��Ʈ �迭 �ʱ�ȭ

	for (int i = 0; arr[i] != -1 && i<10; i++) {	//arr�迭�� ������ �� �ڸ��� ���� ���� ī��Ʈ
		cnt[arr[i]]++;
	}

	for (int i = 0; i < 10; i++)					//���
		cout << cnt[i] << endl;


	return 0;
}