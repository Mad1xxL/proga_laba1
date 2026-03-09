#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

bool isInputCorrect(double num) {
	return num > 0;
}

void clearInputError() {
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void calculate(double length, double width) {
	double perimetr = 2 * (length + width);
	double area = length * width;
	double diagonal = sqrt(pow(length, 2) + pow(width, 2));

	cout << "Периметр: " << perimetr << endl;
	cout << "Площадь: " << area << endl;
	cout << "Диагональ: " << diagonal << endl;
}

int main() { 
	double length = -1, width = -1;

	while (!isInputCorrect(length)) {
		cout << "Длина: ";
		cin >> length;
		clearInputError();
	}

	while (!isInputCorrect(width)) {
		cout << "Ширина: ";
		cin >> width;
		clearInputError();
	}

	calculate(length, width);

	return 0;
}

