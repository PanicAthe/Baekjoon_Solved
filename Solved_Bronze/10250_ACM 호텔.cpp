#include <iostream>
using namespace std;

int main() {
	int t, h, w, n;
	cin >> t;
	while (t--) {
		cin >> h >> w >> n;
		if (n % h == 0) {
			cout << h;
			if (n / h < 10)
				cout << "0" << n / h  << endl;
			else
				cout << n / h << endl;
		}
		else {
			cout << n % h;
			if (n / h + 1 < 10)
				cout << "0" << n / h + 1 << endl;
			else
				cout << n / h + 1 << endl;
		}
	}
}