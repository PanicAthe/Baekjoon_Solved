#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a, b, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		temp = !(b % 4) ? 4 : b % 4; ///���� ����. �׳� tmep = b % 4 ; �ϸ� ������ 4�ε� 0���� ���...�� ���� ������ + 0 ���ٴ� ŭ
		if (fmod(pow(a, temp), 10) == 0)
			cout << 10 << "\n";
		else
			cout << fmod(pow(a, temp), 10) << "\n";
	}
}