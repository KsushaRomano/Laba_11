using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double v, v1, S, P;
	int K;
	cout << "Введите проценты: ";
	cin >> P;
	v = 1000;
	v1 = 1100;
	S = v;
	K = 0;
	while (v <= v1) {
		v = v + (v * P / 100);
		S = v;
		K++;
	};
	cout << "Количество месяцев равно: " << K << endl;
	cout << "Итоговый размер вклада: " << S;
}