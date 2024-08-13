#include <iostream>
using namespace std;

int main() {
    long long a, b;
    long long sum = 0;
    cin >> a >> b;
    if (a > b) swap(a, b);       
    sum = b * (b + 1) / 2 - (a) * (a - 1) / 2; // 1 ~ b까지 시그마 - 1 ~ a까지 시그마
    cout << sum << '\n';
}