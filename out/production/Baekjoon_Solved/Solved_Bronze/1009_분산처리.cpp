#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a, b, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		temp = !(b % 4) ? 4 : b % 4; ///여기 주의. 그냥 tmep = b % 4 ; 하면 지수가 4인데 0으로 계산...ㅎ 지수 범위는 + 0 보다는 큼
		if (fmod(pow(a, temp), 10) == 0)
			cout << 10 << "\n";
		else
			cout << fmod(pow(a, temp), 10) << "\n";
	}
}