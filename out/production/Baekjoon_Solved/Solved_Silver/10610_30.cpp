#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() { 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string in;
    cin >> in;
    long long sum = 0;   // 여기 실수 필수 (입력은 최대 10^5개의 숫자로 구성되어 있음)
    int n = in.length();  

    for (int i = 0; i < n; i++) {
        sum += in[i] - '0';  // 합을 계산
    }

    sort(in.begin(), in.end(), greater<>()); // 받은 숫자를 내림차순으로 정렬

    if (in[n - 1] == '0' && sum % 3 == 0) // 맨 끝이 0이고 합이 3으로 나눠지면 출력
        cout << in;
    else
        cout << -1;

}
