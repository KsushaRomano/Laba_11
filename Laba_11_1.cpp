using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, i;
	cout << "Введите число А и В: ";
	cin >> A >> B;
	while (A <= B) {
		i = A;
		for (i = 1; i <= A; i++) {
			cout << A << endl;
		};
		A++;
	};
}