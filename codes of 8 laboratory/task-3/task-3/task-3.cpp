#include <iostream>
using namespace std;

void sorting(double* massive, int row) {
	double moving_element = 0;
	for (int i = 0; i < row - 1; i++) {
		for (int j = i + 1; j < row; j++) {
			if (massive[i] > massive[j]) {
				moving_element = massive[i];
				massive[i] = massive[j];
				massive[j] = moving_element;
			}
		}
	}
	for (int i = 0; i < row; i++) {
		cout << massive[i] << " ";
	}
}

void massive_output(double* massive, int row) {
	cout << "Изначальный массив: ";
	for (int i = 0; i < row; i++) {
		cout << massive[i] << " ";
	}
}

int main() {
	setlocale(LC_ALL, "");
	const int row = 5;
	double massive[row] = { 2.3,4.1,1.3,8.4,1.4 };
	massive_output(massive, row);
	cout << "\nУпорядоченный массив по возрастанию: ";
	sorting(massive, row);
}
