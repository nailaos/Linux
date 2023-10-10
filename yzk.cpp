#include <iostream>
using namespace std;

int main() {
	int m = 5, n = 7;
	cout << "m: " << m << "\n"
	     << "n: " << n << endl;
	((m = (5 > 3 && 2)) || (n = (8 < 4 - !0)));
	cout << "m: " << m << "\n"
	     << "n: " << n << endl;
	return 0;
}
