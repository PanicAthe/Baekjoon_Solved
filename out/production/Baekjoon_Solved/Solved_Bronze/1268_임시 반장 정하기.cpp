#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b, c, d, e;
    cin >> n;
    vector<int> count; //몇번 겹쳤는지 저장
    // 2차원 배열 동적 할당
    int** st = new int* [n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d >> e;
        st[i] = new int[5]; //5학년 까지
        st[i][0] = a;
        st[i][1] = b;
        st[i][2] = c;
        st[i][3] = d;
        st[i][4] = e;
        count.push_back(0); //계산할 학생 추가
    }
    for (int i = 0; i < n; i++) { //체크 학생
        for (int j = 0; j < n; j++) { //같은 반이였던 학생 체크
            if (i == j) continue;
            for (int k = 0; k < 5; k++) { 
                if (st[i][k] == st[j][k]) {
                    count[i]++;
                    break; //한번 이라도 같은 받 이였던이니까 한번 체크 되면 더 볼 필요 x
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

    // 사용 후 메모리 해제
    for (int i = 0; i < n; i++) {
        delete[] st[i];
    }
    delete[] st;

    return 0;
}
