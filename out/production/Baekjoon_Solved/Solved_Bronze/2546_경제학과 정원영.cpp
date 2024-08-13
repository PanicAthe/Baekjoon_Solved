#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin.ignore(); // 빈 줄 읽기 위해 사용

        int n, m, s;
        long long suma, sumb;
        cin >> n >> m;

        vector<long long> arra(n);
        suma = sumb = 0;

        for (int i = 0; i < n; i++) {
            cin >> arra[i];
            suma += arra[i];
        }

        for (int i = 0; i < m; i++) {
            int num;
            cin >> num;
            sumb += num;
        }

        s = 0;
        for (int i = 0; i < n; i++) {
            if (arra[i] * n < suma && arra[i] * m > sumb) {
                s++;
            }
        }

        cout << s << endl;
    }

    return 0;
}
