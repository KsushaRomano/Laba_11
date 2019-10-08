using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, K, s;
	cout << "Введите N: ";
	cin >> N;
	s = 0;
	K = 1;
	while (s <= N) {
		s = s + K;
		K++;
	};
	cout << "Наименьшее K равно: " << K << endl;
	cout << "Сумма равна: " << s;
}