#include <iostream>
using namespace std;
int main() {
	int* arr = new int[1000001];
	//�ʱ�ȭ
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	int a;
	int b;
	//dp
	for (int i = 4; i < 1000001; i++) {
		//���� 3��
		// 1. 3���� ����������� 3���� ������
		if (i % 3 == 0) {
			a = arr[i / 3] + 1;
			b = arr[i - 1] + 1;
			if (a > b)
				arr[i] = b;
			else
				arr[i] = a;
		}
		// 2. 2�� ����������� 2�� ������
		else if (i % 2 == 0) {
			a = arr[i / 2] + 1;
			b = arr[i - 1] + 1;
			if (a > b)
				arr[i] = b;
			else
				arr[i] = a;
		}
		// 3. 1�� ���� >> 2,3���ε� �ȳ���������� 1�� ����
		else {
			arr[i] = arr[i - 1] + 1;
		}
	}
	int input;
	cin >> input;
	cout << arr[input] << endl;

	return 0;
}