#include <iostream>
#include <string>
using namespace std;


int main() {
	int arr[5];
	int sum = 0;

	/*
	�� �л��� ������ �Է¹ް�
	�ش������� 40���� ������ 40���� �����Ѵ�
	�׸��� ������ sum�� ���Ѵ�
	*/
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] < 40)
			arr[i] = 40;

		sum += arr[i];
	}

	cout << sum / 5;
	return 0;
}