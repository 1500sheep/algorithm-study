#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main() {
	string input;									//�Է¹��� string
	getline(cin, input);							//space bar�� �����ؼ� string�Է¹��� >> cin�� space bar�� �Է��� ������ �Ǵ�
	istringstream iss(input);						//stringstream
	string token;									//���ع��ڸ� �������� string�� ���� ������ string
	vector<string> cnt;								//���� string�� ������ vector

	while (getline(iss, token, ' '))				//input�� ������, ������ ���������� token�� �����ϸ� �ݺ�
		cnt.push_back(token);

	if (input[0] == ' ')							//inpue�� ù���ڰ� �����̸� size-1
		cout << cnt.size() - 1;
	else
		cout << cnt.size();

	return 0;
}