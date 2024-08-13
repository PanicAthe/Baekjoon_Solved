#include <iostream>
using namespace std;

int main() {
	//정말 극단적인 상황을 예시로 들어보면, 999999a999999a9999......로 제한길이인 5백만자가 들어온다 가정
	//이떄 99999는 약 71만번 등장 따라서 long long 으로 sum 지정
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