#include <iostream>
using namespace std;

typedef long long ln;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		ln x, y;
		cin >> x >> y;
		int n=1;
		ln distance = y - x;
		int count = 0;
		while(1){
			int prev = n*n - n+1;
			int next = n*n + n;
			//노가다를 통해 n제곱을 기점으로 n*2-1,n*2 exist!
			if (distance >= prev&&distance <= (n*n)) {
				count = n * 2 - 1;
				break;
			}
			else if (distance <= next &&distance > (n*n)) {
				count = n * 2;
				break;
			}
			n++;
		}
		cout << count << endl;
	}
	return 0;
}