#include <iostream>

using namespace std;
int num1 = 0;
int num0 = 0;
int fibonacci(int n) {
	if (n == 0) {
		num0++;
		return 0;
	}
	else if (n == 1) {
		num1++;
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

}
int main()
{
	int num;
	cin >> num;
	while (num--) {
		int check;
		cin >> check;
		fibonacci(check);
		cout << num0 << " " << num1 << endl;
		num0 = 0;
		num1 = 0;
	}
	return 0;
}