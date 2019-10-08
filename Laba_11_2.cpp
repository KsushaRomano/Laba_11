using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	cout << "Введите А и В: ";
	cin >> A >> B;
	while (B <= A) {
		A = A - B;
	};
	cout << "Незанятая часть равна " << A;
}