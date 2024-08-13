#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> nameToNum; // 이름을 번호로 매핑
    unordered_map<int, string> numToName; // 번호를 이름으로 매핑

    for (int i = 1; i <= n; i++) {
        string name;
        cin >> name;
        nameToNum[name] = i;
        numToName[i] = name;
    }

    for (int i = 0; i < m; i++) {
        string query;
        cin >> query;

        if (isdigit(query[0])) { // 숫자로 시작하면 이름 출력
            int num = stoi(query);
            cout << numToName[num] << "\n";
        }
        else { // 문자로 시작하면 번호 출력
            cout << nameToNum[query] << "\n";
        }
    }

    return 0;
}