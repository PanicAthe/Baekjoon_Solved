#include <iostream>
#include <algorithm>

using namespace std;
long long int* arr;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;
	arr = new long long int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	cout << arr[K - 1];

	return 0;

	delete[] arr;
}