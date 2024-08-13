#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, i;
    i = 0;
    cout << fixed;
    cout.precision(3);
    while (true) {
        i++;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        else {
            if (a == -1) {
                if (sqrt(pow(c, 2) - pow(b, 2) <= 0))
                    cout << "Triangle #" << i << "\n" << "Impossible." << "\n";
                else {
                    cout << "Triangle #" << i << "\n" << "a = " << sqrt(pow(c, 2) - pow(b, 2)) << "\n";
                }
            }            
            else {
                if (b == -1) {
                    if (sqrt(pow(c, 2) - pow(a, 2) <= 0))
                        cout << "Triangle #" << i << "\n" << "Impossible." << "\n";
                    else {
                        cout << "Triangle #" << i << "\n" << "b = " << sqrt(pow(c, 2) - pow(a, 2)) << "\n";
                    }
                }
                else 
                    cout << "Triangle #"<< i << "\n" << "c = " << sqrt(pow(a, 2) + pow(b, 2)) << "\n";

            }
            cout<<endl;
        }
    }
    return 0;
}
