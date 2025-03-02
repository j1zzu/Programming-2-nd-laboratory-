#include <iostream>
using namespace std;

double addition_between_zero(double massive[], int row) {
	double addition = 0;
	int start = -1;
	int finish = -1;
	int amount_of_zero = 0;
	for (int i = 0; i < row; i++) {
		if (massive[i] == 0) {
			if (start == -1) {
				start = i;
			}
			else {
				finish = i;
			}
			amount_of_zero += 1;
		}

		else if (amount_of_zero == 2) {
			break;
		}
	}

	for (int i = start + 1; i < finish; i++) {
		addition += massive[i];
	}
	return addition;
}

int main() {
	setlocale(LC_ALL, "RUS");
	const int row = 8;
	double massive[row] = { 0,-4.2,3.2,4.5,0,4.2,6.9,0 };
	cout << "Сумма элементов массива { 0,-4.2,3.2,4.5,0,4.2,6.9,0 }, расположенных между первым и последним нулевыми элементами: " << addition_between_zero(massive, row);
}
