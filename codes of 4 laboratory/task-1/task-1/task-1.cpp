#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int mass[n][n] = { {1,2,3,4,5}, {1,3,5,8,9}, {2,1,4,8,2}, {5,3,4,4,2}, {1,1,1,5,3} };
	int mass_multi = 1;

	for (int i = 0; i < 5; i++) {
		for (int j = n - 1; j >= 0; j--) {
			mass_multi *= mass[i][j];
			i += 1;

		}
	}
	cout << "Результат выполнения произведения побочной диагонали: " << mass_multi;
}
