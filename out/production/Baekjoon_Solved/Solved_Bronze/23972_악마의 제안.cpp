#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long int k, n;
	cin >> k >> n;
	
	if (n == 1) cout << -1;
	else {
		long long int x = ( k * n ) / (n - 1);
		if ((k * n % (n - 1)) != 0) x++;
		cout << x;
	}
}