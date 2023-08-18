#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string temp;
    while (true) {
        getline(cin, temp);
        if (temp == ".") {
            break; // 입력 종료 조건
        }

        stack<char> v;
        int i;
        for (i = 0; i < temp.length(); i++) {
            if (temp[i] == '[' || temp[i] == '(') {
                v.push(temp[i]);
            }
            else if (temp[i] == ']') {
                if (v.empty() || v.top() != '[') {
                    break;
                }
                v.pop();
            }
            else if (temp[i] == ')') {
                if (v.empty() || v.top() != '(') {
                    break;
                }
                v.pop();
            }
        }

        if (v.empty() && i == temp.length()) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }

    return 0;
}
