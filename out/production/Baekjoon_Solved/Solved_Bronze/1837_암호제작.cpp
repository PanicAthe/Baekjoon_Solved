#include <iostream>
using namespace std;

int main() {
	int k, tmp;
	string p;
	cin >> p >> k;
	for (int i = 2; i < k; i++) {
		tmp = 0;
		for (int j = 0; j < p.length(); j++)
			tmp = (tmp * 10 + (p[j] - '0')) % i;
		if (tmp == 0) {
			cout << "BAD " << i << endl;
			return 0;
		}
	}
	cout << "GOOD";
	return 0;
}