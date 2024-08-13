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

    unordered_map<string, int> nameToNum; // �̸��� ��ȣ�� ����
    unordered_map<int, string> numToName; // ��ȣ�� �̸����� ����

    for (int i = 1; i <= n; i++) {
        string name;
        cin >> name;
        nameToNum[name] = i;
        numToName[i] = name;
    }

    for (int i = 0; i < m; i++) {
        string query;
        cin >> query;

        if (isdigit(query[0])) { // ���ڷ� �����ϸ� �̸� ���
            int num = stoi(query);
            cout << numToName[num] << "\n";
        }
        else { // ���ڷ� �����ϸ� ��ȣ ���
            cout << nameToNum[query] << "\n";
        }
    }

    return 0;
}