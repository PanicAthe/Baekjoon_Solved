#include <iostream>
#include <map>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	map <int, int> card;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		card[temp]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		cout << card[temp] <<" ";
	}

}