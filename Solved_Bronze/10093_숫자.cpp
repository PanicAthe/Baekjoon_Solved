#include <iostream>
using namespace std;

int main() {
    
    long long start, end;
    cin >> start >> end;
    if (start > end) swap(start, end);

    if (start == end || end - start == 1)
        cout << 0;
    else {
        cout << end - start - 1 << '\n';
    }
    for (long long i = start+1; i < end; i++) {   //���⵵ longlong �����ؾ� 100��
        cout << i << " ";
    }
}
