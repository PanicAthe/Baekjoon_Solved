#include <iostream>
using namespace std;

int main() {

	int n, x;
	cin >> n;

	x = n / 5;
	if (n % 5) {
		while (x >= 0) {
			if((n-(x*5))%3==0)
				break;
			x--;
		}
	}

	if (x == -1 && n % 3 != 0) {
		cout << -1;
	}
	else
		cout<< x + (n - (x*5))/ 3;
}