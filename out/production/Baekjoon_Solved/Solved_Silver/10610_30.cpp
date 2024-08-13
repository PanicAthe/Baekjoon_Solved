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
    long long sum = 0;   // ���� �Ǽ� �ʼ� (�Է��� �ִ� 10^5���� ���ڷ� �����Ǿ� ����)
    int n = in.length();  

    for (int i = 0; i < n; i++) {
        sum += in[i] - '0';  // ���� ���
    }

    sort(in.begin(), in.end(), greater<>()); // ���� ���ڸ� ������������ ����

    if (in[n - 1] == '0' && sum % 3 == 0) // �� ���� 0�̰� ���� 3���� �������� ���
        cout << in;
    else
        cout << -1;

}
