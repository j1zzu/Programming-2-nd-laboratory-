#include <iostream>
using namespace std;

int main() {
	const int row = 4;
	const int col = 3;
	int mass[row][col] = { {1,2,3}, {3,5,7}, {2,1,1}, {6,5,1} };
	int max_value = -10000;
	int min_value = 10000;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (mass[i][j] > max_value) {
				max_value = mass[i][j];
			}
			if (mass[i][j] < min_value) {
				min_value = mass[i][j];
			}
		}
	}
	cout << (max_value + min_value) / 2;
}
