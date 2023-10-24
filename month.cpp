#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
	int year, month, week = 0;
	int daysum;
	int m;
	while (1) {
		cout << "请输入年份(2000-2030)和月份(1-12) :";
		cin >> year >> month;
		//读入x的方式必须是 cin>>int型变量，不允许其他方式
		if (year >= 2020 && year <= 3000 && month > 0 && month <= 12)
			break;
		else {
			cout << "输入非法，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
	}
	while (1) {
		cout << "请输入" << year << "年" << month
		     << "月1日的星期(0-6表示星期日-星期六) :";
		cin >> week;
		if (cin.good() == 1) {
			if (week >= 0 && week <= 6) break;

		} else {
			cout << "输入非法，请重新输入" << endl;
			cin.clear();  // 清除错误状态
			cin.ignore(numeric_limits<streamsize>::max(),
				   '\n');  // 清空输入缓冲区
			continue;
		}
	}

	cout << year << "年" << month << "月份"
	     << "的月历为：" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六 "
	     << endl;
	for (int j = 0; j < week; j++) {
		cout << "        ";
	}
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			daysum = 31;
			break;
		case 2:
			daysum = 28;
			break;
		default:
			daysum = 30;
			break;
	}
	if (month == 2) {
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			daysum++;
	}
	cout << "    ";
	for (int i = 1; i <= daysum; i++) {
		cout << setw(2) << i << "      ";
		week++;
		if (week == 7) {
			cout << endl;
			cout << "    ";
			week = 0;
		}
	}
	cout<<endl;
	return 0;
}
