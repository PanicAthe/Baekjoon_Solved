#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> c_students(N);
        vector<int> econ_students(M);

        for (int i = 0; i < N; i++) {
            cin >> c_students[i];
        }

        for (int i = 0; i < M; i++) {
            cin >> econ_students[i];
        }

        sort(c_students.begin(), c_students.end());
        sort(econ_students.begin(), econ_students.end(), greater<int>());

        int i = 0, j = 0;
        int count = 0;

        while (i < N && j < M) {
            if (c_students[i] < econ_students[j]) {
                count++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
