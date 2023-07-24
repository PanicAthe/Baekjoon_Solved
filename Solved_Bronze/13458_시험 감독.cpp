#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long n, in, b, c, s;
	s = 0;
	cin >> n;
	vector<long long> a;
	for (int i = 0; i < n; i++) {
		cin >> in;
		a.push_back(in);
	}
	cin >> b >> c;
	for (int i = 0; i < n; i++) {
		s += 1;
		if (a.at(i) - b > 0) {
			if ((a.at(i) - b) % c == 0)
				s += (a.at(i) - b) / c ;
			else
				s += (a.at(i) - b) / c + 1;
		}
	}
	cout << s;
}