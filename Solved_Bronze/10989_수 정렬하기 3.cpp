#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10000] = { 0, };
    int n, temp;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[temp - 1]++;
    }

    for (int i = 0; i < 10000; i++) {
        if (arr[i] > 0)
        {
            for (int j = 0; j < arr[i]; j++)
                cout << i + 1 << "\n";
        }
    }

    return 0;
}
