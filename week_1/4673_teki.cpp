#include <iostream>
using namespace std;

int main() {
	//�ִ� 10000����~
	bool check[10001] = { false };
	int num;
	int temp;

	//üũ�ȰŴ� continue
	//üũ �ȵȰŴ� Ȯ��
	for (int n = 1; n < 10001; n++) {
		num = n;
		temp = n;
		if (check[n] == true) {
			continue;
		}

		while (1) {
			//n�� �����ѹ��� Ȯ��
			//10000�� ������ break
			//���������� üũ
			while (1) {
				num += (temp % 10);
				temp /= 10;
				if (temp == 0)
					break;
			}
			if (num > 10000)
				break;
			check[num] = true;
			temp = num;
		}
	}
	//���
	for (int i = 1; i <= 10000; i++) {
		if (check[i] == false)
			cout << i << endl;
	}


	return 0;
}