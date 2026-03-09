#include <iostream>
#include <cmath>
#include <clocale>


using namespace std;


double a, b, c, Perimetr, PoluPerimetr, Ploshad;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите значения сторон треугольника:" << endl;
	cin >> a >> b >> c;
	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "Стороны должны быть положительными" << endl;
		return 1;
	}

	if (!(a + b > c && a + c > b && b + c > a)) {
		cout << "Треугольник не существует" << endl;
		return 1;
	}

Perimetr = a + b + c;
PoluPerimetr = (a + b + c) / 2;
Ploshad = sqrt(PoluPerimetr * (PoluPerimetr - a) * (PoluPerimetr - b) * (PoluPerimetr - c));

	if (a == b || a == c || b == c) {
		cout << "Треугольник равнобедренный" << endl;
	}
	else
	{
		cout << "Треугольник не равнобедренный" << endl;
	}
	cout << "Периметр = " << Perimetr << endl << "Площадь = " << Ploshad << endl;
	return 0;
}
