#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b, c, d, e;
    cin >> n;
    vector<int> count; //��� ���ƴ��� ����
    // 2���� �迭 ���� �Ҵ�
    int** st = new int* [n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d >> e;
        st[i] = new int[5]; //5�г� ����
        st[i][0] = a;
        st[i][1] = b;
        st[i][2] = c;
        st[i][3] = d;
        st[i][4] = e;
        count.push_back(0); //����� �л� �߰�
    }
    for (int i = 0; i < n; i++) { //üũ �л�
        for (int j = 0; j < n; j++) { //���� ���̿��� �л� üũ
            if (i == j) continue;
            for (int k = 0; k < 5; k++) { 
                if (st[i][k] == st[j][k]) {
                    count[i]++;
                    break; //�ѹ� �̶� ���� �� �̿����̴ϱ� �ѹ� üũ �Ǹ� �� �� �ʿ� x
                }
            }
        }
       
    }

    int largest = 0;
    for (int i = 0; i < n; i++) {
        if (count[largest] < count[i])
            largest = i;
    }

    cout << largest + 1;

    // ��� �� �޸� ����
    for (int i = 0; i < n; i++) {
        delete[] st[i];
    }
    delete[] st;

    return 0;
}
