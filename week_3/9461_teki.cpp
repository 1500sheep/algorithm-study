#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int T;
	cin >> T;
	//���� ũ�⸦ �����ؼ� � �������� ���� �����սô�
	long long tri[101];
	tri[1] = 1;
	tri[2] = 1;
	tri[3] = 1;
	//dp
	for (int i = 4; i <= 100; i++) {
		tri[i] = tri[i - 3] + tri[i - 2];
	}
	int N;
	//print
	//���� ��� �ߺ��� endl���� ������ �ߺ���
	while (T--) {
		cin >> N;
		cout << tri[N] <<endl;
	}
	return 0;
}