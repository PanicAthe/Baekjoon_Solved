#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n; // 숫자 카드 개수

    map<long long, int> frequency; // 숫자 빈도를 저장할 맵
    for (int i = 0; i < n; ++i) {
        long long card;
        cin >> card;
        frequency[card]++;
    }

    long long mostCommonNumber = 0;
    int maxFrequency = 0;
    for (const auto& entry : frequency) {
        long long num = entry.first;
        int freq = entry.second;
        if (freq > maxFrequency || (freq == maxFrequency && num < mostCommonNumber)) {
            mostCommonNumber = num;
            maxFrequency = freq;
        }
    }

   cout << mostCommonNumber;

    return 0;
}
