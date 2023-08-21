#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;
	int n, temp;
	string c;
	cin >> n;
	while (n--) {
		cin >> c;
		if (c == "push")
		{
			cin >> temp;
			s.push(temp);
		}
		else if (c == "top") {
			if (!s.empty()) {
				cout << s.top() << "\n";
			}
			else
				cout << -1 << "\n";
		}
		else if (c == "size")
			cout << s.size() << "\n";
		else if (c == "empty")
			cout << s.empty() << "\n";
		else if (c == "pop") {
			if(!s.empty()){
				cout << s.top() << "\n";
				s.pop();
			}
			else
				cout << -1<< "\n";

		}
	}
}