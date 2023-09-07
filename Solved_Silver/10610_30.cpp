#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {  // 더 계산을 줄이는 방법도 있음

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string in;
    cin >> in;
    long long sum = 0;   //여기 실수
    int n = in.length();

    for (int i = 0; i < n; i++) {
        sum += in[i] - '0';
    }

    sort(in.begin(), in.end(), greater<>());

    if (in[n - 1] == '0' && sum % 3 == 0)
        cout << in;
    else
        cout << -1;

}
