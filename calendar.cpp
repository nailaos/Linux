#include <iomanip>
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
	// TODO
	return false;
}

int calculateWeek(int year) {
	// TODO
	return 0;
}

int main() {
	int year;
	cin >> year;
	int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int week = calculateWeek(year);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < week; j++) cout << "    ";
		week++;
		for (int j = 0; j < mon[i]; j++) {
			// TODO
		}
	}
	return 0;
}
