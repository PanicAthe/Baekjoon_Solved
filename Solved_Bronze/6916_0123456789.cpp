#include <iostream>
using namespace std;

void hor() {
	cout << " * * *\n";
}

void ver() {
	cout << "      *\n      *\n      *\n";
}

void ver_lef() {
    cout << "*\n*\n*\n";
}

void ver2() {
	cout << "*     *\n*     *\n*     *\n";
}

int main() {
	int digit;
	cin >> digit;
	
    switch (digit)
    {
    case 0:
        hor(); ver2(); cout << "\n"; ver2(); hor();
        break;
    case 1:
        cout << "\n"; ver(); cout << "\n";  ver();
        break;
    case 2:
        hor(); ver(); hor(); ver_lef(); hor();
        break;
    case 3:
        hor(); ver(); hor(); ver(); hor();
        break;
    case 4:
        cout << "\n"; ver2(); hor(); ver(); cout << "\n";
        break;
    case 5:
        hor(); ver_lef(); hor(); ver(); hor();
        break;
    case 6:
        hor(); ver_lef(); hor(); ver2(); hor();
        break;
    case 7:
        hor(); ver(); cout << "\n"; ver(); cout << "\n";
        break;
    case 8:
        hor(); ver2(); hor(); ver2(); hor();
        break;
    case 9:
        hor(); ver2(); hor(); ver(); hor();
        break;
    }
}