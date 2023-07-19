#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	double n, in, b, c, s;
	s = 0;
	cin >> n;
	vector<double> a;
	for (int i = 0; i < n; i++) {
		cin >> in;
		a.push_back(in);
	}
	cin >> b >> c;
	for (int i = 0; i < n; i++) {
		s += ceil((a.at(i) - b) / static_cast<double>(c)) + 1;
	}
	cout << s;
}