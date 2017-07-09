#include <iostream>
#include <string>
using namespace std;
int main() {
	int caseNum;
	cin >> caseNum;		//case ���� �Է�
	
	int fib[41][2];		//�Ǻ���ġ ����Ƚ�� �迭
	fib[0][0] = 1;
	fib[0][1] = 0;
	fib[1][0] = 0;
	fib[1][1] = 1;

	for (int i = 2; i < 41; i++) {		//�迭 ���
		fib[i][0] = fib[i - 1][0] + fib[i - 2][0];
		fib[i][1] = fib[i - 1][1] + fib[i - 2][1];
	}

	int* input = new int[caseNum];		//test case �Է�
	for (int i = 0; i < caseNum; i++)
		cin >> input[i];

	for (int i = 0; i < caseNum; i++)	//���
		cout << fib[input[i]][0] << " " << fib[input[i]][1] << endl;

	return 0;
}