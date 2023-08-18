#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    string* arr;
    string temp;

    cin >> n >> q;
    arr = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
    }

    for (int i = 0; i < q; i++) {
        cin >> temp;
        if (temp[0] >= '0' && temp[0] <= '9') {
            int index = stoi(temp) - 1;
            cout << arr[index] << "\n";
        }
        else {
            for (int j = 0; j < n; j++) { 
                if (arr[j] == temp) {
                    cout << j + 1 << "\n";
                    break;
                }
            }
        }
    }

    delete[] arr; // 메모리 해제

    return 0;
}
