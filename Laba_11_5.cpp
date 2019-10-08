using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B;
	cout << "Введите числа А и В: ";
	cin >> A >> B;
	while (A != B) {
		if (A >= B) {
			A = A - B;
		}
		else if (B <= A) {
			B = B - A;
		};
	};
	cout << "НОД равен: " << B;
}