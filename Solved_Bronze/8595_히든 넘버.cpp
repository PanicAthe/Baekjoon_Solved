#include <iostream>
using namespace std;

int main() {
	//���� �ش����� ��Ȳ�� ���÷� ����, 999999a999999a9999......�� ���ѱ����� 5�鸸�ڰ� ���´� ����
	//�̋� 99999�� �� 71���� ���� ���� long long ���� sum ����
	int n, temp; 
	string s;
	cin >> n >> s;
	long long sum = 0;
	temp = 0;
	for (int i = 0; i < n; i++) {
		if ((s[i] - '0') < 10 && (s[i] - '0') >= 0) {
			temp = temp * 10 + (s[i] - '0');
			while (i + 1 < n && (s[i + 1] - '0') < 10 && (s[i + 1] - '0') >= 0) {
				i++;
				temp = temp * 10 + (s[i] - '0');
			}
			sum += temp; temp = 0;
		}
	}
	cout << sum;
}