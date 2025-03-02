#include <iostream>
using namespace std;

int main() {
	const int row = 4;
	const int col = 3;
	int mass[row][col] = { {1,2,-3}, {3,-5,7}, {-2,-1,1}, {6,5,-1} };
	int positive[col] = { 0 };

	for (int j = 0; j < col; j++) {
		for (int i = 0; i < row; i++) {
			if (mass[i][j] > 0) {
				positive[j] += mass[i][j];
			}
		}
	}

	for (int i = 0; i < col; i++) {
		cout << positive[i] << " ";
	}
}
