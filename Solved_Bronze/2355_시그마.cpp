#include <iostream>
using namespace std;

int main() {
    long long a, b;
    long long sum = 0;
    cin >> a >> b;
    if (a > b) swap(a, b);       
    sum = b * (b + 1) / 2 - (a) * (a - 1) / 2; // 1 ~ b���� �ñ׸� - 1 ~ a���� �ñ׸�
    cout << sum << '\n';
}