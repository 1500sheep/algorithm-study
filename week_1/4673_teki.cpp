#include <iostream>
using namespace std;

int main() {
	//�ִ� 10000����~
	bool check[10001] = { false };
	int temp;
	int tmp_n;

	//üũ�ȰŴ� continue
	//üũ �ȵȰŴ� Ȯ��
	for (int n = 1; n < 10001; n++) {
		temp = n;
		tmp_n = n;
		if (check[n] == true) {
			continue;
		}

		while (1) {
			//n�� �����ѹ��� Ȯ��
			//10000�� ������ break
			//���������� üũ
			while (1) {
				temp += (tmp_n % 10);
				tmp_n /= 10;
				if (tmp_n == 0)
					break;
			}
			if (temp > 10000)
				break;
			check[temp] = true;
			tmp_n = temp;
		}
	}
	//���
	for (int i = 1; i <= 10000; i++) {
		if (check[i] == false)
			cout << i << endl;
	}


	return 0;
}