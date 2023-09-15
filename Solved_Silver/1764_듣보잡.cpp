#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> strSet; //단순히 존재하는지 여부만 확인하려면
                        //map보다 합리적
    vector<string> v;
    string s;
    int n, m, i;

    cin >> n >> m;

    for (i = 0; i < n; i++) {
        cin >> s;
        strSet.insert(s);
    }

    for (i = 0; i < m; i++) {
        cin >> s;
        if (strSet.count(s)) {
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end());
    int overlapCount = v.size();

    cout << overlapCount << "\n";
    for (i = 0; i < overlapCount; i++) {
        cout << v.at(i) << "\n";
    }
}
