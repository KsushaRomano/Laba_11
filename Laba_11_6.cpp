using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, k, F, F2, g;
	cout << "Введите число Фибоначчи: ";
	cin >> N;
	F = 1;
	F2 = 1;
	k = 3;
	while (F < N) {
		g = F;
		F = F + F2;
		F2 = g;
		k++;
	};
	cout << "Порядковый номер равен: " << k;
}