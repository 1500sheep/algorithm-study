#include <iostream>
using namespace std;

int main()
{

	int da[8];
	int check = 0;
	int check1 = 0;
	for (int i = 0; i < 8; i++) {
		cin >> da[i];
	}
	
	for (int i = 0; i < 8; i++) {
		if (da[i] != i + 1) {
			check = 1;
		}
		if (da[i] != 8 - i) {
			check1 = 1;
		}
		/*
		if (da[i] == i + 1)check = 0;
		else if (da[i] == 8 - i)check = 1;
		else check = 2; break;
		���⼭ 0�϶� ascending / 1�϶� descending /2�� �� mixed �ϴ� �ڵ�� 
		®���µ� ��� Ʋ�ȴٰ� �����µ� ���� �˸� ���� ���ֽÿ�!
		*/
	}
	if(check==0)
			cout << "ascending"; 
	else if(check1==0)
			cout << "descending";
	else
			cout << "mixed"; 
		
	
	return 0;
}