#include <iostream>
#include<string>
using namespace std;

int digit;

void hor() {
    cout << digit << digit << digit << digit << "\n";
}

void ver() {
    cout << "   " << digit << "\n";
}

void ver_lef() {
    cout << digit << "\n" ;
}

void ver2() {
    cout << digit << "  " << digit << "\n";
}

int main() {

    string num;
    cin >> num;
    int i = 0;
    
    while (num[i] != '\0') {
        digit = num[i++] - '0';
        switch (digit)
        {
        case 0:
            hor(); ver2(); ver2(); ver2(); hor();
            break;
        case 1:
            ver(); ver(); ver(); ver(); ver();
            break;
        case 2:
            hor(); ver(); hor(); ver_lef(); hor();
            break;
        case 3:
            hor(); ver(); hor(); ver(); hor();
            break;
        case 4:
            ver2(); ver2(); hor(); ver(); ver();
            break;
        case 5:
            hor(); ver_lef(); hor(); ver(); hor();
            break;
        case 6:
            hor(); ver_lef(); hor(); ver2(); hor();
            break;
        case 7:
            hor(); ver(); ver(); ver(); ver();;
            break;
        case 8:
            hor(); ver2(); hor(); ver2(); hor();
            break;
        case 9:
            hor(); ver2(); hor(); ver(); ver();
            break;
        }

        cout << "\n";
    }
   


//#include <iostream>       ´õ ÂªÀº Ç®ÀÌ
//    using namespace std;
//
//    const char* number[] = {
//        "0000\n0  0\n0  0\n0  0\n0000\n",
//        "   1\n   1\n   1\n   1\n   1\n",
//        "2222\n   2\n2222\n2\n2222\n",
//        "3333\n   3\n3333\n   3\n3333\n",
//        "4  4\n4  4\n4444\n   4\n   4\n",
//        "5555\n5\n5555\n   5\n5555\n",
//        "6666\n6\n6666\n6  6\n6666\n",
//        "7777\n   7\n   7\n   7\n   7\n",
//        "8888\n8  8\n8888\n8  8\n8888\n",
//        "9999\n9  9\n9999\n   9\n   9\n"
//    };
//
//    int main() {
//        string n;
//        cin >> n;
//        for (int i = 0; i < n.size(); i++) {
//            cout << number[n[i] - '0'] << "\n";
//        }
//    }
//}