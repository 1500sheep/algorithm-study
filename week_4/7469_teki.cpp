#include <iostream>
#include <algorithm>
using namespace std;
struct _a {
	int num;
	int index;
};

bool com(_a A, _a B) {
	return A.num < B.num;
}

_a a[100000];
int temp[100000];
int main() {
	int size;
	int caseNum;
	cin >> size >> caseNum;
	//num,index ����
	for (int i = 0; i < size; i++) {
		cin>>a[i].num;
		a[i].index = i + 1;
	}
	//struct��  num�� �������� ����
	sort(a, a + size, com);
	int i, j, k;
	int cnt;
	while (caseNum--) {
		cnt = 0;
		cin >> i >> j >> k;
		//a[l]�� index�� i<= index <=j �̸� cnt++
		//cnt==k�̸� ���
		for (int l = 0; l < size; l++) {
			if (a[l].index >= i &&a[l].index <= j) {
				cnt++;
				if (cnt == k) {
					cout << a[l].num<<endl;
					break;
				}
			}
		}
	}
	return 0;
}