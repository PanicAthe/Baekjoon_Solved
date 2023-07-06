#include <iostream>
using namespace std;

int main() {
	int n, g, c, e;
	cin >> n;
	int result[100];
	for (int i = 0; i < n; i++) {
		cin >> g >> c >> e;
		if(g == 1)
			result[i] = (e - c);
		else if (g == 2)
			result[i] = (e - c) * 3 ;
		else 
			result[i] = (e - c) * 5;
	}
	for (int i = 0; i < n; i++) {
		if (i != 0) cout << "\n";
		if (result[i] < 0)
			cout << "0";
		else 
			cout << result[i];
	}
}