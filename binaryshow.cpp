#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float f = 0.0;//每次加个0.01，做差之后小于0.001说明在误差之内(题目说明只有两位小数)
	float num = 1.2;
	cin >> num;
	float next = 1;
	int a, b;//百分位和十分位
	for (int i = 0; i < 201; i++) {
		if (abs(num - next - f) < 0.001) {
			a = i % 10;
			int tmp = i;
			tmp /= 10;
			b = tmp % 10;
			break;
		}
		f += 0.01;
	}
	num -= next + f;//整数部分
	cout << b << "\n" << a << endl;
}