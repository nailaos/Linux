#include <iostream>
using namespace std;

int main() {
	int n = 0;
	for (int i = 123; i <= 651; i++)
		for (int j = i + 1; j < 988; j++) {
			if (i + j + j + 1 > 1953) break;
			for (int k = j + 1; k < 988; k++) {
				if (i + j + k > 1953) break;
				if (i + j + k == 1953) {
					int num[10] = {0};
					num[i % 10]++;
					num[(i / 10) % 10]++;
					num[(i / 100) % 100]++;
					num[j % 10]++;
					num[(j / 10) % 10]++;
					num[(j / 100) % 100]++;
					num[k % 10]++;
					num[(k / 10) % 10]++;
					num[(k / 100) % 100]++;
					bool satisfy = true;
					for (int i = 1; i < 10; i++)
						if (num[i] == 0)
							satisfy = false;
					if (satisfy) {
						n++;
						cout << "No." << n << "  ";
						cout << i << "  " << j << "  "
						     << k << endl;
					}
				}
			}
		}
	return 0;
}
