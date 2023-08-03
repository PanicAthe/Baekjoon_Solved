#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string temp;
    cin >> n;
    vector<string> v;

    cin >> temp;
    v.push_back(temp);

    for (int i = 0; i < n - 1; i++) { //ÀÌÁøÅ½»öÇÏ¸é¼­ »ðÀÔ
        cin >> temp;
        int left = 0;
        int right = v.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (v[mid] == temp)
                break;

            if (v[mid].length() > temp.length() || (v[mid].length() == temp.length() && v[mid] > temp))
                right = mid - 1;
            else
                left = mid + 1;
        }

        if (left <= right)
            continue;

        v.insert(v.begin() + left, temp);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
}
