#include <iostream>
using namespace std;

int main() {

	int* swit;
	int n, s, gen, t;
	
	cin >> n;
	swit = new int[n+1];
	
	for (int i = 1; i < n+1; i++) {
		cin >> swit[i];
	}
	
	cin >> s;
	while (s--) {
		cin >> gen;
		if (gen == 1) {
			cin >> t;
			for (int i = 1; t*i < n + 1; i++) {
				swit[t * i] = swit[t * i] ? 0 : 1;
			}
		}
		else {
			cin >> t;
			swit[t] = swit[t] ? 0 : 1;
			for (int i = 1; t - i> 0 && t + i < n + 1; i++) {
				if (swit[t - i] == swit[t + i]) {
					swit[t - i] = swit[t + i] = swit[t + i] ? 0 : 1;
				}
				else
					break; //ÁÂ¿ì ´ëÄªÀÌ ´õÀÌ»ó ¾Æ´Ô
			}
		}
	}
	
	for (int i = 1; i < n + 1 ; i++) {
		cout << swit[i] << " ";
		if (i% 20 == 0)
			cout << "\n";
	}
}