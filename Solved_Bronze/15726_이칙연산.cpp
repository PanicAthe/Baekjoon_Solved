#include <iostream>
using namespace std;

int main() {

    //���� �� int ���� ��� �� �����Ƿ� ������ long long
    //���� �� �Ҽ��� �Ʒ� ���� ���� �� �����Ƿ� �������� double�� ���߰� ���
    long long a, b, c, x, y;
    cin >> a >> b >> c;
    x = (double)(a * b) / c;     //1 ���⼭ int�� ��ȯ�ع����� �ȵ�
    y = ((double)a / b) * c;     
    if (x > y)                  //2 �� ���ǽĿ��� �Ҽ��� �Ʒ��� �� �Ұ����ϱ� ����
        cout << x;
    else
        cout << y;
    return 0;
}