#include <iostream>
using namespace std;

struct cun {
    int g, s, c;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, count, num;
    cin >> n >> k;
    k--;

    cun* v = new cun[n];

    for (int i = 0; i < n; i++) {
        cun temp;
        cin >> num;
        cin >> temp.g;
        cin >> temp.s;
        cin >> temp.c;
        v[num - 1] = temp;
    }
    count = 1;
    for (int i = 0; i < n; i++) {
        if (v[i].g > v[k].g) {
            count++;
        }
        else if (v[i].g == v[k].g && v[i].s > v[k].s) {
            count++;
        }
        else if (v[i].g == v[k].g&&v[i].s == v[k].s && v[i].c > v[k].c) {  //v[i].g == v[k].g 추가 안했다가 망함
            count++;       //추가 안하면 2 1; 1 1 0 1; 2 0 0 1 ; 일때 이상하게 나옴
        }
    }
    cout << count;

    delete[] v;
}
