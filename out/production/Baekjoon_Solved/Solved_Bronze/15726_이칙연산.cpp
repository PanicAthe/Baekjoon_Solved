#include <iostream>
using namespace std;

int main() {

    //곱할 때 int 형을 벗어날 수 있으므로 변수는 long long
    //나눌 때 소수점 아래 수가 나올 수 있으므로 피제수를 double로 맞추고 계산
    long long a, b, c, x, y;
    cin >> a >> b >> c;
    x = (double)(a * b) / c;     //1 여기서 int로 변환해버리면 안됨
    y = ((double)a / b) * c;     
    if (x > y)                  //2 이 조건식에서 소숫점 아래의 비교 불가능하기 때문
        cout << x;
    else
        cout << y;
    return 0;
}