#include <iostream>
#include <string>

using namespace std;
int main() { //배열을 쓰면 숏코딩 가능
	string in;
	while (getline(cin, in)) {
		if (in == "CU")
			cout << "see you";
		else if (in == ":-)")
			cout << "I’m happy";
		else if (in == ":-(")
			cout << "I’m unhappy";
		else if (in == ";-)")
			cout << "wink";
		else if (in == ":-P")
			cout << "stick out my tongue";
		else if (in == "(~.~)")
			cout << "sleepy";
		else if (in == "TA")
			cout << "totally awesome";
		else if (in == "CCC")
			cout << "Canadian Computing Competition";
		else if (in == ":-P")
			cout << "because";
		else if (in == "TY")
			cout << "thank-you";
		else if (in == "YW")
			cout << "you’re welcome";
		else if (in == "TTYL")
			cout << "talk to you later";
		else cout << in;
		cout << "\n";
	}

}
	